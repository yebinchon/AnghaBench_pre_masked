
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_dns_message {int num_answers; int num_questions; int flags; int transaction_id; } ;
struct mg_dns_header {void* num_answers; void* num_questions; void* flags; int transaction_id; } ;
struct mbuf {int dummy; } ;
typedef int header ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*,size_t,struct mg_dns_header*,int) ;
 int FUNC_2 (struct mg_dns_header*,int ,int) ;

int FUNC_3(struct mbuf *VAR_0, size_t VAR_1,
                         struct mg_dns_message *VAR_2) {
  struct mg_dns_header VAR_3;

  FUNC_2(&VAR_3, 0, sizeof(VAR_3));
  VAR_3.transaction_id = VAR_2->transaction_id;
  VAR_3.flags = FUNC_0(VAR_2->flags);
  VAR_3.num_questions = FUNC_0(VAR_2->num_questions);
  VAR_3.num_answers = FUNC_0(VAR_2->num_answers);

  return FUNC_1(VAR_0, VAR_1, &VAR_3, sizeof(VAR_3));
}
