
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static struct sk_buff *
FUNC_2(struct net *VAR_2, u32 VAR_3, unsigned int VAR_4,
   unsigned int VAR_5)
{
 struct sk_buff *VAR_6;
 unsigned int VAR_7;




 VAR_7 = FUNC_1(VAR_4, VAR_5);
 VAR_6 = FUNC_0(VAR_7, VAR_0 | VAR_1);
 if (!VAR_6) {
  if (VAR_7 > VAR_5) {



   VAR_6 = FUNC_0(VAR_5, VAR_0);
  }
 }

 return VAR_6;
}
