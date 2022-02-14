
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_9__ {TYPE_1__* pub_key; } ;
struct TYPE_8__ {int algo; int* key_id; } ;
typedef int PushFilter ;
typedef TYPE_1__ PGP_PubKey ;
typedef TYPE_2__ PGP_Context ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (char*) ;

int
FUNC_7(PGP_Context *VAR_2, PushFilter *VAR_3)
{
 int VAR_4;
 PGP_PubKey *VAR_5 = VAR_2->pub_key;
 uint8 VAR_6 = 3;
 PushFilter *VAR_7 = ((void*)0);
 uint8 VAR_8;

 if (VAR_5 == ((void*)0))
 {
  FUNC_6("no pubkey?\n");
  return VAR_1;
 }

 VAR_8 = VAR_5->algo;




 VAR_4 = FUNC_2(VAR_3, VAR_0, &VAR_7);
 if (VAR_4 < 0)
  goto err;
 VAR_4 = FUNC_5(VAR_7, &VAR_6, 1);
 if (VAR_4 < 0)
  goto err;
 VAR_4 = FUNC_5(VAR_7, VAR_5->key_id, 8);
 if (VAR_4 < 0)
  goto err;
 VAR_4 = FUNC_5(VAR_7, &VAR_8, 1);
 if (VAR_4 < 0)
  goto err;

 switch (VAR_8)
 {
  case 130:
   VAR_4 = FUNC_0(VAR_2, VAR_5, VAR_7);
   break;
  case 129:
  case 128:
   VAR_4 = FUNC_1(VAR_2, VAR_5, VAR_7);
   break;
 }
 if (VAR_4 < 0)
  goto err;




 VAR_4 = FUNC_3(VAR_7);
err:
 if (VAR_7)
  FUNC_4(VAR_7);

 return VAR_4;
}
