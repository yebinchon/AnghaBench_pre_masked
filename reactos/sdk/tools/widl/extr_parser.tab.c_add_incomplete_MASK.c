
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
struct typenode {int entry; int * type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct typenode* FUNC_1 (int) ;

void FUNC_2(type_t *VAR_1)
{
  struct typenode *VAR_2 = FUNC_1(sizeof *VAR_2);
  VAR_2->type = VAR_1;
  FUNC_0(&VAR_0, &VAR_2->entry);
}
