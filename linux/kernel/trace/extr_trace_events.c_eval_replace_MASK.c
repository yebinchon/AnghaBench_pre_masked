
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_eval_map {int eval_value; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, struct trace_eval_map *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_0, 0, "%ld", VAR_1->eval_value);

 if (VAR_2 < VAR_4)
  return ((void*)0);

 FUNC_1(VAR_0, VAR_4 + 1, "%ld", VAR_1->eval_value);


 VAR_3 = FUNC_2(VAR_0 + VAR_2);
 FUNC_0(VAR_0 + VAR_4, VAR_0 + VAR_2, VAR_3);

 VAR_0[VAR_4 + VAR_3] = 0;

 return VAR_0 + VAR_4;
}
