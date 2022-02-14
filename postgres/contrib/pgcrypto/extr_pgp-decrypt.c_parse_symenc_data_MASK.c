
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sess_key_len; int sess_key; int cipher_algo; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_Context ;
typedef TYPE_1__ PGP_CFB ;
typedef int MBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__**,int ,int ,int ,int,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *,int *,int ,int ) ;
 int FUNC_3 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(PGP_Context *VAR_4, PullFilter *VAR_5, MBuf *VAR_6)
{
 int VAR_7;
 PGP_CFB *VAR_8 = ((void*)0);
 PullFilter *VAR_9 = ((void*)0);
 PullFilter *VAR_10 = ((void*)0);

 VAR_7 = FUNC_0(&VAR_8, VAR_4->cipher_algo,
       VAR_4->sess_key, VAR_4->sess_key_len, 1, ((void*)0));
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_3(&VAR_9, &VAR_2, VAR_8, VAR_5);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_3(&VAR_10, &VAR_3, VAR_4, VAR_9);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_10, VAR_0, VAR_1);

out:
 if (VAR_10)
  FUNC_4(VAR_10);
 if (VAR_9)
  FUNC_4(VAR_9);
 if (VAR_8)
  FUNC_1(VAR_8);

 return VAR_7;
}
