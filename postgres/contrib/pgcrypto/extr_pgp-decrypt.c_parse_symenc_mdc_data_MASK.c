
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_8__ {int sess_key_len; int sess_key; int cipher_algo; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_Context ;
typedef TYPE_1__ PGP_CFB ;
typedef int MBuf ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__**,int ,int ,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int *,int *,int ,int ) ;
 int FUNC_4 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(PGP_Context *VAR_6, PullFilter *VAR_7, MBuf *VAR_8)
{
 int VAR_9;
 PGP_CFB *VAR_10 = ((void*)0);
 PullFilter *VAR_11 = ((void*)0);
 PullFilter *VAR_12 = ((void*)0);
 PullFilter *VAR_13 = ((void*)0);
 uint8 VAR_14;

 FUNC_0(VAR_7, VAR_14);
 if (VAR_14 != 1)
 {
  FUNC_6("parse_symenc_mdc_data: pkt ver != 1");
  return VAR_2;
 }

 VAR_9 = FUNC_1(&VAR_10, VAR_6->cipher_algo,
       VAR_6->sess_key, VAR_6->sess_key_len, 0, ((void*)0));
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_4(&VAR_11, &VAR_4, VAR_10, VAR_7);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_4(&VAR_13, &VAR_3, VAR_6, VAR_11);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_4(&VAR_12, &VAR_5, VAR_6, VAR_13);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_3(VAR_6, VAR_8, VAR_12, VAR_0, VAR_1);

out:
 if (VAR_12)
  FUNC_5(VAR_12);
 if (VAR_13)
  FUNC_5(VAR_13);
 if (VAR_11)
  FUNC_5(VAR_11);
 if (VAR_10)
  FUNC_2(VAR_10);

 return VAR_9;
}
