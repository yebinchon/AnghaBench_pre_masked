
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int flags; } ;
struct batadv_tt_global_entry {TYPE_1__ common; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_tt_global_entry*) ;
 struct batadv_tt_global_entry* FUNC_1 (struct batadv_priv*,int const*,unsigned short) ;

bool FUNC_2(struct batadv_priv *VAR_1,
      const u8 *VAR_2, unsigned short VAR_3)
{
 struct batadv_tt_global_entry *VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return 0;

 VAR_5 = VAR_4->common.flags & VAR_0;

 FUNC_0(VAR_4);

 return VAR_5;
}
