
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_zone {int dummy; } ;
struct dn_fib_node {struct dn_fib_node* fn_next; int fn_key; } ;


 struct dn_fib_node** FUNC_0 (int ,struct dn_zone*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct dn_zone *VAR_0,
       struct dn_fib_node **VAR_1,
       int VAR_2)
{
 struct dn_fib_node *VAR_3, **VAR_4, *VAR_5;
 int VAR_6;

 for(VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  for(VAR_3 = VAR_1[VAR_6]; VAR_3; VAR_3 = VAR_5) {
   VAR_5 = VAR_3->fn_next;
   for(VAR_4 = FUNC_0(VAR_3->fn_key, VAR_0);
    *VAR_4 && FUNC_1((*VAR_4)->fn_key, VAR_3->fn_key);
    VAR_4 = &(*VAR_4)->fn_next)
                 ;
   VAR_3->fn_next = *VAR_4;
   *VAR_4 = VAR_3;
  }
 }
}
