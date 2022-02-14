
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _finddata_t {scalar_t__ attrib; int name; int size; void* time_write; void* time_access; void* time_create; } ;
struct TYPE_3__ {scalar_t__ dwFileAttributes; int cFileName; int nFileSizeLow; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef int HANDLE ;
typedef int DWORD ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 () ;
 void* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

int FUNC_5(intptr_t VAR_1, struct _finddata_t *VAR_2)
{
    WIN32_FIND_DATA VAR_3;
    DWORD VAR_4;



    if (!FUNC_0((HANDLE)VAR_1, &VAR_3))
    {
        VAR_4 = FUNC_1();
        switch (VAR_4) {
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

    VAR_2->attrib = (VAR_3.dwFileAttributes == VAR_0)? 0 : VAR_3.dwFileAttributes;
    VAR_2->time_create = FUNC_2(&VAR_3.ftCreationTime);
    VAR_2->time_access = FUNC_2(&VAR_3.ftLastAccessTime);
    VAR_2->time_write = FUNC_2(&VAR_3.ftLastWriteTime);

    VAR_2->size = VAR_3.nFileSizeLow;
    FUNC_4(VAR_2->name, VAR_3.cFileName, FUNC_3(VAR_3.cFileName)+1);

    return 0;
}
