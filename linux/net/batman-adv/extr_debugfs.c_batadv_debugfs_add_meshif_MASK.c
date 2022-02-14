
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct net {int dummy; } ;
struct batadv_priv {int * debug_dir; } ;
struct TYPE_2__ {int mode; int name; } ;
struct batadv_debuginfo {int fops; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct batadv_priv*) ;
 int VAR_2 ;
 struct batadv_debuginfo** VAR_3 ;
 int FUNC_1 (struct batadv_priv*) ;
 int FUNC_2 (struct batadv_priv*) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int *,struct net_device*,int *) ;
 int FUNC_5 (int *) ;
 struct net* FUNC_6 (struct net_device*) ;
 struct net VAR_4 ;
 struct batadv_priv* FUNC_7 (struct net_device*) ;

int FUNC_8(struct net_device *VAR_5)
{
 struct batadv_priv *VAR_6 = FUNC_7(VAR_5);
 struct batadv_debuginfo **VAR_7;
 struct net *VAR_8 = FUNC_6(VAR_5);

 if (VAR_8 != &VAR_4)
  return 0;

 VAR_6->debug_dir = FUNC_3(VAR_5->name, VAR_2);

 FUNC_2(VAR_6);

 if (FUNC_0(VAR_6) < 0)
  goto rem_attr;

 for (VAR_7 = VAR_3; *VAR_7; ++VAR_7)
  FUNC_4(((*VAR_7)->attr).name,
        VAR_1 | ((*VAR_7)->attr).mode,
        VAR_6->debug_dir, VAR_5,
        &(*VAR_7)->fops);

 FUNC_1(VAR_6);

 return 0;
rem_attr:
 FUNC_5(VAR_6->debug_dir);
 VAR_6->debug_dir = ((void*)0);
 return -VAR_0;
}
