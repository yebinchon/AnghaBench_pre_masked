
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int options ;
typedef int * PAVISTREAM ;
typedef int * LPAVICOMPRESSOPTIONS ;
typedef scalar_t__ LONG ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef int AVICOMPRESSOPTIONS ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int,int **,int **) ;
 scalar_t__ FUNC_1 (int,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int,char*,scalar_t__,...) ;
 int FUNC_9 (char*,scalar_t__,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_10(void)
{
    AVICOMPRESSOPTIONS VAR_7[2];
    LPAVICOMPRESSOPTIONS VAR_8[2];
    PAVISTREAM VAR_9[2] = {((void*)0), ((void*)0)};
    HRESULT VAR_10;
    DWORD VAR_11;
    LONG VAR_12;

    VAR_8[0] = &VAR_7[0];
    VAR_8[1] = &VAR_7[1];
    FUNC_7(VAR_7, sizeof(VAR_7));

    FUNC_6(0xdeadbeef);
    VAR_10 = FUNC_3(&VAR_9[0], ((void*)0));
    FUNC_8(VAR_10 == VAR_0, "0: got 0x%x and %p (expected AVIERR_OK)\n", VAR_10, VAR_9[0]);

    FUNC_6(0xdeadbeef);
    VAR_10 = FUNC_3(&VAR_9[1], ((void*)0));
    FUNC_8(VAR_10 == VAR_0, "1: got 0x%x and %p (expected AVIERR_OK)\n", VAR_10, VAR_9[1]);

    FUNC_6(0xdeadbeef);
    VAR_10 = FUNC_4(VAR_9[0], VAR_4);
    FUNC_8(VAR_10 == VAR_0, "0: got 0x%x (expected AVIERR_OK)\n", VAR_10);

    FUNC_6(0xdeadbeef);
    VAR_10 = FUNC_4(VAR_9[1], VAR_5);
    FUNC_8(VAR_10 == VAR_0, "1: got 0x%x (expected AVIERR_OK)\n", VAR_10);

    if (VAR_6) {
        FUNC_6(0xdeadbeef);
        VAR_11 = FUNC_0(0, VAR_2 |VAR_3 | VAR_1,
                             2, VAR_9, VAR_8);
        FUNC_9("got %u with 0x%x/%u\n", VAR_11, FUNC_5(), FUNC_5());
    }

    FUNC_6(0xdeadbeef);
    VAR_12 = FUNC_1(2, VAR_8);
    FUNC_8(VAR_12 == VAR_0, "got 0x%x with 0x%x/%u\n", VAR_12, FUNC_5(), FUNC_5());

    FUNC_6(0xdeadbeef);
    VAR_11 = FUNC_2(VAR_9[0]);
    FUNC_8(VAR_11 == 0, "0: got refcount %u (expected 0)\n", VAR_11);

    FUNC_6(0xdeadbeef);
    VAR_11 = FUNC_2(VAR_9[1]);
    FUNC_8(VAR_11 == 0, "1: got refcount %u (expected 0)\n", VAR_11);

}
