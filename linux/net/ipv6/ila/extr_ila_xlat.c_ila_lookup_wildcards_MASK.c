
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rhash_table; } ;
struct ila_net {TYPE_1__ xlat; } ;
struct ila_map {int next; } ;
struct ila_addr {int loc; } ;


 int FUNC_0 (struct ila_map*,struct ila_addr*,int) ;
 struct ila_map* FUNC_1 (int ) ;
 struct ila_map* FUNC_2 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline struct ila_map *FUNC_3(struct ila_addr *VAR_1,
         int VAR_2,
         struct ila_net *VAR_3)
{
 struct ila_map *VAR_4;

 VAR_4 = FUNC_2(&VAR_3->xlat.rhash_table, &VAR_1->loc,
         VAR_0);
 while (VAR_4) {
  if (!FUNC_0(VAR_4, VAR_1, VAR_2))
   return VAR_4;
  VAR_4 = FUNC_1(VAR_4->next);
 }

 return ((void*)0);
}
