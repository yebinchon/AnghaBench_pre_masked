
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* encoded; int const* encodedNoNull; int info; int decoded; } ;
typedef size_t DWORD ;
typedef int CERT_PUBLIC_KEY_INFO ;
typedef int BYTE ;
typedef int BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (size_t,int ,int const*,int const,int ,int *,int**,size_t*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_6(DWORD VAR_5)
{
    static const BYTE VAR_6[] = { 0x30, 0x22, 0x30, 0x0d, 0x06, 0x06,
     0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03,
     0x11, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09,
     0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f };
    DWORD VAR_7;
    BOOL VAR_8;
    BYTE *VAR_9 = ((void*)0);
    DWORD VAR_10 = 0;

    for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++)
    {

        VAR_8 = FUNC_5(VAR_5, VAR_3,
         VAR_4[VAR_7].encoded, VAR_4[VAR_7].encoded[1] + 2, VAR_0,
         ((void*)0), &VAR_9, &VAR_10);
        FUNC_4(VAR_8, "CryptDecodeObjectEx failed: %08x\n", FUNC_1());
        if (VAR_8)
        {
            FUNC_3(&VAR_4[VAR_7].decoded,
             (CERT_PUBLIC_KEY_INFO *)VAR_9);
            FUNC_2(VAR_9);
        }

        VAR_8 = FUNC_5(VAR_5, VAR_3,
         VAR_4[VAR_7].encodedNoNull, VAR_4[VAR_7].encodedNoNull[1] + 2,
         VAR_0, ((void*)0), &VAR_9, &VAR_10);
        FUNC_4(VAR_8, "CryptDecodeObjectEx failed: %08x\n", FUNC_1());
        if (VAR_8)
        {
            FUNC_3(&VAR_4[VAR_7].info, (CERT_PUBLIC_KEY_INFO *)VAR_9);
            FUNC_2(VAR_9);
        }
    }

    VAR_8 = FUNC_5(VAR_5, VAR_3,
     VAR_6, VAR_6[1] + 2, VAR_0,
     ((void*)0), &VAR_9, &VAR_10);
    FUNC_4(!VAR_8 && (FUNC_1() == VAR_1 ||
     FUNC_1() == VAR_2 ),
     "Expected CRYPT_E_ASN1_CORRUPT or OSS_DATA_ERROR, got %08x\n",
     FUNC_1());
}
