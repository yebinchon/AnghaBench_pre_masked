
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_shader_parser {int type; char* input_prefix; char* output_prefix; int attribs; int texture_samplers; int gl_string; int parser; } ;
typedef enum gs_shader_type { ____Placeholder_gs_shader_type } gs_shader_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct gl_shader_parser *VAR_2,
      enum gs_shader_type VAR_3)
{
 VAR_2->type = VAR_3;

 if (VAR_3 == VAR_1) {
  VAR_2->input_prefix = "_input_attrib";
  VAR_2->output_prefix = "_vertex_shader_attrib";
 } else if (VAR_3 == VAR_0) {
  VAR_2->input_prefix = "_vertex_shader_attrib";
  VAR_2->output_prefix = "_pixel_shader_attrib";
 }

 FUNC_2(&VAR_2->parser);
 FUNC_1(&VAR_2->gl_string);
 FUNC_0(VAR_2->texture_samplers);
 FUNC_0(VAR_2->attribs);
}
