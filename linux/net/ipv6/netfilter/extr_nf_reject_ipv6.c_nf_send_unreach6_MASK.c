
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * dev; } ;
struct net {int * loopback_dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,unsigned char,int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;

void FUNC_2(struct net *VAR_2, struct sk_buff *VAR_3,
        unsigned char VAR_4, unsigned int VAR_5)
{
 if (!FUNC_1(VAR_3, VAR_5))
  return;

 if (VAR_5 == VAR_1 && VAR_3->dev == ((void*)0))
  VAR_3->dev = VAR_2->loopback_dev;

 FUNC_0(VAR_3, VAR_0, VAR_4, 0);
}
