
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_4(int VAR_3)
{
 int VAR_4;
 struct sk_buff *VAR_5;

 VAR_3 = FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_0 + VAR_2);

 VAR_5 = FUNC_1(VAR_4 + VAR_3, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 FUNC_3(VAR_5, VAR_4);

 return VAR_5;
}
