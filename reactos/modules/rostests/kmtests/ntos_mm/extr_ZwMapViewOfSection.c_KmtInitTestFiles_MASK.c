
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int Information; } ;
struct TYPE_6__ {scalar_t__ QuadPart; } ;
typedef int PVOID ;
typedef int ** PHANDLE ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_2__ IO_STATUS_BLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (int **,int,int *,TYPE_2__*,int *,int ,int ,int ,int,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *,TYPE_2__*,int ,int ,TYPE_1__*,int *) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static
VOID
FUNC_7(PHANDLE VAR_19, PHANDLE VAR_20, PHANDLE VAR_21)
{
    NTSTATUS VAR_22;
    LARGE_INTEGER VAR_23;
    IO_STATUS_BLOCK VAR_24;


    VAR_22 = FUNC_0(VAR_19, VAR_10, &VAR_13, &VAR_24, ((void*)0), VAR_1, VAR_6, VAR_5, VAR_4, ((void*)0), 0);
    FUNC_4(VAR_22, VAR_15);
    FUNC_3(*VAR_19 != ((void*)0), "Couldn't acquire READONLY handle\n");


    VAR_22 = FUNC_0(VAR_21, VAR_9, &VAR_13, &VAR_24, ((void*)0), VAR_1, VAR_6, VAR_5, VAR_4, ((void*)0), 0);
    FUNC_4(VAR_22, VAR_15);
    FUNC_3(*VAR_21 != ((void*)0), "Couldn't acquire EXECUTE handle\n");



    VAR_22 = FUNC_0(VAR_20, (VAR_11 | VAR_16), &VAR_12, &VAR_24, ((void*)0), VAR_1, VAR_7, VAR_8, (VAR_4 | VAR_3), ((void*)0), 0);
    FUNC_4(VAR_22, VAR_15);
    FUNC_5(VAR_24.Information, VAR_2);
    FUNC_3(*VAR_20 != ((void*)0), "WriteOnlyFile is NULL\n");
    if (!FUNC_6(*VAR_20 != ((void*)0), "No WriteOnlyFile\n"))
    {
        VAR_23.QuadPart = 0;
        VAR_22 = FUNC_2(*VAR_20, ((void*)0), ((void*)0), ((void*)0), &VAR_24, (PVOID)VAR_17, VAR_18, &VAR_23, ((void*)0));
        FUNC_3(VAR_22 == VAR_15 || VAR_22 == VAR_14, "Status = 0x%08lx\n", VAR_22);
        VAR_22 = FUNC_1(*VAR_20, VAR_0, ((void*)0));
        FUNC_4(VAR_22, VAR_15);
        FUNC_5(VAR_24.Information, VAR_18);
    }
}
