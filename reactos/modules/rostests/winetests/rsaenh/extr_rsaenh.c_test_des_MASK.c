
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pbData ;
typedef int des ;
struct TYPE_2__ {unsigned char* origstr; scalar_t__ strlen; scalar_t__ enclen; int buflen; int const* decstr; } ;
typedef int HCRYPTKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,unsigned char*,scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,unsigned char*,scalar_t__*,int) ;
 int FUNC_3 (int ,int ,int*,scalar_t__*,int ) ;
 int FUNC_4 (int ,int ,int*,int ) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_8 (int ,int *,int) ;
 scalar_t__ FUNC_9 (unsigned char*,int const*,int) ;
 int FUNC_10 (unsigned char*,unsigned char*,scalar_t__) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (char*,unsigned char*,scalar_t__) ;

__attribute__((used)) static void FUNC_13(void)
{
    HCRYPTKEY VAR_9;
    BOOL VAR_10;
    DWORD VAR_11, VAR_12;
    unsigned char VAR_13[16], VAR_14[16], VAR_15[16];
    static const BYTE VAR_16[16] = {
        0x58, 0x86, 0x42, 0x46, 0x65, 0x4b, 0x92, 0x62,
        0xcf, 0x0f, 0x65, 0x37, 0x43, 0x7a, 0x82, 0xb9 };
    static const BYTE VAR_17[16] = {
        0xb0, 0xfd, 0x11, 0x69, 0x76, 0xb1, 0xa1, 0x03,
        0xf7, 0xbc, 0x23, 0xaa, 0xd4, 0xc1, 0xc9, 0x55 };
    static const BYTE VAR_18[16] = {
        0x9b, 0xc1, 0x2a, 0xec, 0x4a, 0xf9, 0x0f, 0x14,
        0x0a, 0xed, 0xf6, 0xd3, 0xdc, 0xad, 0xf7, 0x0c };
    int VAR_19;

    VAR_10 = FUNC_8(VAR_0, &VAR_9, 0);
    if (!VAR_10) {

        FUNC_11(FUNC_5()==VAR_4, "%08x\n", FUNC_5());
        return;
    }

    VAR_12 = VAR_1;
    VAR_10 = FUNC_4(VAR_9, VAR_3, (BYTE*)&VAR_12, 0);
    FUNC_11(VAR_10, "%08x\n", FUNC_5());

    VAR_11 = sizeof(DWORD);
    VAR_10 = FUNC_3(VAR_9, VAR_3, (BYTE*)&VAR_12, &VAR_11, 0);
    FUNC_11(VAR_10, "%08x\n", FUNC_5());
    FUNC_11(VAR_12 == VAR_1, "Expected CRYPT_MODE_ECB, got %d\n", VAR_12);

    for (VAR_19=0; VAR_19<sizeof(VAR_13); VAR_19++) VAR_13[VAR_19] = (unsigned char)VAR_19;

    VAR_11 = 13;
    VAR_10 = FUNC_2(VAR_9, 0, VAR_7, 0, VAR_13, &VAR_11, 16);
    FUNC_11(VAR_10, "%08x\n", FUNC_5());

    FUNC_11(!FUNC_9(VAR_13, VAR_16, sizeof(VAR_16)), "DES encryption failed!\n");

    VAR_10 = FUNC_0(VAR_9, 0, VAR_7, 0, VAR_13, &VAR_11);
    FUNC_11(VAR_10, "%08x\n", FUNC_5());

    for (VAR_19=0; VAR_19<4; VAR_19++)
    {
      FUNC_10(VAR_13,VAR_8[VAR_19].origstr,VAR_8[VAR_19].strlen);

      VAR_11 = VAR_8[VAR_19].enclen;
      VAR_10 = FUNC_2(VAR_9, 0, VAR_7, 0, VAR_13, &VAR_11, VAR_8[VAR_19].buflen);
      FUNC_11(VAR_10, "%08x\n", FUNC_5());
      FUNC_11(VAR_11==VAR_8[VAR_19].buflen,"length incorrect, got %d, expected %d\n",VAR_11,VAR_8[VAR_19].buflen);
      FUNC_10(VAR_14, VAR_13, VAR_8[VAR_19].buflen);

      VAR_10 = FUNC_0(VAR_9, 0, VAR_7, 0, VAR_13, &VAR_11);
      FUNC_11(VAR_10, "%08x\n", FUNC_5());
      FUNC_11(VAR_11==VAR_8[VAR_19].enclen,"length incorrect, got %d, expected %d\n",VAR_11,VAR_8[VAR_19].enclen);
      FUNC_11(FUNC_9(VAR_13,VAR_8[VAR_19].decstr,VAR_8[VAR_19].enclen)==0,"decryption incorrect %d\n",VAR_19);
      if((VAR_11 != VAR_8[VAR_19].enclen) ||
         FUNC_9(VAR_13,VAR_8[VAR_19].decstr,VAR_8[VAR_19].enclen))
      {
          FUNC_12("expected",VAR_8[VAR_19].decstr,VAR_8[VAR_19].strlen);
          FUNC_12("got",VAR_13,VAR_11);
      }







      VAR_11 = VAR_8[VAR_19].buflen;
      FUNC_10(VAR_13, VAR_14, VAR_8[VAR_19].buflen);
      VAR_10 = FUNC_0(VAR_9, 0, VAR_2, 0, VAR_13, &VAR_11);
      FUNC_11(VAR_10, "%08x\n", FUNC_5());


      FUNC_10(VAR_15, VAR_14, VAR_8[VAR_19].buflen);
      VAR_15[VAR_8[VAR_19].buflen - 1] = ~VAR_15[VAR_8[VAR_19].buflen - 1];
      FUNC_6(0xdeadbeef);
      VAR_10 = FUNC_0(VAR_9, 0, VAR_7, 0, VAR_15, &VAR_11);
      FUNC_11(!VAR_10, "CryptDecrypt should failed!\n");
      FUNC_11(FUNC_5() == VAR_5, "%08x\n", FUNC_5());
      FUNC_11(VAR_11==VAR_8[VAR_19].buflen,"length incorrect, got %d, expected %d\n",VAR_11,VAR_8[VAR_19].buflen);
      FUNC_11(FUNC_9(VAR_13,VAR_8[VAR_19].decstr,VAR_8[1].enclen)==0,"decryption incorrect %d\n",VAR_19);


      VAR_11 = VAR_8[VAR_19].buflen;
      FUNC_10(VAR_13, VAR_14, VAR_8[VAR_19].buflen);
      VAR_10 = FUNC_0(VAR_9, 0, VAR_7, 0, VAR_13, &VAR_11);
      FUNC_11(VAR_10, "%08x\n", FUNC_5());
      FUNC_11(VAR_11==VAR_8[VAR_19].enclen,"length incorrect, got %d, expected %d\n",VAR_11,VAR_8[VAR_19].enclen);
      FUNC_11(FUNC_9(VAR_13,VAR_8[VAR_19].decstr,VAR_8[1].enclen)==0,"decryption incorrect %d\n",VAR_19);
      if((VAR_11 != VAR_8[VAR_19].enclen) ||
         FUNC_9(VAR_13,VAR_8[VAR_19].decstr,VAR_8[VAR_19].enclen))
      {
          FUNC_12("expected",VAR_8[VAR_19].decstr,VAR_8[VAR_19].strlen);
          FUNC_12("got",VAR_13,VAR_11);
      }
    }

    VAR_10 = FUNC_1(VAR_9);
    FUNC_11(VAR_10, "%08x\n", FUNC_5());


    FUNC_8(VAR_0, &VAR_9, 56);

    VAR_12 = VAR_1;
    VAR_10 = FUNC_4(VAR_9, VAR_3, (BYTE*)&VAR_12, 0);
    FUNC_11(VAR_10, "%08x\n", FUNC_5());

    for (VAR_19=0; VAR_19<sizeof(VAR_13); VAR_19++) VAR_13[VAR_19] = (unsigned char)VAR_19;

    VAR_11 = 13;
    VAR_10 = FUNC_2(VAR_9, 0, VAR_7, 0, VAR_13, &VAR_11, 16);
    FUNC_11(VAR_10, "%08x\n", FUNC_5());
    FUNC_11(!FUNC_9(VAR_13, VAR_16, sizeof(VAR_16)) || FUNC_7(
    !FUNC_9(VAR_13, VAR_17, sizeof(VAR_16)) ||
    (VAR_6 && !FUNC_9(VAR_13, VAR_18, sizeof(VAR_16)))) ,
       "DES encryption failed!\n");

    VAR_10 = FUNC_1(VAR_9);
    FUNC_11(VAR_10, "%08x\n", FUNC_5());
}
