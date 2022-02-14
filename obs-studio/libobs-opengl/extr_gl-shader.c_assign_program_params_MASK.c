
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_program {int pixel_shader; int vertex_shader; } ;


 int FUNC_0 (struct gs_program*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct gs_program *VAR_0)
{
 if (!FUNC_0(VAR_0, VAR_0->vertex_shader))
  return 0;
 if (!FUNC_0(VAR_0, VAR_0->pixel_shader))
  return 0;

 return 1;
}
