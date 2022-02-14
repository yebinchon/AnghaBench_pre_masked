
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* time_t ;
struct _tfinddata_t {int name; scalar_t__ size; void* time_write; void* time_access; void* time_create; int attrib; } ;
typedef int __int64 ;
struct TYPE_3__ {int cFileName; scalar_t__ nFileSizeLow; scalar_t__ nFileSizeHigh; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; int dwFileAttributes; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef int HANDLE ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(intptr_t VAR_1, struct _tfinddata_t* VAR_2)
{
    WIN32_FIND_DATA VAR_3;

    if (!FUNC_1((HANDLE)VAR_1, &VAR_3)) {
     FUNC_3(FUNC_2());
        return -1;
 }

    VAR_2->attrib = VAR_3.dwFileAttributes;
    VAR_2->time_create = (time_t)FUNC_0(&VAR_3.ftCreationTime,((void*)0));
    VAR_2->time_access = (time_t)FUNC_0(&VAR_3.ftLastAccessTime,((void*)0));
    VAR_2->time_write = (time_t)FUNC_0(&VAR_3.ftLastWriteTime,((void*)0));
    VAR_2->size = (((__int64)VAR_3.nFileSizeHigh)<<32) + VAR_3.nFileSizeLow;
    FUNC_4(VAR_2->name,VAR_3.cFileName, VAR_0);

    return 0;
}
