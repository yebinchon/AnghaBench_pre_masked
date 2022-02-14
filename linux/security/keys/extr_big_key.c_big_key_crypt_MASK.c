
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero_nonce ;
typedef int u8 ;
struct big_key_buf {int sg; } ;
struct aead_request {int dummy; } ;
typedef enum big_key_op { ____Placeholder_big_key_op } big_key_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct aead_request* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int ) ;
 int FUNC_3 (struct aead_request*,int ,int *,int *) ;
 int FUNC_4 (struct aead_request*,int ,int ,size_t,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct aead_request*) ;
 int FUNC_6 (struct aead_request*) ;
 scalar_t__ FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(enum big_key_op VAR_9, struct big_key_buf *VAR_10, size_t VAR_11, u8 *VAR_12)
{
 int VAR_13;
 struct aead_request *VAR_14;






 u8 VAR_15[VAR_1];

 VAR_14 = FUNC_0(VAR_7, VAR_6);
 if (!VAR_14)
  return -VAR_5;

 FUNC_8(VAR_15, 0, sizeof(VAR_15));
 FUNC_4(VAR_14, VAR_10->sg, VAR_10->sg, VAR_11, VAR_15);
 FUNC_3(VAR_14, VAR_2, ((void*)0), ((void*)0));
 FUNC_2(VAR_14, 0);

 FUNC_9(&VAR_8);
 if (FUNC_7(VAR_7, VAR_12, VAR_4)) {
  VAR_13 = -VAR_3;
  goto error;
 }
 if (VAR_9 == VAR_0)
  VAR_13 = FUNC_6(VAR_14);
 else
  VAR_13 = FUNC_5(VAR_14);
error:
 FUNC_10(&VAR_8);
 FUNC_1(VAR_14);
 return VAR_13;
}
