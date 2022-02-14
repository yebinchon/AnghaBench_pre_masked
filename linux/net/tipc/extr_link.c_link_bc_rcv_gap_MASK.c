
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct tipc_link {scalar_t__ rcv_nxt; scalar_t__ snd_nxt; int deferdq; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct sk_buff* FUNC_2 (int *) ;

__attribute__((used)) static u16 FUNC_3(struct tipc_link *VAR_0)
{
 struct sk_buff *VAR_1 = FUNC_2(&VAR_0->deferdq);
 u16 VAR_2 = 0;

 if (FUNC_1(VAR_0->snd_nxt, VAR_0->rcv_nxt))
  VAR_2 = VAR_0->snd_nxt - VAR_0->rcv_nxt;
 if (VAR_1)
  VAR_2 = FUNC_0(VAR_1) - VAR_0->rcv_nxt;
 return VAR_2;
}
