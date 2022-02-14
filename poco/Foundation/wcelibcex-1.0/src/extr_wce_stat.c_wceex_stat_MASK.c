
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct stat {int st_nlink; scalar_t__ st_uid; scalar_t__ st_ino; scalar_t__ st_gid; scalar_t__ st_dev; scalar_t__ st_rdev; scalar_t__ st_size; int st_mode; void* st_mtime; void* st_ctime; void* st_atime; } ;
struct TYPE_5__ {scalar_t__ dwHighDateTime; scalar_t__ dwLowDateTime; } ;
struct TYPE_4__ {char* cFileName; scalar_t__ nFileSizeLow; int dwFileAttributes; TYPE_3__ ftCreationTime; TYPE_3__ ftLastAccessTime; TYPE_3__ ftLastWriteTime; scalar_t__ nFileSizeHigh; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef int SYSTEMTIME ;
typedef scalar_t__ HANDLE ;
typedef int FILETIME ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char const*,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 void* FUNC_9 (int *) ;
 void* FUNC_10 (scalar_t__,int ,int,int ,int ,int ) ;

int FUNC_11(const char* VAR_4, struct stat *VAR_5)
{
    HANDLE VAR_6;
    WIN32_FIND_DATA VAR_7;
    wchar_t VAR_8[VAR_2];


    if(FUNC_8(VAR_4, "?*"))

    {

        return(-1);
    }


    FUNC_6(VAR_8, VAR_4, FUNC_7(VAR_4) + 1);
    VAR_6 = FUNC_3(VAR_8, &VAR_7);
    if(VAR_6 == VAR_1)
    {

        if(FUNC_5(VAR_4, ".\\")==0)
        {
            VAR_7.dwFileAttributes = VAR_0;


            VAR_7.nFileSizeHigh = 0;
            VAR_7.nFileSizeLow = 0;
            VAR_7.cFileName[0] = '\0';

            VAR_5->st_mtime = FUNC_10(1980 - VAR_3, 0, 1, 0, 0, 0);
            VAR_5->st_atime = VAR_5->st_mtime;
            VAR_5->st_ctime = VAR_5->st_mtime;
        }


        else
        {

            return(-1);
        }
    }
    else
    {


        SYSTEMTIME VAR_9;
        FILETIME VAR_10;


        if(!FUNC_0( &VAR_7.ftLastWriteTime, &VAR_10) ||
            !FUNC_1(&VAR_10, &VAR_9))
        {

            FUNC_2( VAR_6 );
            return( -1 );
        }

        VAR_5->st_mtime = FUNC_9(&VAR_9);


        if(VAR_7.ftLastAccessTime.dwLowDateTime || VAR_7.ftLastAccessTime.dwHighDateTime)
        {
            if(!FUNC_0(&VAR_7.ftLastAccessTime, &VAR_10) ||
                !FUNC_1(&VAR_10, &VAR_9))
            {

                FUNC_2( VAR_6 );
                return( -1 );
            }
            VAR_5->st_atime = FUNC_9(&VAR_9);
        }
        else
        {
            VAR_5->st_atime = VAR_5->st_mtime;
        }



        if(VAR_7.ftCreationTime.dwLowDateTime || VAR_7.ftCreationTime.dwHighDateTime)
        {
            if(!FUNC_0(&VAR_7.ftCreationTime, &VAR_10) ||
                !FUNC_1(&VAR_10, &VAR_9))
            {

                FUNC_2( VAR_6 );
                return( -1 );
            }
            VAR_5->st_ctime = FUNC_9(&VAR_9);
        }
        else
        {
            VAR_5->st_ctime = VAR_5->st_mtime;
        }


        FUNC_2(VAR_6);
    }


    VAR_5->st_mode = FUNC_4(VAR_4, VAR_7.dwFileAttributes);


    VAR_5->st_size = VAR_7.nFileSizeLow;


    VAR_5->st_rdev = VAR_5->st_dev = 0;


    VAR_5->st_gid = 0;
    VAR_5->st_ino = 0;
    VAR_5->st_uid = 0;


    VAR_5->st_nlink = 1;


    return 0;
}
