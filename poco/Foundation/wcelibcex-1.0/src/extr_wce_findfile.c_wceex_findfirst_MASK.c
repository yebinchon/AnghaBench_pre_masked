
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct _finddata_t {scalar_t__ attrib; int name; int size; void* time_write; void* time_access; void* time_create; } ;
struct TYPE_3__ {scalar_t__ dwFileAttributes; int cFileName; int nFileSizeLow; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;






 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 void* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;

intptr_t FUNC_7(const char *VAR_3, struct _finddata_t *VAR_4)
{
    WIN32_FIND_DATA VAR_5;
    HANDLE VAR_6;
    DWORD VAR_7;
    wchar_t VAR_8[VAR_2];

    FUNC_2(VAR_8, VAR_3, FUNC_3(VAR_3) + 1);



    VAR_6 = FUNC_0(VAR_8, &VAR_5);
    if(VAR_6 == VAR_1)
    {
        VAR_7 = FUNC_1();
        switch (VAR_7)
        {
        case 129:
        case 131:
        case 128:

            break;

        case 130:

            break;

        default:

            break;
        }
        return (-1);
    }

    VAR_4->attrib = (VAR_5.dwFileAttributes == VAR_0) ? 0 : VAR_5.dwFileAttributes;
    VAR_4->time_create = FUNC_4(&VAR_5.ftCreationTime);
    VAR_4->time_access = FUNC_4(&VAR_5.ftLastAccessTime);
    VAR_4->time_write = FUNC_4(&VAR_5.ftLastWriteTime);

    VAR_4->size = VAR_5.nFileSizeLow;
    FUNC_6(VAR_4->name, VAR_5.cFileName, FUNC_5(VAR_5.cFileName) + 1);

    return (intptr_t)VAR_6;
}
