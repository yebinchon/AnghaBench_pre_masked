
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int originalGuid ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int HCRYPTPROV ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,char*,int *,int *,int *,int*) ;
 int FUNC_5 (int ,char*,int ,int ,int const*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,int ,int *,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_12(void)
{
   char VAR_11[40];
   LONG VAR_12;
   HKEY VAR_13;
   DWORD VAR_14;
   HCRYPTPROV VAR_15;
   BOOL VAR_16 = VAR_3, VAR_17;

   VAR_12 = FUNC_3(VAR_4, "Software\\Microsoft\\Cryptography",
                     0, VAR_5, &VAR_13);
   if (VAR_12 != VAR_2)
   {
       FUNC_10("couldn't open HKLM\\Software\\Microsoft\\Cryptography\n");
       return;
   }

   VAR_14 = sizeof(VAR_11);
   VAR_12 = FUNC_4(VAR_13, "MachineGuid", ((void*)0), ((void*)0), (BYTE *)VAR_11,
                        &VAR_14);
   if (VAR_12 == VAR_2)
   {
       VAR_16 = VAR_9;
       VAR_12 = FUNC_2(VAR_13, "MachineGuid");
       FUNC_7(!VAR_12 || FUNC_6(VAR_12 == VAR_0) , "RegDeleteValueA failed: %d\n", VAR_12);
       if (VAR_12 == VAR_0)
       {
           FUNC_10("broken virtualization on HKLM\\Software\\Microsoft\\Cryptography\n");
           FUNC_1(VAR_13);
           return;
       }
   }
   else
       FUNC_7(VAR_12 == VAR_1, "expected ERROR_FILE_NOT_FOUND, got %d\n",
          VAR_12);

   VAR_17 = FUNC_8(&VAR_15, VAR_10, ((void*)0), VAR_7, 0);
   FUNC_7(VAR_17 || FUNC_6(!VAR_17 && FUNC_0() == VAR_6 ),
      "CryptAcquireContextA failed: %08x\n", FUNC_0());
   FUNC_9(VAR_15, 0);

   if (VAR_16)
       FUNC_5(VAR_13, "MachineGuid", 0, VAR_8, (const BYTE *)VAR_11,
                      FUNC_11(VAR_11)+1);
   FUNC_1(VAR_13);
}
