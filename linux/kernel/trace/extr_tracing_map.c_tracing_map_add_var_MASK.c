
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map {scalar_t__ n_vars; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct tracing_map *VAR_2)
{
 int VAR_3 = -VAR_0;

 if (VAR_2->n_vars < VAR_1)
  VAR_3 = VAR_2->n_vars++;

 return VAR_3;
}
