
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_dns_resource_record {int rtype; } ;
struct mg_dns_message {int num_answers; struct mg_dns_resource_record* answers; } ;



struct mg_dns_resource_record *FUNC_0(
    struct mg_dns_message *VAR_0, int VAR_1,
    struct mg_dns_resource_record *VAR_2) {
  struct mg_dns_resource_record *VAR_3;

  for (VAR_3 = (VAR_2 == ((void*)0) ? VAR_0->answers : VAR_2 + 1);
       VAR_3 - VAR_0->answers < VAR_0->num_answers; VAR_3++) {
    if (VAR_3->rtype == VAR_1) {
      return VAR_3;
    }
  }
  return ((void*)0);
}
