
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry_iter {int hide_unresolved; } ;
struct callchain_cursor_node {int dummy; } ;
struct addr_location {int dummy; } ;


 int VAR_0 ;
 struct callchain_cursor_node* FUNC_0 (int *) ;
 int FUNC_1 (struct addr_location*,struct callchain_cursor_node*,int ) ;

__attribute__((used)) static int
FUNC_2(struct hist_entry_iter *VAR_1,
      struct addr_location *VAR_2)
{
 struct callchain_cursor_node *VAR_3;

 VAR_3 = FUNC_0(&VAR_0);
 if (VAR_3 == ((void*)0))
  return 0;

 return FUNC_1(VAR_2, VAR_3, VAR_1->hide_unresolved);
}
