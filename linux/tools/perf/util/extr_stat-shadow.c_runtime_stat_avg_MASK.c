
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved_value {int stats; } ;
struct runtime_stat {int dummy; } ;
typedef enum stat_type { ____Placeholder_stat_type } stat_type ;


 double FUNC_0 (int *) ;
 struct saved_value* FUNC_1 (int *,int,int,int,int,struct runtime_stat*) ;

__attribute__((used)) static double FUNC_2(struct runtime_stat *VAR_0,
          enum stat_type VAR_1, int VAR_2, int VAR_3)
{
 struct saved_value *VAR_4;

 VAR_4 = FUNC_1(((void*)0), VAR_3, 0, VAR_1, VAR_2, VAR_0);
 if (!VAR_4)
  return 0.0;

 return FUNC_0(&VAR_4->stats);
}
