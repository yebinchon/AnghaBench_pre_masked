
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gs_shader {scalar_t__ type; TYPE_1__* device; } ;
struct gs_program {struct gs_shader* pixel_shader; struct gs_shader* vertex_shader; struct gs_program* next; } ;
struct TYPE_2__ {struct gs_program* first_program; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gs_program*) ;

__attribute__((used)) static void FUNC_1(struct gs_shader *VAR_2)
{
 struct gs_program *VAR_3 = VAR_2->device->first_program;

 while (VAR_3) {
  struct gs_program *VAR_4 = VAR_3->next;
  bool VAR_5 = 0;

  if (VAR_2->type == VAR_1 &&
      VAR_3->vertex_shader == VAR_2)
   VAR_5 = 1;

  else if (VAR_2->type == VAR_0 &&
    VAR_3->pixel_shader == VAR_2)
   VAR_5 = 1;

  if (VAR_5)
   FUNC_0(VAR_3);

  VAR_3 = VAR_4;
 }
}
