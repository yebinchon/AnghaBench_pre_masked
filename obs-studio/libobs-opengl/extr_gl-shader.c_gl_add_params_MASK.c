
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gs_shader {void* world; void* viewproj; } ;
struct TYPE_3__ {size_t num; scalar_t__ array; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct gl_shader_parser {TYPE_2__ parser; } ;
typedef int GLint ;


 int FUNC_0 (struct gs_shader*,scalar_t__,int *) ;
 void* FUNC_1 (struct gs_shader*,char*) ;

__attribute__((used)) static inline bool FUNC_2(struct gs_shader *VAR_0,
     struct gl_shader_parser *VAR_1)
{
 size_t VAR_2;
 GLint VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->parser.params.num; VAR_2++)
  if (!FUNC_0(VAR_0, VAR_1->parser.params.array + VAR_2,
      &VAR_3))
   return 0;

 VAR_0->viewproj = FUNC_1(VAR_0, "ViewProj");
 VAR_0->world = FUNC_1(VAR_0, "World");

 return 1;
}
