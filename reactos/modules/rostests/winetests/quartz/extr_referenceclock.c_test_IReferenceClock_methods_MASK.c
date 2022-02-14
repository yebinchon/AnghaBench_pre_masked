
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFERENCE_TIME ;
typedef int LONG ;
typedef int IReferenceClock ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,char const*,...) ;

__attribute__((used)) static void FUNC_3(const char * VAR_3, IReferenceClock * VAR_4)
{
    HRESULT VAR_5;
    REFERENCE_TIME VAR_6;
    REFERENCE_TIME VAR_7;
    LONG VAR_8;


    VAR_5 = FUNC_0(VAR_4, ((void*)0));
    FUNC_2 (VAR_5 == VAR_0, "%s - Expected E_POINTER (0x%08x), got 0x%08x\n", VAR_3, VAR_0, VAR_5);



    VAR_6 = (REFERENCE_TIME)0xdeadbeef;
    VAR_5 = FUNC_0(VAR_4, &VAR_6);
    FUNC_2 (VAR_5 == VAR_1 || VAR_5 == VAR_2, "%s - Expected S_OK or S_FALSE, got 0x%08x\n", VAR_3, VAR_5);
    FUNC_2 (VAR_6 != 0xdeadbeef, "%s - value was NOT changed on return!\n", VAR_3);


    VAR_7 = (REFERENCE_TIME)0xdeadbeef;
    VAR_5 = FUNC_0(VAR_4, &VAR_7);
    FUNC_2 (VAR_5 == VAR_1 || VAR_5 == VAR_2, "%s - Expected S_OK or S_FALSE, got 0x%08x\n", VAR_3, VAR_5);
    FUNC_2 (VAR_7 != 0xdeadbeef, "%s - value was NOT changed on return!\n", VAR_3);



    FUNC_2 ((VAR_5 != VAR_1 || VAR_6 == VAR_7), "%s - returned S_FALSE, but values not equal!\n", VAR_3);

    VAR_6 = VAR_7;
    FUNC_1(1000);
    VAR_5 = FUNC_0(VAR_4, &VAR_7);

    FUNC_2 (VAR_5 == VAR_2, "%s - Expected S_OK, got 0x%08x\n", VAR_3, VAR_5);



    VAR_8 = VAR_7 - VAR_6;
    FUNC_2 (9940000 <= VAR_8 && VAR_8 <= 10240000, "%s - Expected difference around 10000000, got %u\n", VAR_3, VAR_8);

}
