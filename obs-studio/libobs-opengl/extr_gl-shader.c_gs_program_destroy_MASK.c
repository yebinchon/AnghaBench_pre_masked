
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gs_program {int obj; TYPE_1__* next; TYPE_1__** prev_next; int params; int attribs; TYPE_2__* device; } ;
struct TYPE_4__ {struct gs_program* cur_program; } ;
struct TYPE_3__ {struct TYPE_3__** prev_next; } ;


 int FUNC_0 (struct gs_program*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct gs_program *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->device->cur_program == VAR_0) {
  VAR_0->device->cur_program = 0;
  FUNC_3(0);
  FUNC_4("glUseProgram (zero)");
 }

 FUNC_1(VAR_0->attribs);
 FUNC_1(VAR_0->params);

 if (VAR_0->next)
  VAR_0->next->prev_next = VAR_0->prev_next;
 if (VAR_0->prev_next)
  *VAR_0->prev_next = VAR_0->next;

 FUNC_2(VAR_0->obj);
 FUNC_4("glDeleteProgram");

 FUNC_0(VAR_0);
}
