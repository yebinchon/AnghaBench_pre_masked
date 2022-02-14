
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct l2cap_chan {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct l2cap_chan *VAR_2,
           unsigned long VAR_3,
           unsigned long VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_1(VAR_3 + VAR_4, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 return VAR_6;
}
