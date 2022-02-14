
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_elt {struct hist_elt_data* private_data; } ;
struct hist_elt_data {int dummy; } ;


 int FUNC_0 (struct hist_elt_data*) ;

__attribute__((used)) static void FUNC_1(struct tracing_map_elt *VAR_0)
{
 struct hist_elt_data *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_1);
}
