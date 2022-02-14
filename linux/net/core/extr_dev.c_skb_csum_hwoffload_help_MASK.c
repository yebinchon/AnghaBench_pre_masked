
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int csum_not_inet; } ;
typedef int netdev_features_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct sk_buff *VAR_2,
       const netdev_features_t VAR_3)
{
 if (FUNC_2(VAR_2->csum_not_inet))
  return !!(VAR_3 & VAR_1) ? 0 :
   FUNC_1(VAR_2);

 return !!(VAR_3 & VAR_0) ? 0 : FUNC_0(VAR_2);
}
