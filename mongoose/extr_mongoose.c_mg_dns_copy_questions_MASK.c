
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; scalar_t__ p; } ;
struct mg_dns_resource_record {TYPE_1__ name; } ;
struct TYPE_4__ {scalar_t__ p; } ;
struct mg_dns_message {int num_questions; struct mg_dns_resource_record* questions; TYPE_2__ pkt; } ;
struct mg_dns_header {int dummy; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct mbuf*,unsigned char*,int) ;

int FUNC_1(struct mbuf *VAR_0, struct mg_dns_message *VAR_1) {
  unsigned char *VAR_2, *VAR_3;
  struct mg_dns_resource_record *VAR_4;
  if (VAR_1->num_questions <= 0) return 0;
  VAR_2 = (unsigned char *) VAR_1->pkt.p + sizeof(struct mg_dns_header);
  VAR_4 = &VAR_1->questions[VAR_1->num_questions - 1];
  VAR_3 = (unsigned char *) VAR_4->name.p + VAR_4->name.len + 4;
  return FUNC_0(VAR_0, VAR_2, VAR_3 - VAR_2);
}
