
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;

struct sk_buff *FUNC_4(struct sk_buff *VAR_0, int VAR_1,
        int VAR_2, gfp_t VAR_3)
{
 struct sk_buff *VAR_4 = FUNC_3(VAR_0, VAR_3);

 if (!VAR_4)
  return ((void*)0);

 if (FUNC_1(VAR_4, VAR_1, VAR_3) < 0 ||
     FUNC_2(VAR_4, VAR_2)) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
