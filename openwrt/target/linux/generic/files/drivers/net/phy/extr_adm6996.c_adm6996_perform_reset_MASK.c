
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adm6996_priv {scalar_t__ model; int* vlan_id; scalar_t__* vlan_tagged; scalar_t__* vlan_table; scalar_t__* pvid; scalar_t__ vlan_enabled; scalar_t__ enable_vlan; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (struct adm6996_priv*) ;
 int FUNC_3 (struct adm6996_priv*) ;
 int FUNC_4 (struct adm6996_priv*) ;
 int * VAR_10 ;
 int FUNC_5 (struct adm6996_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_6 (struct adm6996_priv *VAR_11)
{
 int VAR_12;


 for (VAR_12 = 0; VAR_12 < VAR_3 - 1; VAR_12++) {
  FUNC_5(VAR_11, VAR_10[VAR_12], VAR_8 |
   FUNC_1(0));
 }
 FUNC_5(VAR_11, VAR_10[5], VAR_7);

 if (VAR_11->model == VAR_2 || VAR_11->model == VAR_0) {

  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   FUNC_5(VAR_11, FUNC_0(VAR_12), VAR_5);
  }
 }

 VAR_11->enable_vlan = 0;
 VAR_11->vlan_enabled = 0;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_11->pvid[VAR_12] = 0;
 }

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  VAR_11->vlan_id[VAR_12] = VAR_12;
  VAR_11->vlan_table[VAR_12] = 0;
  VAR_11->vlan_tagged[VAR_12] = 0;
 }

 if (VAR_11->model == VAR_2) {

  FUNC_5 (VAR_11, VAR_9, 0);

  FUNC_3(VAR_11);
  FUNC_2(VAR_11);
 } else if (VAR_11->model == VAR_1) {

  FUNC_5 (VAR_11, VAR_9, 0);

  FUNC_4(VAR_11);
  FUNC_2(VAR_11);
 }
}
