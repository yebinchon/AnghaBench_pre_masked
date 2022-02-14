
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct batadv_hard_iface {int if_status; TYPE_1__* soft_iface; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct batadv_hard_iface*,int ) ;
 int FUNC_2 (struct batadv_hard_iface*,struct net*,char*) ;
 struct batadv_hard_iface* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct batadv_hard_iface*) ;
 struct net* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4,
       char VAR_5[VAR_3])
{
 struct net *VAR_6 = FUNC_5(VAR_4);
 struct batadv_hard_iface *VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 FUNC_0();

 VAR_7 = FUNC_3(VAR_4);
 if (!VAR_7)
  return 0;

 if (FUNC_6(VAR_5, "none", 4) == 0)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_1;

 if (VAR_7->if_status == VAR_8)
  goto out;

 if (VAR_7->soft_iface &&
     FUNC_6(VAR_7->soft_iface->name, VAR_5, VAR_3) == 0)
  goto out;

 if (VAR_8 == VAR_2) {
  FUNC_1(VAR_7,
      VAR_0);
  goto out;
 }


 if (VAR_7->if_status != VAR_2)
  FUNC_1(VAR_7,
      VAR_0);

 VAR_9 = FUNC_2(VAR_7, VAR_6, VAR_5);
out:
 FUNC_4(VAR_7);
 return VAR_9;
}
