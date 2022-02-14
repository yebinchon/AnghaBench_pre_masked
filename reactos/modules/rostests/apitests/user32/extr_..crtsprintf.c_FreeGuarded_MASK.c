
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int SIZE_T ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static
VOID
FUNC_4(
    PVOID VAR_2)
{
    NTSTATUS VAR_3;
    PVOID VAR_4 = (PVOID)FUNC_2((SIZE_T)VAR_2);
    SIZE_T VAR_5 = 0;

    VAR_3 = FUNC_1(FUNC_0(), &VAR_4, &VAR_5, VAR_0);
    FUNC_3(VAR_3 == VAR_1, "Status = %lx\n", VAR_3);
}
