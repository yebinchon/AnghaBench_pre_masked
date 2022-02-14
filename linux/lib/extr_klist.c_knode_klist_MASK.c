
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_node {scalar_t__ n_klist; } ;
struct klist {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static struct klist *FUNC_0(struct klist_node *VAR_1)
{
 return (struct klist *)
  ((unsigned long)VAR_1->n_klist & VAR_0);
}
