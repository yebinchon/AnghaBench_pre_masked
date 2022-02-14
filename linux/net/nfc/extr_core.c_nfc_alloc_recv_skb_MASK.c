
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int gfp_t ;


 struct sk_buff* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct sk_buff*,int) ;

struct sk_buff *FUNC_2(unsigned int VAR_0, gfp_t VAR_1)
{
 struct sk_buff *VAR_2;
 unsigned int VAR_3;

 VAR_3 = VAR_0 + 1;
 VAR_2 = FUNC_0(VAR_3, VAR_1);

 if (VAR_2)
  FUNC_1(VAR_2, 1);

 return VAR_2;
}
