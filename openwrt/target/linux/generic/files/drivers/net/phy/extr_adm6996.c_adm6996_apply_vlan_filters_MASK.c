
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct adm6996_priv {int* vlan_id; scalar_t__* vlan_table; scalar_t__* vlan_tagged; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct adm6996_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct adm6996_priv *VAR_2)
{
 u8 VAR_3, VAR_4;
 u16 VAR_5, VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = VAR_2->vlan_id[VAR_7];
  VAR_3 = VAR_2->vlan_table[VAR_7];
  VAR_4 = VAR_2->vlan_tagged[VAR_7];

  if (VAR_3 == 0) {

   FUNC_5(VAR_2, FUNC_0(VAR_7), 0);
   FUNC_5(VAR_2, FUNC_1(VAR_7), 0);
   continue;
  }

  VAR_6 = FUNC_2(VAR_3);
  VAR_6 |= FUNC_3(VAR_4);
  FUNC_5(VAR_2, FUNC_1(VAR_7), VAR_6);
  VAR_6 = VAR_1 | FUNC_4(VAR_5);
  FUNC_5(VAR_2, FUNC_0(VAR_7), VAR_6);
 }
}
