
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int Information; } ;
struct TYPE_5__ {scalar_t__ QuadPart; } ;
typedef scalar_t__ SIZE_T ;
typedef int * PVOID ;
typedef int NTSTATUS ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_2__ IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int * FUNC_0 (int ,int ,char) ;
 int FUNC_1 (int *,char) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int *,int *,TYPE_2__*,int *,int ,TYPE_1__*,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static
SIZE_T
FUNC_7(HANDLE VAR_2, ULONG VAR_3, PVOID VAR_4)
{
    NTSTATUS VAR_5;
    LARGE_INTEGER VAR_6;
    IO_STATUS_BLOCK VAR_7;
    PVOID VAR_8;
    SIZE_T VAR_9;

    VAR_9 = 0;
    VAR_6.QuadPart = 0;

    VAR_8 = FUNC_0(VAR_0, VAR_3, 'Test');
    if (!FUNC_6((VAR_8 != ((void*)0)), "Error allocating memory for FileContent\n"))
    {
        VAR_5 = FUNC_3(VAR_2, ((void*)0), ((void*)0), ((void*)0), &VAR_7, VAR_8, VAR_3, &VAR_6, ((void*)0));
        FUNC_4(VAR_5, VAR_1);
        FUNC_5(VAR_7.Information, VAR_3);

        VAR_9 = 0;
        VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_3);
        FUNC_1(VAR_8, 'Test');
    }

    return VAR_9;
}
