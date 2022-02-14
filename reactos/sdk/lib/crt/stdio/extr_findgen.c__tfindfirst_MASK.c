
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* time_t ;
struct _tfinddata_t {int name; scalar_t__ size; void* time_write; void* time_access; void* time_create; int attrib; } ;
typedef int __int64 ;
typedef int _TCHAR ;
struct TYPE_3__ {int cFileName; scalar_t__ nFileSizeLow; scalar_t__ nFileSizeHigh; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; int dwFileAttributes; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int const*,TYPE_1__*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

intptr_t FUNC_5(const _TCHAR* VAR_2, struct _tfinddata_t* VAR_3)
{
    WIN32_FIND_DATA VAR_4;
    HANDLE VAR_5;

    VAR_5 = FUNC_1(VAR_2, &VAR_4);
    if (VAR_5 == VAR_0) {
        FUNC_3(FUNC_2());
        return -1;
    }

    VAR_3->attrib = VAR_4.dwFileAttributes;
    VAR_3->time_create = (time_t)FUNC_0(&VAR_4.ftCreationTime,((void*)0));
    VAR_3->time_access = (time_t)FUNC_0(&VAR_4.ftLastAccessTime,((void*)0));
    VAR_3->time_write = (time_t)FUNC_0(&VAR_4.ftLastWriteTime,((void*)0));
    VAR_3->size = (((__int64)VAR_4.nFileSizeHigh)<<32) + VAR_4.nFileSizeLow;
    FUNC_4(VAR_3->name,VAR_4.cFileName,VAR_1);

    return (intptr_t)VAR_5;
}
