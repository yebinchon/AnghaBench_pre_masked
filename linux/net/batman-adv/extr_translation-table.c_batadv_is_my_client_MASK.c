
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int flags; } ;
struct batadv_tt_local_entry {TYPE_1__ common; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct batadv_tt_local_entry*) ;
 struct batadv_tt_local_entry* FUNC_1 (struct batadv_priv*,int const*,unsigned short) ;

bool FUNC_2(struct batadv_priv *VAR_2, const u8 *VAR_3,
    unsigned short VAR_4)
{
 struct batadv_tt_local_entry *VAR_5;
 bool VAR_6 = 0;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  goto out;



 if ((VAR_5->common.flags & VAR_0) ||
     (VAR_5->common.flags & VAR_1))
  goto out;
 VAR_6 = 1;
out:
 if (VAR_5)
  FUNC_0(VAR_5);
 return VAR_6;
}
