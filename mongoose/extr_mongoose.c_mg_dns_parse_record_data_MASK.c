
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int p; } ;
struct mg_dns_resource_record {int rtype; TYPE_2__ rdata; } ;
struct TYPE_3__ {scalar_t__ len; scalar_t__ p; } ;
struct mg_dns_message {TYPE_1__ pkt; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;





 int FUNC_0 (void*,int ,size_t) ;
 int FUNC_1 (struct mg_dns_message*,TYPE_2__*,char*,size_t) ;

int FUNC_2(struct mg_dns_message *VAR_0,
                             struct mg_dns_resource_record *VAR_1, void *VAR_2,
                             size_t VAR_3) {
  switch (VAR_1->rtype) {
    case 129:
      if (VAR_3 < sizeof(struct in_addr)) {
        return -1;
      }
      if (VAR_1->rdata.p + VAR_3 > VAR_0->pkt.p + VAR_0->pkt.len) {
        return -1;
      }
      FUNC_0(VAR_2, VAR_1->rdata.p, VAR_3);
      return 0;
    case 128:
      FUNC_1(VAR_0, &VAR_1->rdata, (char *) VAR_2, VAR_3);
      return 0;
  }

  return -1;
}
