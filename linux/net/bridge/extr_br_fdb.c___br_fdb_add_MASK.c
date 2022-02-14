
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_bridge_port {int dummy; } ;
struct net_bridge {int hash_lock; TYPE_1__* dev; } ;
struct ndmsg {int ndm_flags; int ndm_state; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,unsigned char const*,int ,int) ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_port*,unsigned char const*,int ,int) ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_port*,unsigned char const*,int ,int ,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ndmsg *VAR_3, struct net_bridge *VAR_4,
   struct net_bridge_port *VAR_5, const unsigned char *VAR_6,
   u16 VAR_7, u16 VAR_8)
{
 int VAR_9 = 0;

 if (VAR_3->ndm_flags & VAR_2) {
  if (!VAR_5) {
   FUNC_5("bridge: RTM_NEWNEIGH %s with NTF_USE is not supported\n",
    VAR_4->dev->name);
   return -VAR_0;
  }
  FUNC_3();
  FUNC_6();
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_8, 1);
  FUNC_7();
  FUNC_4();
 } else if (VAR_3->ndm_flags & VAR_1) {
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_8, 1);
 } else {
  FUNC_8(&VAR_4->hash_lock);
  VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_3->ndm_state,
        VAR_7, VAR_8, VAR_3->ndm_flags);
  FUNC_9(&VAR_4->hash_lock);
 }

 return VAR_9;
}
