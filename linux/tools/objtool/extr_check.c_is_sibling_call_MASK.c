
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instruction {scalar_t__ type; int call_dest; int alts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct instruction *VAR_3)
{

 if (VAR_3->type == VAR_1)
  return FUNC_0(&VAR_3->alts);

 if (VAR_3->type != VAR_0 &&
     VAR_3->type != VAR_2)
  return 0;


 return !!VAR_3->call_dest;
}
