
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int *,int const*,int *) ;
 int FUNC_4 (int *,int*,int*,int const*,int) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int*,int const*,int) ;

__attribute__((used)) static int
FUNC_7(void)
{
 static const uint8 VAR_0[56] = {
  0xf0, 0xe1, 0xd2, 0xc3, 0xb4, 0xa5, 0x96, 0x87, 0x78, 0x69,
  0x5a, 0x4b, 0x3c, 0x2d, 0x1e, 0x0f, 0x00, 0x11, 0x22, 0x33,
  0x44, 0x55, 0x66, 0x77, 0x04, 0x68, 0x91, 0x04, 0xc2, 0xfd,
  0x3b, 0x2f, 0x58, 0x40, 0x23, 0x64, 0x1a, 0xba, 0x61, 0x76,
  0x1f, 0x1f, 0x1f, 0x1f, 0x0e, 0x0e, 0x0e, 0x0e, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
 };

 static const uint8 VAR_1[8] = {0xfe, 0xdc, 0xba, 0x98, 0x76, 0x54, 0x32, 0x10};
 static const uint8 VAR_2[8] = {0xc0, 0x45, 0x04, 0x01, 0x2e, 0x4e, 0x1f, 0x53};
 uint8 VAR_3[8];
 EVP_CIPHER_CTX *VAR_4;
 int VAR_5;
 int VAR_6 = 0;


 VAR_4 = FUNC_1();
 if (!VAR_4)
  return 0;
 if (!FUNC_3(VAR_4, FUNC_5(), ((void*)0), ((void*)0), ((void*)0)))
  goto leave;
 if (!FUNC_2(VAR_4, 56))
  goto leave;
 if (!FUNC_3(VAR_4, ((void*)0), ((void*)0), VAR_0, ((void*)0)))
  goto leave;

 if (!FUNC_4(VAR_4, VAR_3, &VAR_5, VAR_1, 8))
  goto leave;

 if (FUNC_6(VAR_3, VAR_2, 8) != 0)
  goto leave;

 VAR_6 = 1;

leave:
 FUNC_0(VAR_4);
 return VAR_6;
}
