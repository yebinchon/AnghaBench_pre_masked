
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysctl_checksum; } ;
struct net {TYPE_1__ ct; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (struct net*) ;
 int FUNC_5 (struct net*) ;
 int FUNC_6 (struct net*,int ) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_2)
{
 int VAR_3;

 VAR_2->ct.sysctl_checksum = 1;

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 < 0)
  goto out_proc;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  goto out_init_net;

 if (VAR_1) {
  VAR_3 = FUNC_6(VAR_2, VAR_0);
  if (VAR_3 < 0)
   goto out_hooks;
 }

 return 0;

out_hooks:
 FUNC_0(VAR_2);
out_init_net:
 FUNC_2(VAR_2);
out_proc:
 FUNC_3(VAR_2);
 return VAR_3;
}
