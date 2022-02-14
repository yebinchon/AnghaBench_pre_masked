
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int dev; } ;
typedef int netdev_features_t ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int,int ) ;
 int FUNC_3 (struct sk_buff*,int*) ;

__attribute__((used)) static netdev_features_t FUNC_4(struct sk_buff *VAR_4,
 netdev_features_t VAR_5)
{
 int VAR_6;
 __be16 VAR_7;

 VAR_7 = FUNC_3(VAR_4, &VAR_6);
 VAR_5 = FUNC_2(VAR_4, VAR_5, VAR_7);

 if (VAR_4->ip_summed != VAR_0 &&
     !FUNC_0(VAR_5, VAR_7)) {
  VAR_5 &= ~(VAR_1 | VAR_2);
 }
 if (FUNC_1(VAR_4->dev, VAR_4))
  VAR_5 &= ~VAR_3;

 return VAR_5;
}
