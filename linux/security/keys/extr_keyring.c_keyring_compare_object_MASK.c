
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keyring_index_key {scalar_t__ type; scalar_t__ domain_tag; scalar_t__ desc_len; int description; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ domain_tag; scalar_t__ desc_len; int description; } ;
struct key {TYPE_1__ index_key; } ;


 struct key* FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct keyring_index_key *VAR_2 = VAR_1;
 const struct key *VAR_3 = FUNC_0(VAR_0);

 return VAR_3->index_key.type == VAR_2->type &&
  VAR_3->index_key.domain_tag == VAR_2->domain_tag &&
  VAR_3->index_key.desc_len == VAR_2->desc_len &&
  FUNC_1(VAR_3->index_key.description, VAR_2->description,
         VAR_2->desc_len) == 0;
}
