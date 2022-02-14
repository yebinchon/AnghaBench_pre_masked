
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int commit_lock; } ;
struct batadv_priv {TYPE_1__ tt; int packet_size_max; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct batadv_priv*) ;
 int FUNC_2 (struct batadv_priv*,int) ;
 int FUNC_3 (struct batadv_priv*) ;
 int FUNC_4 (struct batadv_priv*) ;
 int FUNC_5 (int ,struct net_device*,char*,int) ;
 struct batadv_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct net_device *VAR_2)
{
 struct batadv_priv *VAR_3 = FUNC_6(VAR_2);
 int VAR_4 = FUNC_0(&VAR_3->packet_size_max);
 int VAR_5, VAR_6 = VAR_0 / 2;
 bool VAR_7 = 0;

 FUNC_7(&VAR_3->tt.commit_lock);

 while (1) {
  VAR_5 = FUNC_4(VAR_3);
  if (VAR_4 >= VAR_5)
   break;

  FUNC_2(VAR_3, VAR_6);
  FUNC_3(VAR_3);

  VAR_6 /= 2;
  VAR_7 = 1;
  FUNC_5(VAR_1, VAR_2,
      "Forced to purge local tt entries to fit new maximum fragment MTU (%i)\n",
      VAR_4);
 }




 if (VAR_7)
  FUNC_1(VAR_3);

 FUNC_8(&VAR_3->tt.commit_lock);
}
