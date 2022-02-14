
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crush_choose_arg_map {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct crush_choose_arg_map* FUNC_1 (int,int ) ;

__attribute__((used)) static struct crush_choose_arg_map *FUNC_2(void)
{
 struct crush_choose_arg_map *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->node);
 return VAR_1;
}
