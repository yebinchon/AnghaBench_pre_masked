
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_dns_resource_record {int rtype; int name; } ;
struct mg_dns_reply {int dummy; } ;
struct mg_dns_message {int num_questions; struct mg_dns_resource_record* questions; } ;
struct mg_connection {int flags; } ;
struct mbuf {int dummy; } ;
typedef int rname ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*,int) ;
 struct mg_dns_reply FUNC_3 (struct mbuf*,struct mg_dns_message*) ;
 int FUNC_4 (struct mg_dns_reply*,struct mg_dns_resource_record*,int *,int,int,int *,int) ;
 int FUNC_5 (struct mg_connection*,struct mg_dns_reply*) ;
 int FUNC_6 (struct mg_dns_message*,int *,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct mg_connection *VAR_4, int VAR_5, void *VAR_6) {
  struct mg_dns_message *VAR_7;
  struct mg_dns_resource_record *VAR_8;
  struct mg_dns_reply VAR_9;
  int VAR_10;

  switch (VAR_5) {
    case 128: {
      struct mbuf VAR_11;
      FUNC_2(&VAR_11, 512);
      VAR_7 = (struct mg_dns_message *) VAR_6;
      VAR_9 = FUNC_3(&VAR_11, VAR_7);

      for (VAR_10 = 0; VAR_10 < VAR_7->num_questions; VAR_10++) {
        char VAR_12[256];
        VAR_8 = &VAR_7->questions[VAR_10];
        FUNC_6(VAR_7, &VAR_8->name, VAR_12, sizeof(VAR_12) - 1);
        FUNC_0(VAR_3, "Q type %d name %s\n", VAR_8->rtype, VAR_12);
        if (VAR_8->rtype == VAR_0) {
          FUNC_4(&VAR_9, VAR_8, ((void*)0), VAR_8->rtype, 10, &VAR_2,
                              4);
        }
      }
      FUNC_5(VAR_4, &VAR_9);
      VAR_4->flags |= VAR_1;
      FUNC_1(&VAR_11);
      break;
    }
  }
}
