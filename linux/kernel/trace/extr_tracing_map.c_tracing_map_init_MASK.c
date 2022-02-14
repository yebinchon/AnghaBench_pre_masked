
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map {int n_fields; } ;


 int VAR_0 ;
 int FUNC_0 (struct tracing_map*) ;
 int FUNC_1 (struct tracing_map*) ;

int FUNC_2(struct tracing_map *VAR_1)
{
 int VAR_2;

 if (VAR_1->n_fields < 2)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1);

 return VAR_2;
}
