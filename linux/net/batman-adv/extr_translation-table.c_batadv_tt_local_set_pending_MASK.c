
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int vid; int addr; int flags; } ;
struct batadv_tt_local_entry {TYPE_1__ common; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct batadv_priv*,char*,int ,int ,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_tt_local_entry*,int ) ;

__attribute__((used)) static void
FUNC_3(struct batadv_priv *VAR_2,
       struct batadv_tt_local_entry *VAR_3,
       u16 VAR_4, const char *VAR_5)
{
 FUNC_2(VAR_2, VAR_3, VAR_4);





 VAR_3->common.flags |= VAR_1;

 FUNC_0(VAR_0, VAR_2,
     "Local tt entry (%pM, vid: %d) pending to be removed: %s\n",
     VAR_3->common.addr,
     FUNC_1(VAR_3->common.vid), VAR_5);
}
