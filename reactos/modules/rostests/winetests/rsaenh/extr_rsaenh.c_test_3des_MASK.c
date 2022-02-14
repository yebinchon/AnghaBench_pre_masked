
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pbData ;
typedef int des3 ;
struct TYPE_2__ {unsigned char* origstr; int strlen; int enclen; int buflen; int const* decstr; } ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,unsigned char*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,unsigned char*,int*,int) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (int ,int *,int ) ;
 scalar_t__ FUNC_6 (unsigned char*,int const*,int) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_10(void)
{
    HCRYPTKEY VAR_5;
    BOOL VAR_6;
    DWORD VAR_7;
    unsigned char VAR_8[16], VAR_9[16], VAR_10[16];
    static const BYTE VAR_11[16] = {
        0x7b, 0xba, 0xdd, 0xa2, 0x39, 0xd3, 0x7b, 0xb3,
        0xc7, 0x51, 0x81, 0x41, 0x53, 0xe8, 0xcf, 0xeb };
    int VAR_12;

    VAR_6 = FUNC_5(VAR_0, &VAR_5, 0);
    if (!VAR_6) return;

    for (VAR_12=0; VAR_12<sizeof(VAR_8); VAR_12++) VAR_8[VAR_12] = (unsigned char)VAR_12;

    VAR_7 = 13;
    VAR_6 = FUNC_2(VAR_5, 0, VAR_3, 0, VAR_8, &VAR_7, 16);
    FUNC_8(VAR_6, "%08x\n", FUNC_3());

    FUNC_8(!FUNC_6(VAR_8, VAR_11, sizeof(VAR_11)), "3DES encryption failed!\n");

    VAR_6 = FUNC_0(VAR_5, 0, VAR_3, 0, VAR_8, &VAR_7);
    FUNC_8(VAR_6, "%08x\n", FUNC_3());

    for (VAR_12=0; VAR_12<4; VAR_12++)
    {
      FUNC_7(VAR_8,VAR_4[VAR_12].origstr,VAR_4[VAR_12].strlen);

      VAR_7 = VAR_4[VAR_12].enclen;
      VAR_6 = FUNC_2(VAR_5, 0, VAR_3, 0, VAR_8, &VAR_7, VAR_4[VAR_12].buflen);
      FUNC_8(VAR_6, "%08x\n", FUNC_3());
      FUNC_8(VAR_7==VAR_4[VAR_12].buflen,"length incorrect, got %d, expected %d\n",VAR_7,VAR_4[VAR_12].buflen);
      FUNC_7(VAR_9, VAR_8, VAR_4[VAR_12].buflen);

      VAR_6 = FUNC_0(VAR_5, 0, VAR_3, 0, VAR_8, &VAR_7);
      FUNC_8(VAR_6, "%08x\n", FUNC_3());
      FUNC_8(VAR_7==VAR_4[VAR_12].enclen,"length incorrect, got %d, expected %d\n",VAR_7,VAR_4[VAR_12].enclen);
      FUNC_8(FUNC_6(VAR_8,VAR_4[VAR_12].decstr,VAR_4[VAR_12].enclen)==0,"decryption incorrect %d\n",VAR_12);
      if((VAR_7 != VAR_4[VAR_12].enclen) ||
         FUNC_6(VAR_8,VAR_4[VAR_12].decstr,VAR_4[VAR_12].enclen))
      {
          FUNC_9("expected",VAR_4[VAR_12].decstr,VAR_4[VAR_12].strlen);
          FUNC_9("got",VAR_8,VAR_7);
      }







      VAR_7 = VAR_4[VAR_12].buflen;
      FUNC_7(VAR_8, VAR_9, VAR_4[VAR_12].buflen);
      VAR_6 = FUNC_0(VAR_5, 0, VAR_1, 0, VAR_8, &VAR_7);
      FUNC_8(VAR_6, "%08x\n", FUNC_3());


      FUNC_7(VAR_10, VAR_9, VAR_4[VAR_12].buflen);
      VAR_10[VAR_4[VAR_12].buflen - 1] = ~VAR_10[VAR_4[VAR_12].buflen - 1];
      FUNC_4(0xdeadbeef);
      VAR_6 = FUNC_0(VAR_5, 0, VAR_3, 0, VAR_10, &VAR_7);
      FUNC_8(!VAR_6, "CryptDecrypt should failed!\n");
      FUNC_8(FUNC_3() == VAR_2, "%08x\n", FUNC_3());
      FUNC_8(VAR_7==VAR_4[VAR_12].buflen,"length incorrect, got %d, expected %d\n",VAR_7,VAR_4[VAR_12].buflen);
      FUNC_8(FUNC_6(VAR_8,VAR_4[VAR_12].decstr,VAR_4[1].enclen)==0,"decryption incorrect %d\n",VAR_12);


      VAR_7 = VAR_4[VAR_12].buflen;
      FUNC_7(VAR_8, VAR_9, VAR_4[VAR_12].buflen);
      VAR_6 = FUNC_0(VAR_5, 0, VAR_3, 0, VAR_8, &VAR_7);
      FUNC_8(VAR_6, "%08x\n", FUNC_3());
      FUNC_8(VAR_7==VAR_4[VAR_12].enclen,"length incorrect, got %d, expected %d\n",VAR_7,VAR_4[VAR_12].enclen);
      FUNC_8(FUNC_6(VAR_8,VAR_4[VAR_12].decstr,VAR_4[1].enclen)==0,"decryption incorrect %d\n",VAR_12);
      if((VAR_7 != VAR_4[VAR_12].enclen) ||
         FUNC_6(VAR_8,VAR_4[VAR_12].decstr,VAR_4[VAR_12].enclen))
      {
          FUNC_9("expected",VAR_4[VAR_12].decstr,VAR_4[VAR_12].strlen);
          FUNC_9("got",VAR_8,VAR_7);
      }
    }
    VAR_6 = FUNC_1(VAR_5);
    FUNC_8(VAR_6, "%08x\n", FUNC_3());
}
