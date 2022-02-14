
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 (int,char*,char*,int *,int *) ;
 int FUNC_1 (int,char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    BOOL VAR_6;
    VAR_6 = FUNC_0(VAR_4, "foo", ((void*)0), VAR_5,
     ((void*)0));
    FUNC_5(!VAR_6 && FUNC_2() == VAR_1,
     "Expected E_INVALIDARG: %d\n", FUNC_2());

    VAR_6 = FUNC_0(VAR_4, "foo",
     "1.2.3.4.5.6.7.8.9.10", ((void*)0), ((void*)0));
    FUNC_5(VAR_6, "Expected pseudo-success, got %d\n", FUNC_2());
    FUNC_4(0xdeadbeef);
    VAR_6 = FUNC_0(VAR_4, "CryptDllEncodeObject",
     "1.2.3.4.5.6.7.8.9.10", VAR_5, ((void*)0));
    if (!VAR_6 && FUNC_2() == VAR_0)
    {
        FUNC_6("Need admin rights\n");
        return;
    }
    FUNC_5(VAR_6, "CryptRegisterOIDFunction failed: %d\n", FUNC_2());
    VAR_6 = FUNC_1(VAR_4, "CryptDllEncodeObject",
     "1.2.3.4.5.6.7.8.9.10");
    FUNC_5(VAR_6, "CryptUnregisterOIDFunction failed: %d\n", FUNC_2());
    VAR_6 = FUNC_0(VAR_4, "bogus",
     "1.2.3.4.5.6.7.8.9.10", VAR_5, ((void*)0));
    FUNC_5(VAR_6, "CryptRegisterOIDFunction failed: %d\n", FUNC_2());
    VAR_6 = FUNC_1(VAR_4, "bogus",
     "1.2.3.4.5.6.7.8.9.10");
    FUNC_5(VAR_6, "CryptUnregisterOIDFunction failed: %d\n", FUNC_2());

    FUNC_5(!FUNC_3(VAR_2,
     "SOFTWARE\\Microsoft\\Cryptography\\OID\\EncodingType 1\\bogus"),
     "Could not delete bogus key\n");

    VAR_6 = FUNC_0(VAR_3, "CryptDllEncodeObject",
     "1.2.3.4.5.6.7.8.9.10", VAR_5, ((void*)0));
    FUNC_5(VAR_6, "CryptRegisterOIDFunction failed: %d\n", FUNC_2());
    VAR_6 = FUNC_1(VAR_3, "CryptDllEncodeObject",
     "1.2.3.4.5.6.7.8.9.10");
    FUNC_5(VAR_6, "CryptUnregisterOIDFunction failed: %d\n", FUNC_2());

    VAR_6 = FUNC_0(0, "CryptDllEncodeObject",
     "1.2.3.4.5.6.7.8.9.10", VAR_5, ((void*)0));
    FUNC_5(VAR_6, "CryptRegisterOIDFunction failed: %d\n", FUNC_2());
    VAR_6 = FUNC_1(0, "CryptDllEncodeObject",
     "1.2.3.4.5.6.7.8.9.10");
    FUNC_5(VAR_6, "CryptUnregisterOIDFunction failed: %d\n", FUNC_2());



    FUNC_5(!FUNC_3(VAR_2,
     "SOFTWARE\\Microsoft\\Cryptography\\OID\\EncodingType 0\\CryptDllEncodeObject"),
     "Could not delete CryptDllEncodeObject key\n");



    VAR_6 = FUNC_0(3, "CryptDllEncodeObject",
     "1.2.3.4.5.6.7.8.9.10", VAR_5, ((void*)0));
    FUNC_5(VAR_6, "CryptRegisterOIDFunction failed: %d\n", FUNC_2());
    VAR_6 = FUNC_1(3, "CryptDllEncodeObject",
     "1.2.3.4.5.6.7.8.9.10");
    FUNC_5(VAR_6, "CryptUnregisterOIDFunction failed: %d\n", FUNC_2());



    FUNC_5(!FUNC_3(VAR_2,
     "SOFTWARE\\Microsoft\\Cryptography\\OID\\EncodingType 3\\CryptDllEncodeObject"),
     "Could not delete CryptDllEncodeObject key\n");
    FUNC_5(!FUNC_3(VAR_2,
     "SOFTWARE\\Microsoft\\Cryptography\\OID\\EncodingType 3"),
     "Could not delete 'EncodingType 3' key\n");
}
