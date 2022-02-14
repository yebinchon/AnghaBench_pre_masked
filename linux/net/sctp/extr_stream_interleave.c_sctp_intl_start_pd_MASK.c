
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sctp_ulpq {int reasm_uo; int reasm; } ;
struct sctp_ulpevent {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sk_buff_head*,int ) ;
 int FUNC_1 (struct sctp_ulpq*,struct sk_buff_head*) ;
 int FUNC_2 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_3 (struct sctp_ulpq*) ;
 struct sctp_ulpevent* FUNC_4 (struct sctp_ulpq*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_7(struct sctp_ulpq *VAR_0, gfp_t VAR_1)
{
 struct sctp_ulpevent *VAR_2;
 struct sk_buff_head VAR_3;

 if (!FUNC_5(&VAR_0->reasm)) {
  do {
   VAR_2 = FUNC_3(VAR_0);
   if (VAR_2) {
    FUNC_6(&VAR_3);
    FUNC_0(&VAR_3, FUNC_2(VAR_2));
    FUNC_1(VAR_0, &VAR_3);
   }
  } while (VAR_2);
 }

 if (!FUNC_5(&VAR_0->reasm_uo)) {
  do {
   VAR_2 = FUNC_4(VAR_0);
   if (VAR_2) {
    FUNC_6(&VAR_3);
    FUNC_0(&VAR_3, FUNC_2(VAR_2));
    FUNC_1(VAR_0, &VAR_3);
   }
  } while (VAR_2);
 }
}
