
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sctp_ulpq {int reasm_uo; int reasm; int lobby; } ;
struct sctp_ulpevent {int dummy; } ;


 struct sk_buff* FUNC_0 (int *) ;
 struct sctp_ulpevent* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sctp_ulpevent*) ;

void FUNC_3(struct sctp_ulpq *VAR_0)
{
 struct sk_buff *VAR_1;
 struct sctp_ulpevent *VAR_2;

 while ((VAR_1 = FUNC_0(&VAR_0->lobby)) != ((void*)0)) {
  VAR_2 = FUNC_1(VAR_1);
  FUNC_2(VAR_2);
 }

 while ((VAR_1 = FUNC_0(&VAR_0->reasm)) != ((void*)0)) {
  VAR_2 = FUNC_1(VAR_1);
  FUNC_2(VAR_2);
 }

 while ((VAR_1 = FUNC_0(&VAR_0->reasm_uo)) != ((void*)0)) {
  VAR_2 = FUNC_1(VAR_1);
  FUNC_2(VAR_2);
 }
}
