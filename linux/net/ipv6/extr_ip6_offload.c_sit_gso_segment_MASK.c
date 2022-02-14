
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct sk_buff *VAR_2,
           netdev_features_t VAR_3)
{
 if (!(FUNC_2(VAR_2)->gso_type & VAR_1))
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_2, VAR_3);
}
