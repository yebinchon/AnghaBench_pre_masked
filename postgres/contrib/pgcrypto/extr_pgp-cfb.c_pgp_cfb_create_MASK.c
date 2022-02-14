
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int resync; int block_size; int fr; int * ciph; } ;
typedef int PX_Cipher ;
typedef TYPE_1__ PGP_CFB ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int,int **) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*,int,int *) ;

int
FUNC_7(PGP_CFB **VAR_0, int VAR_1, const uint8 *VAR_2, int VAR_3,
      int VAR_4, uint8 *VAR_5)
{
 int VAR_6;
 PX_Cipher *VAR_7;
 PGP_CFB *VAR_8;

 VAR_6 = FUNC_2(VAR_1, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_6(VAR_7, VAR_2, VAR_3, ((void*)0));
 if (VAR_6 < 0)
 {
  FUNC_5(VAR_7);
  return VAR_6;
 }

 VAR_8 = FUNC_3(sizeof(*VAR_8));
 FUNC_1(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->ciph = VAR_7;
 VAR_8->block_size = FUNC_4(VAR_7);
 VAR_8->resync = VAR_4;

 if (VAR_5)
  FUNC_0(VAR_8->fr, VAR_5, VAR_8->block_size);

 *VAR_0 = VAR_8;
 return 0;
}
