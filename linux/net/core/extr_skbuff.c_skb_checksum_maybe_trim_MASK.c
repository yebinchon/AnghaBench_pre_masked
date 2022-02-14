
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 unsigned int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct sk_buff *VAR_1,
            unsigned int VAR_2)
{
 struct sk_buff *VAR_3;
 unsigned int VAR_4 = FUNC_3(VAR_1) + VAR_2;
 int VAR_5;

 if (VAR_1->len < VAR_4)
  return ((void*)0);
 else if (VAR_1->len == VAR_4)
  return VAR_1;

 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
