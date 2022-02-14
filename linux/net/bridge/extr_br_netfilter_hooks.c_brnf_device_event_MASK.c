
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int priv_flags; } ;
struct net {int dummy; } ;
struct brnf_net {int enabled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct net* FUNC_2 (struct net_device*) ;
 struct brnf_net* FUNC_3 (struct net*,int ) ;
 struct net_device* FUNC_4 (void*) ;
 int FUNC_5 (struct net*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_7, unsigned long VAR_8,
        void *VAR_9)
{
 struct net_device *VAR_10 = FUNC_4(VAR_9);
 struct brnf_net *VAR_11;
 struct net *VAR_12;
 int VAR_13;

 if (VAR_8 != VAR_1 || !(VAR_10->priv_flags & VAR_0))
  return VAR_3;

 FUNC_1();

 VAR_12 = FUNC_2(VAR_10);
 VAR_11 = FUNC_3(VAR_12, VAR_6);
 if (VAR_11->enabled)
  return VAR_4;

 VAR_13 = FUNC_5(VAR_12, VAR_5, FUNC_0(VAR_5));
 if (VAR_13)
  return VAR_2;

 VAR_11->enabled = 1;
 return VAR_4;
}
