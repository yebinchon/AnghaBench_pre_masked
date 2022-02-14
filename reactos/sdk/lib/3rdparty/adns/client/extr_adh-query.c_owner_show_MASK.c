
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct query_node {char const* owner; } ;
struct TYPE_3__ {char const* owner; } ;
typedef TYPE_1__ adns_answer ;



__attribute__((used)) static const char *FUNC_0(struct query_node *VAR_0, adns_answer *VAR_1) {
  return VAR_1->owner ? VAR_1->owner : VAR_0->owner;
}
