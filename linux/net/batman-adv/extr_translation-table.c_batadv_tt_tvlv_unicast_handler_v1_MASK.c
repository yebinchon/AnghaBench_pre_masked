
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct batadv_tvlv_tt_vlan_data {int dummy; } ;
struct batadv_tvlv_tt_data {int flags; int num_vlan; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct batadv_priv*,char*,int *,char) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_tvlv_tt_data*,int *,int) ;
 int FUNC_2 (struct batadv_priv*,int ) ;
 int FUNC_3 (struct batadv_priv*,int *) ;
 int FUNC_4 (struct batadv_priv*,struct batadv_tvlv_tt_data*,int *,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct batadv_priv *VAR_7,
          u8 *VAR_8, u8 *VAR_9,
          void *VAR_10,
          u16 VAR_11)
{
 struct batadv_tvlv_tt_data *VAR_12;
 u16 VAR_13, VAR_14;
 char VAR_15;
 bool VAR_16;

 if (VAR_11 < sizeof(*VAR_12))
  return VAR_6;

 VAR_12 = (struct batadv_tvlv_tt_data *)VAR_10;
 VAR_11 -= sizeof(*VAR_12);

 VAR_13 = sizeof(struct batadv_tvlv_tt_vlan_data);
 VAR_13 *= FUNC_6(VAR_12->num_vlan);

 if (VAR_11 < VAR_13)
  return VAR_6;

 VAR_11 -= VAR_13;
 VAR_14 = FUNC_5(VAR_11);

 switch (VAR_12->flags & VAR_3) {
 case 129:
  FUNC_2(VAR_7, VAR_0);




  VAR_16 = FUNC_4(VAR_7, VAR_12, VAR_8, VAR_9);
  if (!VAR_16) {
   if (VAR_12->flags & VAR_4)
    VAR_15 = 'F';
   else
    VAR_15 = '.';

   FUNC_0(VAR_2, VAR_7,
       "Routing TT_REQUEST to %pM [%c]\n",
       VAR_9, VAR_15);

   return VAR_5;
  }
  break;
 case 128:
  FUNC_2(VAR_7, VAR_1);

  if (FUNC_3(VAR_7, VAR_9)) {
   FUNC_1(VAR_7, VAR_12,
        VAR_8, VAR_14);
   return VAR_6;
  }

  if (VAR_12->flags & VAR_4)
   VAR_15 = 'F';
  else
   VAR_15 = '.';

  FUNC_0(VAR_2, VAR_7,
      "Routing TT_RESPONSE to %pM [%c]\n", VAR_9, VAR_15);


  return VAR_5;
 }

 return VAR_6;
}
