
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct madera_priv {TYPE_1__* madera; int rate_lock; } ;
struct TYPE_2__ {int* out_clamp; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (struct madera_priv*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct madera_priv *VAR_4)
{
 int VAR_5;


 FUNC_0(!VAR_2[VAR_1 - 1]);
 FUNC_0(!VAR_3[VAR_1 - 1]);

 if (!FUNC_1(VAR_4->madera->dev))
  FUNC_2(VAR_4);

 FUNC_3(&VAR_4->rate_lock);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_4->madera->out_clamp[VAR_5] = 1;

 return 0;
}
