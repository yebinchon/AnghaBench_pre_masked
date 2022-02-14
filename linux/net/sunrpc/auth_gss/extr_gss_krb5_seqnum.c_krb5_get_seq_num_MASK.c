
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct krb5_ctx {scalar_t__ enctype; struct crypto_sync_skcipher* seq; } ;
struct crypto_sync_skcipher {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct crypto_sync_skcipher*,unsigned char*,unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_4 (struct krb5_ctx*,unsigned char*,unsigned char*,int*,unsigned char*) ;

s32
FUNC_5(struct krb5_ctx *VAR_4,
        unsigned char *VAR_5,
        unsigned char *VAR_6,
        int *VAR_7, u32 *VAR_8)
{
 s32 VAR_9;
 unsigned char *VAR_10;
 struct crypto_sync_skcipher *VAR_11 = VAR_4->seq;

 FUNC_0("RPC:       krb5_get_seq_num:\n");

 if (VAR_4->enctype == VAR_0)
  return FUNC_4(VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8);
 VAR_10 = FUNC_2(8, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 if ((VAR_9 = FUNC_3(VAR_11, VAR_5, VAR_6, VAR_10, 8)))
  goto out;

 if ((VAR_10[4] != VAR_10[5]) || (VAR_10[4] != VAR_10[6]) ||
     (VAR_10[4] != VAR_10[7])) {
  VAR_9 = (s32)VAR_3;
  goto out;
 }

 *VAR_7 = VAR_10[4];

 *VAR_8 = ((VAR_10[0]) |
     (VAR_10[1] << 8) | (VAR_10[2] << 16) | (VAR_10[3] << 24));

out:
 FUNC_1(VAR_10);
 return VAR_9;
}
