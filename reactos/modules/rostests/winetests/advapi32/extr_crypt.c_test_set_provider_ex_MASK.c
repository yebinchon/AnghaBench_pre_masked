
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int,char*,scalar_t__,...) ;
 int FUNC_7 (int ,int *,int,int *,int*) ;
 int FUNC_8 (int *,int ,int*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void FUNC_13(void)
{
 DWORD VAR_7;
 DWORD VAR_8 = 5;
        LPSTR VAR_9 = ((void*)0);
        DWORD VAR_10;


 LPSTR VAR_11 = ((void*)0);
 DWORD VAR_12;

 if(!&FUNC_7 || !&FUNC_8)
 {
     FUNC_12("CryptGetDefaultProviderA and/or CryptSetProviderExA are not available\n");
     return;
 }


        FUNC_7(VAR_6, ((void*)0), VAR_1, ((void*)0), &VAR_10);
        if (!(VAR_9 = FUNC_1(VAR_4, VAR_10)))
            return;
        VAR_7 = FUNC_7(VAR_6, ((void*)0), VAR_1, VAR_9, &VAR_10);
        FUNC_6(VAR_7, "%d\n", FUNC_0());


 VAR_7 = FUNC_8(VAR_5, VAR_6, &VAR_8, VAR_1);
 FUNC_6(!VAR_7 && FUNC_0()==VAR_3, "expected %i, got %d\n",
  VAR_3, FUNC_0());


        FUNC_3(0xdeadbeef);
 VAR_7 = FUNC_8(VAR_5, VAR_6, ((void*)0), VAR_1 | VAR_0);
 if (!VAR_7)
 {
                FUNC_6( FUNC_0() == VAR_2 || FUNC_4(FUNC_0() == VAR_3),
                    "wrong error %u\n", FUNC_0() );
  FUNC_9("Not enough rights to remove the default provider\n");
                FUNC_2(VAR_9);
  return;
 }

 VAR_7 = FUNC_8(VAR_5, VAR_6, ((void*)0), VAR_1);
 FUNC_6(VAR_7, "%d\n", FUNC_0());


 VAR_7 = FUNC_7(VAR_6, ((void*)0), VAR_1, ((void*)0), &VAR_12);
 FUNC_6(VAR_7, "%d\n", FUNC_0());
 if (!(VAR_11 = FUNC_1(VAR_4, VAR_12)))
  goto reset;

 VAR_7 = FUNC_7(VAR_6, ((void*)0), VAR_1, VAR_11, &VAR_12);
 FUNC_6(VAR_7 && !FUNC_10(VAR_5, VAR_11), "expected %s, got %s\n", VAR_5, VAR_11);
 FUNC_6(VAR_7 && VAR_12==(FUNC_11(VAR_5) + 1), "expected %i, got %d\n", (FUNC_5(VAR_5) + 1), VAR_12);

 FUNC_2(VAR_11);

reset:

        VAR_7 = FUNC_8(VAR_9, VAR_6, ((void*)0), VAR_1);
        FUNC_6(VAR_7, "%d\n", FUNC_0());
        FUNC_2(VAR_9);
}
