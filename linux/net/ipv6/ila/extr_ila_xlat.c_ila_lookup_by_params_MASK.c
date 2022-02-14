
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int locator_match; } ;
struct ila_xlat_params {TYPE_2__ ip; } ;
struct TYPE_3__ {int rhash_table; } ;
struct ila_net {TYPE_1__ xlat; } ;
struct ila_map {int next; } ;


 int FUNC_0 (struct ila_map*,struct ila_xlat_params*) ;
 struct ila_map* FUNC_1 (int ) ;
 struct ila_map* FUNC_2 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline struct ila_map *FUNC_3(struct ila_xlat_params *VAR_1,
         struct ila_net *VAR_2)
{
 struct ila_map *VAR_3;

 VAR_3 = FUNC_2(&VAR_2->xlat.rhash_table,
         &VAR_1->ip.locator_match,
         VAR_0);
 while (VAR_3) {
  if (!FUNC_0(VAR_3, VAR_1))
   return VAR_3;
  VAR_3 = FUNC_1(VAR_3->next);
 }

 return ((void*)0);
}
