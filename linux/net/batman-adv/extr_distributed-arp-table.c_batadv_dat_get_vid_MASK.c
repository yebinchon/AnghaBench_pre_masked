
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static unsigned short FUNC_1(struct sk_buff *VAR_2, int *VAR_3)
{
 unsigned short VAR_4;

 VAR_4 = FUNC_0(VAR_2, *VAR_3);






 if (VAR_4 & VAR_0)
  *VAR_3 += VAR_1;

 return VAR_4;
}
