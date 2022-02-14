
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ type; int mpls_ptr; } ;
struct mpls_dev {int rcu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (struct mpls_dev*) ;



 unsigned long VAR_8 ;


 int VAR_9 ;
 int FUNC_1 (struct mpls_dev*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *,int ) ;
 unsigned int FUNC_4 (struct net_device*) ;
 struct mpls_dev* FUNC_5 (struct net_device*) ;
 int VAR_12 ;
 struct mpls_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct mpls_dev*) ;
 int FUNC_8 (struct net_device*,struct mpls_dev*) ;
 int FUNC_9 (struct net_device*,unsigned long) ;
 int FUNC_10 (struct net_device*,int) ;
 struct net_device* FUNC_11 (void*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct notifier_block *VAR_13, unsigned long VAR_14,
      void *VAR_15)
{
 struct net_device *VAR_16 = FUNC_11(VAR_15);
 struct mpls_dev *VAR_17;
 unsigned int VAR_18;

 if (VAR_14 == VAR_8) {




  if (VAR_16->type == VAR_0 ||
      VAR_16->type == VAR_3 ||
      VAR_16->type == VAR_2 ||
      VAR_16->type == VAR_1 ||
      VAR_16->type == VAR_4 ||
      VAR_16->type == VAR_5) {
   VAR_17 = FUNC_5(VAR_16);
   if (FUNC_0(VAR_17))
    return FUNC_12(FUNC_1(VAR_17));
  }
  return VAR_9;
 }

 VAR_17 = FUNC_6(VAR_16);
 if (!VAR_17)
  return VAR_9;

 switch (VAR_14) {
 case 130:
  FUNC_9(VAR_16, VAR_14);
  break;
 case 128:
  VAR_18 = FUNC_4(VAR_16);
  if (VAR_18 & (VAR_7 | VAR_6))
   FUNC_10(VAR_16, VAR_10 | VAR_11);
  else
   FUNC_10(VAR_16, VAR_10);
  break;
 case 132:
  VAR_18 = FUNC_4(VAR_16);
  if (VAR_18 & (VAR_7 | VAR_6))
   FUNC_10(VAR_16, VAR_10 | VAR_11);
  else
   FUNC_9(VAR_16, VAR_14);
  break;
 case 129:
  FUNC_9(VAR_16, VAR_14);
  VAR_17 = FUNC_6(VAR_16);
  if (VAR_17) {
   FUNC_8(VAR_16, VAR_17);
   FUNC_2(VAR_16->mpls_ptr, ((void*)0));
   FUNC_3(&VAR_17->rcu, VAR_12);
  }
  break;
 case 131:
  VAR_17 = FUNC_6(VAR_16);
  if (VAR_17) {
   int VAR_19;

   FUNC_8(VAR_16, VAR_17);
   VAR_19 = FUNC_7(VAR_16, VAR_17);
   if (VAR_19)
    return FUNC_12(VAR_19);
  }
  break;
 }
 return VAR_9;
}
