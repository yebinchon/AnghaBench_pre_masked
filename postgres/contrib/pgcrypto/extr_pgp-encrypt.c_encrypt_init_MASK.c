
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct EncStat {int * ciph; } ;
struct TYPE_2__ {scalar_t__ disable_mdc; int sess_key_len; int sess_key; int cipher_algo; } ;
typedef int PushFilter ;
typedef TYPE_1__ PGP_Context ;
typedef int PGP_CFB ;


 int VAR_0 ;
 int FUNC_0 (struct EncStat*,int ,int) ;
 int FUNC_1 (int **,int ,int ,int ,int,int *) ;
 int FUNC_2 (int *,int*,int) ;
 struct EncStat* FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(PushFilter *VAR_1, void *VAR_2, void **VAR_3)
{
 struct EncStat *VAR_4;
 PGP_Context *VAR_5 = VAR_2;
 PGP_CFB *VAR_6;
 int VAR_7 = 1;
 int VAR_8;


 if (VAR_5->disable_mdc == 0)
 {
  uint8 VAR_9 = 1;

  VAR_7 = 0;
  VAR_8 = FUNC_2(VAR_1, &VAR_9, 1);
  if (VAR_8 < 0)
   return VAR_8;
 }
 VAR_8 = FUNC_1(&VAR_6, VAR_5->cipher_algo,
       VAR_5->sess_key, VAR_5->sess_key_len, VAR_7, ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_4 = FUNC_3(sizeof(*VAR_4));
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->ciph = VAR_6;

 *VAR_3 = VAR_4;
 return VAR_0;
}
