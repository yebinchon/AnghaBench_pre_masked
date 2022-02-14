
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int sha256ctx; int * k_opad; } ;
typedef TYPE_1__ scram_HMAC_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;

void
FUNC_3(uint8 *VAR_2, scram_HMAC_ctx *VAR_3)
{
 uint8 VAR_4[VAR_0];

 FUNC_0(&VAR_3->sha256ctx, VAR_4);


 FUNC_1(&VAR_3->sha256ctx);
 FUNC_2(&VAR_3->sha256ctx, VAR_3->k_opad, VAR_1);
 FUNC_2(&VAR_3->sha256ctx, VAR_4, VAR_0);
 FUNC_0(&VAR_3->sha256ctx, VAR_2);
}
