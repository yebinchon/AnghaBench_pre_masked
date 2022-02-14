
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mg_dns_resource_record {int rtype; int rclass; int kind; } ;
struct mg_dns_message {int flags; int num_questions; scalar_t__ transaction_id; struct mg_dns_resource_record* questions; } ;
struct mg_connection {int flags; } ;
struct mbuf {scalar_t__ len; int buf; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct mg_dns_message*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*,int) ;
 int FUNC_6 (struct mbuf*,int ,int *,int) ;
 int FUNC_7 (struct mbuf*,struct mg_dns_resource_record*,char const*,int ,int *,int ) ;
 int FUNC_8 (struct mbuf*,int ,struct mg_dns_message*) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (struct mg_connection*,int ,scalar_t__) ;
 int FUNC_10 (char const*) ;

void FUNC_11(struct mg_connection *VAR_3, const char *VAR_4,
                       int VAR_5) {
  struct mg_dns_message *VAR_6 =
      (struct mg_dns_message *) FUNC_1(1, sizeof(*VAR_6));
  struct mbuf VAR_7;
  struct mg_dns_resource_record *VAR_8 = &VAR_6->questions[0];

  FUNC_0(("%s %d", VAR_4, VAR_5));

  FUNC_5(&VAR_7, 64 );

  VAR_6->transaction_id = ++VAR_2;
  VAR_6->flags = 0x100;
  VAR_6->num_questions = 1;

  FUNC_8(&VAR_7, 0, VAR_6);

  VAR_8->rtype = VAR_5;
  VAR_8->rclass = 1;
  VAR_8->kind = VAR_0;

  if (FUNC_7(&VAR_7, VAR_8, VAR_4, FUNC_10(VAR_4), ((void*)0), 0) == -1) {

    goto cleanup;
  }


  if (!(VAR_3->flags & VAR_1)) {
    uint16_t VAR_9 = FUNC_3((uint16_t) VAR_7.len);
    FUNC_6(&VAR_7, 0, &VAR_9, 2);
  }

  FUNC_9(VAR_3, VAR_7.buf, VAR_7.len);
  FUNC_4(&VAR_7);

cleanup:
  FUNC_2(VAR_6);
}
