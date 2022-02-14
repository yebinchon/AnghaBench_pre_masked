
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_var {char* type; char* name; size_t gl_sampler_id; int default_val; scalar_t__ array_count; int * mapping; int var_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct shader_var *VAR_3, char *VAR_4,
      char *VAR_5, bool VAR_6,
      bool VAR_7)
{
 if (VAR_6)
  VAR_3->var_type = VAR_2;
 else if (VAR_7)
  VAR_3->var_type = VAR_0;
 else
  VAR_3->var_type = VAR_1;

 VAR_3->type = VAR_4;
 VAR_3->name = VAR_5;
 VAR_3->mapping = ((void*)0);
 VAR_3->array_count = 0;
 VAR_3->gl_sampler_id = (size_t)-1;
 FUNC_0(VAR_3->default_val);
}
