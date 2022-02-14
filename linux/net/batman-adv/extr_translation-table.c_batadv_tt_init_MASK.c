
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct batadv_priv {TYPE_1__ tt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct batadv_priv*) ;
 int FUNC_3 (struct batadv_priv*) ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct batadv_priv*,int *,int ,int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ) ;

int FUNC_7(struct batadv_priv *VAR_11)
{
 int VAR_12;


 FUNC_0(!(VAR_2 & VAR_1));

 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_4(VAR_11, VAR_9,
         VAR_10,
         VAR_5, 1, VAR_0);

 FUNC_4(VAR_11, ((void*)0),
         VAR_7,
         VAR_4, 1, VAR_0);

 FUNC_1(&VAR_11->tt.work, VAR_8);
 FUNC_6(VAR_6, &VAR_11->tt.work,
      FUNC_5(VAR_3));

 return 1;
}
