
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct cfpkt {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 struct cfpkt* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static struct cfpkt *FUNC_4(u16 VAR_1, u16 VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(VAR_1 + VAR_2, VAR_0);
 if (FUNC_3(VAR_3 == ((void*)0)))
  return ((void*)0);

 FUNC_1(VAR_3, VAR_2);
 return FUNC_2(VAR_3);
}
