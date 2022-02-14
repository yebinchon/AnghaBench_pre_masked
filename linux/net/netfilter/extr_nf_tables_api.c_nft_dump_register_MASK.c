
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct sk_buff*,unsigned int,int ) ;

int FUNC_2(struct sk_buff *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 if (VAR_5 % (VAR_2 / VAR_1) == 0)
  VAR_5 = VAR_5 / (VAR_2 / VAR_1);
 else
  VAR_5 = VAR_5 - VAR_2 / VAR_1 + VAR_0;

 return FUNC_1(VAR_3, VAR_4, FUNC_0(VAR_5));
}
