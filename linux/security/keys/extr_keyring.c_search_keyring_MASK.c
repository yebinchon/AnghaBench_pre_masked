
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lookup_type; } ;
struct keyring_search_context {int (* iterator ) (void const*,struct keyring_search_context*) ;int index_key; TYPE_1__ match_data; } ;
struct key {int keys; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int (*) (void const*,struct keyring_search_context*),struct keyring_search_context*) ;
 int VAR_1 ;
 int FUNC_2 (void const*,struct keyring_search_context*) ;

__attribute__((used)) static int FUNC_3(struct key *VAR_2, struct keyring_search_context *VAR_3)
{
 if (VAR_3->match_data.lookup_type == VAR_0) {
  const void *VAR_4;

  VAR_4 = FUNC_0(&VAR_2->keys,
       &VAR_1,
       &VAR_3->index_key);
  return VAR_4 ? VAR_3->iterator(VAR_4, VAR_3) : 0;
 }
 return FUNC_1(&VAR_2->keys, VAR_3->iterator, VAR_3);
}
