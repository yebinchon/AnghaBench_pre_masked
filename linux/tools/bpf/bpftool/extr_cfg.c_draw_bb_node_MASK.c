
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_node {int idx; unsigned int start; } ;
struct dump_data {int dummy; } ;
struct bb_node {scalar_t__ idx; unsigned int head; int tail; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dump_data*,unsigned int,int ,unsigned int) ;
 int FUNC_1 (struct dump_data*) ;
 int FUNC_2 (struct dump_data*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(struct func_node *VAR_2, struct bb_node *VAR_3)
{
 const char *VAR_4;

 if (VAR_3->idx == VAR_0 || VAR_3->idx == VAR_1)
  VAR_4 = "Mdiamond";
 else
  VAR_4 = "record";

 FUNC_3("\tfn_%d_bb_%d [shape=%s,style=filled,label=\"",
        VAR_2->idx, VAR_3->idx, VAR_4);

 if (VAR_3->idx == VAR_0) {
  FUNC_3("ENTRY");
 } else if (VAR_3->idx == VAR_1) {
  FUNC_3("EXIT");
 } else {
  unsigned int VAR_5;
  struct dump_data VAR_6 = {};

  FUNC_3("{");
  FUNC_2(&VAR_6);
  VAR_5 = VAR_3->head - VAR_2->start;
  FUNC_0(&VAR_6, VAR_3->head, VAR_3->tail, VAR_5);
  FUNC_1(&VAR_6);
  FUNC_3("}");
 }

 FUNC_3("\"];\n\n");
}
