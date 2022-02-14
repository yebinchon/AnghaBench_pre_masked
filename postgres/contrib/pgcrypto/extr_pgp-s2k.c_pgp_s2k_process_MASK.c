
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_6__ {scalar_t__ key_len; int mode; int digest_algo; } ;
typedef int PX_MD ;
typedef TYPE_1__ PGP_S2K ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int const*,int) ;
 int FUNC_1 (TYPE_1__*,int *,int const*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int const*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int *) ;

int
FUNC_6(PGP_S2K *VAR_2, int VAR_3, const uint8 *VAR_4, int VAR_5)
{
 int VAR_6;
 PX_MD *VAR_7;

 VAR_2->key_len = FUNC_3(VAR_3);
 if (VAR_2->key_len <= 0)
  return VAR_1;

 VAR_6 = FUNC_4(VAR_2->digest_algo, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 switch (VAR_2->mode)
 {
  case 0:
   VAR_6 = FUNC_2(VAR_2, VAR_7, VAR_4, VAR_5);
   break;
  case 1:
   VAR_6 = FUNC_1(VAR_2, VAR_7, VAR_4, VAR_5);
   break;
  case 3:
   VAR_6 = FUNC_0(VAR_2, VAR_7, VAR_4, VAR_5);
   break;
  default:
   VAR_6 = VAR_0;
 }
 FUNC_5(VAR_7);
 return VAR_6;
}
