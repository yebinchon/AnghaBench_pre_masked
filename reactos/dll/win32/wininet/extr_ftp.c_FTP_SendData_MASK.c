
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
typedef int ftp_session_t ;
struct TYPE_3__ {scalar_t__ nFileSizeLow; } ;
typedef int LONG ;
typedef int INT ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;
typedef TYPE_1__ BY_HANDLE_FILE_INFORMATION ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int *,int,scalar_t__*,int ) ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,scalar_t__,int ) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static BOOL FUNC_8(ftp_session_t *VAR_1, INT VAR_2, HANDLE VAR_3)
{
    BY_HANDLE_FILE_INFORMATION VAR_4;
    DWORD VAR_5 = 0;
    DWORD VAR_6 = 0;
    DWORD VAR_7 = 0;
    DWORD VAR_8, VAR_9;
    int VAR_10 = 1;
    time_t VAR_11, VAR_12;
    LONG VAR_13;
    CHAR *VAR_14;

    FUNC_3("\n");
    VAR_14 = FUNC_4(sizeof(CHAR)*VAR_0);


    FUNC_1(VAR_3, &VAR_4);
    FUNC_7(&VAR_11);

    do
    {
        VAR_8 = VAR_5 - VAR_6;

        if (VAR_8 <= 0)
        {

            VAR_6 = 0;
            if (!FUNC_2(VAR_3, VAR_14, VAR_0, &VAR_5, 0))
            FUNC_0("Failed reading from file\n");

            if (VAR_5 > 0)
                VAR_8 = VAR_5;
            else
                break;
        }

        VAR_9 = VAR_0 < VAR_8 ?
            VAR_0 : VAR_8;
        VAR_10 = FUNC_6(VAR_2, VAR_14, VAR_9, 0);

        if (VAR_10 != -1)
        {
            VAR_6 += VAR_10;
            VAR_7 += VAR_10;
        }


        FUNC_7(&VAR_12);
        VAR_13 = VAR_12 - VAR_11;
        if( VAR_13 / 60 > 0 )
        {
            FUNC_3( "%d bytes of %d bytes (%d%%) in %d min %d sec estimated remaining time %d sec\n",
            VAR_7, VAR_4.nFileSizeLow, VAR_7*100/VAR_4.nFileSizeLow, VAR_13 / 60,
            VAR_13 % 60, (VAR_4.nFileSizeLow - VAR_7) * VAR_13 / VAR_7 );
        }
        else
        {
            FUNC_3( "%d bytes of %d bytes (%d%%) in %d sec estimated remaining time %d sec\n",
            VAR_7, VAR_4.nFileSizeLow, VAR_7*100/VAR_4.nFileSizeLow, VAR_13,
            (VAR_4.nFileSizeLow - VAR_7) * VAR_13 / VAR_7);
        }
    } while (VAR_10 != -1);

    FUNC_3("file transfer complete!\n");

    FUNC_5(VAR_14);
    return VAR_7;
}
