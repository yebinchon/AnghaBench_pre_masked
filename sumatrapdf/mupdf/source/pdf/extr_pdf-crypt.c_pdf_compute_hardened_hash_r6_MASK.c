
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_sha512 ;
typedef int fz_sha384 ;
typedef int fz_sha256 ;
typedef int fz_context ;
typedef int fz_aes ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,size_t,unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,size_t) ;
 int FUNC_5 (int *,unsigned char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned char*,size_t) ;
 int FUNC_8 (int *,unsigned char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned char*,size_t) ;
 int FUNC_11 (int *,int ,char*,int) ;
 int FUNC_12 (unsigned char*,unsigned char*,int) ;
 int FUNC_13 (unsigned char*,int ,int) ;

__attribute__((used)) static void
FUNC_14(fz_context *VAR_2, unsigned char *VAR_3, size_t VAR_4, unsigned char VAR_5[8], unsigned char *VAR_6, unsigned char VAR_7[32])
{
 unsigned char VAR_8[(128 + 64 + 48) * 64];
 unsigned char VAR_9[64];
 int VAR_10 = 32;
 size_t VAR_11 = 0;
 int VAR_12, VAR_13, VAR_14;

 fz_sha256 VAR_15;
 fz_sha384 VAR_16;
 fz_sha512 VAR_17;
 fz_aes VAR_18;


 FUNC_3(&VAR_15);
 FUNC_4(&VAR_15, VAR_3, VAR_4);
 FUNC_4(&VAR_15, VAR_5, 8);
 if (VAR_6)
  FUNC_4(&VAR_15, VAR_6, 48);
 FUNC_2(&VAR_15, VAR_9);

 for (VAR_12 = 0; VAR_12 < 64 || VAR_12 < VAR_8[VAR_11 * 64 - 1] + 32; VAR_12++)
 {

  FUNC_12(VAR_8, VAR_3, VAR_4);
  FUNC_12(VAR_8 + VAR_4, VAR_9, VAR_10);
  if (VAR_6)
   FUNC_12(VAR_8 + VAR_4 + VAR_10, VAR_6, 48);
  VAR_11 = VAR_4 + VAR_10 + (VAR_6 ? 48 : 0);
  for (VAR_13 = 1; VAR_13 < 64; VAR_13++)
   FUNC_12(VAR_8 + VAR_13 * VAR_11, VAR_8, VAR_11);


  if (FUNC_1(&VAR_18, VAR_9, 128))
   FUNC_11(VAR_2, VAR_1, "AES key init failed (keylen=%d)", 128);
  FUNC_0(&VAR_18, VAR_0, VAR_11 * 64, VAR_9 + 16, VAR_8, VAR_8);


  for (VAR_13 = 0, VAR_14 = 0; VAR_13 < 16; VAR_13++)
   VAR_14 += VAR_8[VAR_13];


  VAR_10 = 32 + (VAR_14 % 3) * 16;
  switch (VAR_10)
  {
  case 32:
   FUNC_3(&VAR_15);
   FUNC_4(&VAR_15, VAR_8, VAR_11 * 64);
   FUNC_2(&VAR_15, VAR_9);
   break;
  case 48:
   FUNC_6(&VAR_16);
   FUNC_7(&VAR_16, VAR_8, VAR_11 * 64);
   FUNC_5(&VAR_16, VAR_9);
   break;
  case 64:
   FUNC_9(&VAR_17);
   FUNC_10(&VAR_17, VAR_8, VAR_11 * 64);
   FUNC_8(&VAR_17, VAR_9);
   break;
  }
 }

 FUNC_13(VAR_8, 0, sizeof(VAR_8));
 FUNC_12(VAR_7, VAR_9, 32);
}
