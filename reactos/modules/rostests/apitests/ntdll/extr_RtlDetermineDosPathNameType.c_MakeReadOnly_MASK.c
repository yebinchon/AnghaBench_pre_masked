
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ SIZE_T ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int ,scalar_t__*,int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,scalar_t__*,int ) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static
VOID
FUNC_7(
    PVOID VAR_4,
    SIZE_T VAR_5)
{
    NTSTATUS VAR_6;
    SIZE_T VAR_7 = FUNC_5(VAR_5);
    PVOID VAR_8 = (PVOID)FUNC_4((SIZE_T)VAR_4);

    if (VAR_7)
    {
        VAR_6 = FUNC_1(FUNC_2(), &VAR_8, 0, &VAR_7, VAR_0, VAR_2);
        if (!FUNC_0(VAR_6))
        {
            VAR_7 = 0;
            VAR_6 = FUNC_3(FUNC_2(), &VAR_8, &VAR_7, VAR_1);
            FUNC_6(VAR_6 == VAR_3, "Status = %lx\n", VAR_6);
        }
    }
}
