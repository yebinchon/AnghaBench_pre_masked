
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_info {char const* s; char const* send; int options; char const* n; int num_comps; size_t num_subs; scalar_t__ is_conversion; scalar_t__ is_expression; scalar_t__ expansion; int * last_name; scalar_t__ next_sub; scalar_t__ next_comp; } ;



void
FUNC_0 (const char *VAR_0, int VAR_1, size_t VAR_2,
                          struct d_info *VAR_3)
{
  VAR_3->s = VAR_0;
  VAR_3->send = VAR_0 + VAR_2;
  VAR_3->options = VAR_1;

  VAR_3->n = VAR_0;




  VAR_3->num_comps = 2 * VAR_2;
  VAR_3->next_comp = 0;



  VAR_3->num_subs = VAR_2;
  VAR_3->next_sub = 0;

  VAR_3->last_name = ((void*)0);

  VAR_3->expansion = 0;
  VAR_3->is_expression = 0;
  VAR_3->is_conversion = 0;
}
