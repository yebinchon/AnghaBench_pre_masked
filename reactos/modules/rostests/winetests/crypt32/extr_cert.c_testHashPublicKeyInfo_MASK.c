
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {TYPE_1__ member_0; } ;
typedef int DWORD ;
typedef TYPE_2__ CERT_PUBLIC_KEY_INFO ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,TYPE_2__*,int*,int*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    BOOL VAR_3;
    CERT_PUBLIC_KEY_INFO VAR_4 = { { 0 } };
    DWORD VAR_5;





    VAR_3 = FUNC_0(0, 0, 0, 0, ((void*)0), ((void*)0), &VAR_5);
    FUNC_4(!VAR_3 && FUNC_1() == VAR_0,
     "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_1());

    if (0)
    {
        VAR_3 = FUNC_0(0, 0, 0, VAR_2, ((void*)0), ((void*)0), &VAR_5);
        FUNC_4(!VAR_3 && FUNC_1() == VAR_1,
         "Expected STATUS_ACCESS_VIOLATION, got %08x\n", FUNC_1());
    }
    VAR_3 = FUNC_0(0, 0, 0, VAR_2, &VAR_4, ((void*)0), &VAR_5);
    FUNC_4(VAR_3 ||
     FUNC_2(!VAR_3),
     "CryptHashPublicKeyInfo failed: %08x\n", FUNC_1());
    if (VAR_3)
    {
        FUNC_4(VAR_5 == 16, "Expected hash size 16, got %d\n", VAR_5);
        if (VAR_5 == 16)
        {
            static const BYTE VAR_6[] = { 0xb8,0x51,0x3a,0x31,0x0e,0x9f,0x40,
             0x36,0x9c,0x92,0x45,0x1b,0x9d,0xc8,0xf9,0xf6 };
            BYTE VAR_7[16];

            VAR_3 = FUNC_0(0, 0, 0, VAR_2, &VAR_4, VAR_7,
             &VAR_5);
            FUNC_4(VAR_3, "CryptHashPublicKeyInfo failed: %08x\n", FUNC_1());
            FUNC_4(!FUNC_3(VAR_7, VAR_6, VAR_5), "Unexpected hash\n");
        }
    }
}
