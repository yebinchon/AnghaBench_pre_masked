
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SIZE_T ;
typedef int * PVOID ;
typedef int * PCHAR ;
typedef scalar_t__ NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int **,int ,scalar_t__*,int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int **,scalar_t__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static
PVOID
FUNC_6(
    SIZE_T VAR_7)
{
    NTSTATUS VAR_8;
    SIZE_T VAR_9 = FUNC_4(VAR_7 + VAR_5);
    PVOID VAR_10 = ((void*)0);
    PCHAR VAR_11;

    VAR_8 = FUNC_1(FUNC_2(), &VAR_10, 0, &VAR_9, VAR_2, VAR_3);

    if (!FUNC_0(VAR_8))
        return ((void*)0);

    VAR_9 -= VAR_5;
    if (VAR_9)
    {
        VAR_8 = FUNC_1(FUNC_2(), &VAR_10, 0, &VAR_9, VAR_0, VAR_4);
        if (!FUNC_0(VAR_8))
        {
            VAR_9 = 0;
            VAR_8 = FUNC_3(FUNC_2(), &VAR_10, &VAR_9, VAR_1);
            FUNC_5(VAR_8 == VAR_6, "Status = %lx\n", VAR_8);
            return ((void*)0);
        }
    }

    VAR_11 = VAR_10;
    VAR_11 += VAR_9 - VAR_7;

    return VAR_11;
}
