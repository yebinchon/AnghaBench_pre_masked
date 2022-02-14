
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct symbol {int dummy; } ;
struct call_path {int in_kernel; int children; int rb_node; scalar_t__ db_id; int ip; struct symbol* sym; struct call_path* parent; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct call_path *VAR_1, struct call_path *VAR_2,
       struct symbol *VAR_3, u64 VAR_4, bool VAR_5)
{
 VAR_1->parent = VAR_2;
 VAR_1->sym = VAR_3;
 VAR_1->ip = VAR_3 ? 0 : VAR_4;
 VAR_1->db_id = 0;
 VAR_1->in_kernel = VAR_5;
 FUNC_0(&VAR_1->rb_node);
 VAR_1->children = VAR_0;
}
