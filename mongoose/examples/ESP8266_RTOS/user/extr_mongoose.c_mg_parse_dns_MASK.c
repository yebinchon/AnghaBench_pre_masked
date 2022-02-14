
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* p; int len; } ;
struct mg_dns_message {int num_questions; int num_answers; int * answers; int * questions; void* flags; int transaction_id; TYPE_1__ pkt; } ;
struct mg_dns_header {int num_answers; int num_questions; int flags; int transaction_id; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mg_dns_message*,int ,int) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char*,int *,int) ;
 void* FUNC_3 (int ) ;

int FUNC_4(const char *VAR_0, int VAR_1, struct mg_dns_message *VAR_2) {
  struct mg_dns_header *VAR_3 = (struct mg_dns_header *) VAR_0;
  unsigned char *VAR_4 = (unsigned char *) VAR_0 + sizeof(*VAR_3);
  unsigned char *VAR_5 = (unsigned char *) VAR_0 + VAR_1;
  int VAR_6;

  FUNC_1(VAR_2, 0, sizeof(*VAR_2));
  VAR_2->pkt.p = VAR_0;
  VAR_2->pkt.len = VAR_1;

  if (VAR_1 < (int) sizeof(*VAR_3)) return -1;

  VAR_2->transaction_id = VAR_3->transaction_id;
  VAR_2->flags = FUNC_3(VAR_3->flags);
  VAR_2->num_questions = FUNC_3(VAR_3->num_questions);
  if (VAR_2->num_questions > (int) FUNC_0(VAR_2->questions)) {
    VAR_2->num_questions = (int) FUNC_0(VAR_2->questions);
  }
  VAR_2->num_answers = FUNC_3(VAR_3->num_answers);
  if (VAR_2->num_answers > (int) FUNC_0(VAR_2->answers)) {
    VAR_2->num_answers = (int) FUNC_0(VAR_2->answers);
  }

  for (VAR_6 = 0; VAR_6 < VAR_2->num_questions; VAR_6++) {
    VAR_4 = FUNC_2(VAR_4, VAR_5, &VAR_2->questions[VAR_6], 0);
    if (VAR_4 == ((void*)0)) return -1;
  }

  for (VAR_6 = 0; VAR_6 < VAR_2->num_answers; VAR_6++) {
    VAR_4 = FUNC_2(VAR_4, VAR_5, &VAR_2->answers[VAR_6], 1);
    if (VAR_4 == ((void*)0)) return -1;
  }

  return 0;
}
