
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int distributed_arp_table; } ;


 int VAR_0 ;
 char FUNC_0 (int *) ;
 int FUNC_1 (struct batadv_priv*,int ,int,int *,int ) ;
 int FUNC_2 (struct batadv_priv*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct batadv_priv *VAR_1)
{
 char VAR_2;

 VAR_2 = FUNC_0(&VAR_1->distributed_arp_table);

 switch (VAR_2) {
 case 0:
  FUNC_2(VAR_1, VAR_0, 1);
  break;
 case 1:
  FUNC_1(VAR_1, VAR_0, 1,
            ((void*)0), 0);
  break;
 }
}
