
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int algo; int key_id; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_PubKey ;





 int FUNC_0 (int *,TYPE_1__**) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(PullFilter *VAR_0, uint8 *VAR_1)
{
 int VAR_2;
 PGP_PubKey *VAR_3 = ((void*)0);

 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_2 < 0)
  goto err;


 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 < 0)
  goto err;


 switch (VAR_3->algo)
 {
  case 130:
  case 129:
  case 128:
   FUNC_1(VAR_1, VAR_3->key_id, 8);
   VAR_2 = 1;
   break;
  default:
   VAR_2 = 0;
 }

err:
 FUNC_2(VAR_3);
 return VAR_2;
}
