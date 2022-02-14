
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct program_param {int dummy; } ;
struct TYPE_2__ {size_t num; struct program_param* array; } ;
struct gs_program {TYPE_1__ params; } ;


 int FUNC_0 (struct gs_program*,struct program_param*) ;

void FUNC_1(struct gs_program *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->params.num; VAR_1++) {
  struct program_param *VAR_2 = VAR_0->params.array + VAR_1;
  FUNC_0(VAR_0, VAR_2);
 }
}
