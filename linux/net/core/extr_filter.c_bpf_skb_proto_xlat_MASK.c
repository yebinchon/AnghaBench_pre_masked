
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3, __be16 VAR_4)
{
 __be16 VAR_5 = VAR_3->protocol;

 if (VAR_5 == FUNC_2(VAR_1) &&
       VAR_4 == FUNC_2(VAR_2))
  return FUNC_0(VAR_3);

 if (VAR_5 == FUNC_2(VAR_2) &&
       VAR_4 == FUNC_2(VAR_1))
  return FUNC_1(VAR_3);

 return -VAR_0;
}
