
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct krb5_ctx {scalar_t__ enctype; } ;
struct crypto_sync_skcipher {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct crypto_sync_skcipher*,unsigned char*,unsigned char*,unsigned char*,int) ;
 int FUNC_3 (struct krb5_ctx*,int,int,unsigned char*,unsigned char*) ;

s32
FUNC_4(struct krb5_ctx *VAR_3,
  struct crypto_sync_skcipher *VAR_4,
  int VAR_5,
  u32 VAR_6,
  unsigned char *VAR_7, unsigned char *VAR_8)
{
 unsigned char *VAR_9;
 s32 VAR_10;

 if (VAR_3->enctype == VAR_0)
  return FUNC_3(VAR_3, VAR_5, VAR_6,
          VAR_7, VAR_8);

 VAR_9 = FUNC_1(8, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9[0] = (unsigned char) (VAR_6 & 0xff);
 VAR_9[1] = (unsigned char) ((VAR_6 >> 8) & 0xff);
 VAR_9[2] = (unsigned char) ((VAR_6 >> 16) & 0xff);
 VAR_9[3] = (unsigned char) ((VAR_6 >> 24) & 0xff);

 VAR_9[4] = VAR_5;
 VAR_9[5] = VAR_5;
 VAR_9[6] = VAR_5;
 VAR_9[7] = VAR_5;

 VAR_10 = FUNC_2(VAR_4, VAR_7, VAR_9, VAR_8, 8);
 FUNC_0(VAR_9);
 return VAR_10;
}
