
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash; } ;
struct batadv_priv {TYPE_1__ dat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct batadv_priv*) ;
 int FUNC_1 (struct batadv_priv*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct batadv_priv*,int ,int *,int ,int,int ) ;

int FUNC_4(struct batadv_priv *VAR_4)
{
 if (VAR_4->dat.hash)
  return 0;

 VAR_4->dat.hash = FUNC_2(1024);

 if (!VAR_4->dat.hash)
  return -VAR_2;

 FUNC_0(VAR_4);

 FUNC_3(VAR_4, VAR_3,
         ((void*)0), VAR_0, 1,
         VAR_1);
 FUNC_1(VAR_4);
 return 0;
}
