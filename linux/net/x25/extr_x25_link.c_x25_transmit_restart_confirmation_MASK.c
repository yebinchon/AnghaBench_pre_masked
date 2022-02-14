
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {scalar_t__ extended; } ;
struct sk_buff {int * sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 unsigned char* FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,struct x25_neigh*) ;

__attribute__((used)) static void FUNC_4(struct x25_neigh *VAR_6)
{
 unsigned char *VAR_7;
 int VAR_8 = VAR_3 + VAR_5;
 struct sk_buff *VAR_9 = FUNC_0(VAR_8, VAR_0);

 if (!VAR_9)
  return;

 FUNC_2(VAR_9, VAR_3);

 VAR_7 = FUNC_1(VAR_9, VAR_5);

 *VAR_7++ = VAR_6->extended ? VAR_1 : VAR_2;
 *VAR_7++ = 0x00;
 *VAR_7++ = VAR_4;

 VAR_9->sk = ((void*)0);

 FUNC_3(VAR_9, VAR_6);
}
