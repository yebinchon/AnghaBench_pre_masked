
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_state {int dummy; } ;
struct xa_node {scalar_t__ count; scalar_t__ nr_values; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xa_node*,int) ;
 int FUNC_1 (struct xa_state*) ;
 int FUNC_2 (struct xa_state*,struct xa_node*) ;

__attribute__((used)) static void FUNC_3(struct xa_state *VAR_1, struct xa_node *VAR_2,
  int VAR_3, int VAR_4)
{
 if (!VAR_2 || (!VAR_3 && !VAR_4))
  return;

 VAR_2->count += VAR_3;
 VAR_2->nr_values += VAR_4;
 FUNC_0(VAR_2, VAR_2->count > VAR_0);
 FUNC_0(VAR_2, VAR_2->nr_values > VAR_0);
 FUNC_2(VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_1(VAR_1);
}
