
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_hash {int dummy; } ;
struct dn_fib_node {int fn_state; struct dn_fib_node* fn_next; } ;
struct dn_fib_info {int fib_flags; } ;


 struct dn_fib_info* FUNC_0 (struct dn_fib_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dn_fib_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(struct dn_fib_node **VAR_3, int VAR_4, struct dn_hash *VAR_5)
{
 int VAR_6 = 0;
 struct dn_fib_node *VAR_7;

 while((VAR_7 = *VAR_3) != ((void*)0)) {
  struct dn_fib_info *VAR_8 = FUNC_0(VAR_7);

  if (VAR_8 && ((VAR_7->fn_state & VAR_0) || (VAR_8->fib_flags & VAR_1))) {
   FUNC_2(&VAR_2);
   *VAR_3 = VAR_7->fn_next;
   FUNC_3(&VAR_2);

   FUNC_1(VAR_7);
   VAR_6++;
   continue;
  }
  VAR_3 = &VAR_7->fn_next;
 }

 return VAR_6;
}
