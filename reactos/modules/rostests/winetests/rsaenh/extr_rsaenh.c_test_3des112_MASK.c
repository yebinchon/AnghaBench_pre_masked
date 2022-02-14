
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pbData ;
typedef int des112 ;
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
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int ,int *,int ) ;
 scalar_t__ FUNC_6 (unsigned char*,int const*,int) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_10(void)
{
    HCRYPTKEY VAR_6;
    BOOL VAR_7;
    DWORD VAR_8;
    unsigned char VAR_9[16], VAR_10[16], VAR_11[16];
    static const BYTE VAR_12[16] = {
        0x8e, 0x0c, 0x3c, 0xa3, 0x05, 0x88, 0x5f, 0x7a,
        0x32, 0xa1, 0x06, 0x52, 0x64, 0xd2, 0x44, 0x1c };
    int VAR_13;

    VAR_7 = FUNC_5(VAR_0, &VAR_6, 0);
    if (!VAR_7) {

        FUNC_8(FUNC_3() == VAR_2, "%08x\n", FUNC_3());
        return;
    }

    for (VAR_13=0; VAR_13<sizeof(VAR_9); VAR_13++) VAR_9[VAR_13] = (unsigned char)VAR_13;

    VAR_8 = 13;
    VAR_7 = FUNC_2(VAR_6, 0, VAR_4, 0, VAR_9, &VAR_8, 16);
    FUNC_8(VAR_7, "%08x\n", FUNC_3());

    FUNC_8(!FUNC_6(VAR_9, VAR_12, sizeof(VAR_12)), "3DES_112 encryption failed!\n");

    VAR_7 = FUNC_0(VAR_6, 0, VAR_4, 0, VAR_9, &VAR_8);
    FUNC_8(VAR_7, "%08x\n", FUNC_3());

    for (VAR_13=0; VAR_13<4; VAR_13++)
    {
      FUNC_7(VAR_9,VAR_5[VAR_13].origstr,VAR_5[VAR_13].strlen);

      VAR_8 = VAR_5[VAR_13].enclen;
      VAR_7 = FUNC_2(VAR_6, 0, VAR_4, 0, VAR_9, &VAR_8, VAR_5[VAR_13].buflen);
      FUNC_8(VAR_7, "%08x\n", FUNC_3());
      FUNC_8(VAR_8==VAR_5[VAR_13].buflen,"length incorrect, got %d, expected %d\n",VAR_8,VAR_5[VAR_13].buflen);
      FUNC_7(VAR_10, VAR_9, VAR_5[VAR_13].buflen);

      VAR_7 = FUNC_0(VAR_6, 0, VAR_4, 0, VAR_9, &VAR_8);
      FUNC_8(VAR_7, "%08x\n", FUNC_3());
      FUNC_8(VAR_8==VAR_5[VAR_13].enclen,"length incorrect, got %d, expected %d\n",VAR_8,VAR_5[VAR_13].enclen);
      FUNC_8(FUNC_6(VAR_9,VAR_5[VAR_13].decstr,VAR_5[1].enclen)==0,"decryption incorrect %d\n",VAR_13);
      if((VAR_8 != VAR_5[VAR_13].enclen) ||
         FUNC_6(VAR_9,VAR_5[VAR_13].decstr,VAR_5[VAR_13].enclen))
      {
          FUNC_9("expected",VAR_5[VAR_13].decstr,VAR_5[VAR_13].strlen);
          FUNC_9("got",VAR_9,VAR_8);
      }







      VAR_8 = VAR_5[VAR_13].buflen;
      FUNC_7(VAR_9, VAR_10, VAR_5[VAR_13].buflen);
      VAR_7 = FUNC_0(VAR_6, 0, VAR_1, 0, VAR_9, &VAR_8);
      FUNC_8(VAR_7, "%08x\n", FUNC_3());


      FUNC_7(VAR_11, VAR_10, VAR_5[VAR_13].buflen);
      VAR_11[VAR_5[VAR_13].buflen - 1] = ~VAR_11[VAR_5[VAR_13].buflen - 1];
      FUNC_4(0xdeadbeef);
      VAR_7 = FUNC_0(VAR_6, 0, VAR_4, 0, VAR_11, &VAR_8);
      FUNC_8(!VAR_7, "CryptDecrypt should failed!\n");
      FUNC_8(FUNC_3() == VAR_3, "%08x\n", FUNC_3());
      FUNC_8(VAR_8==VAR_5[VAR_13].buflen,"length incorrect, got %d, expected %d\n",VAR_8,VAR_5[VAR_13].buflen);
      FUNC_8(FUNC_6(VAR_9,VAR_5[VAR_13].decstr,VAR_5[1].enclen)==0,"decryption incorrect %d\n",VAR_13);


      VAR_8 = VAR_5[VAR_13].buflen;
      FUNC_7(VAR_9, VAR_10, VAR_5[VAR_13].buflen);
      VAR_7 = FUNC_0(VAR_6, 0, VAR_4, 0, VAR_9, &VAR_8);
      FUNC_8(VAR_7, "%08x\n", FUNC_3());
      FUNC_8(VAR_8==VAR_5[VAR_13].enclen,"length incorrect, got %d, expected %d\n",VAR_8,VAR_5[VAR_13].enclen);
      FUNC_8(FUNC_6(VAR_9,VAR_5[VAR_13].decstr,VAR_5[1].enclen)==0,"decryption incorrect %d\n",VAR_13);
      if((VAR_8 != VAR_5[VAR_13].enclen) ||
         FUNC_6(VAR_9,VAR_5[VAR_13].decstr,VAR_5[VAR_13].enclen))
      {
          FUNC_9("expected",VAR_5[VAR_13].decstr,VAR_5[VAR_13].strlen);
          FUNC_9("got",VAR_9,VAR_8);
      }
    }
    VAR_7 = FUNC_1(VAR_6);
    FUNC_8(VAR_7, "%08x\n", FUNC_3());
}
