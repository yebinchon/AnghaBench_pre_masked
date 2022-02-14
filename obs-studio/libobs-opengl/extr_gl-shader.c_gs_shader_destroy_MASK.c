
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t num; int * array; } ;
struct TYPE_6__ {TYPE_4__ attribs; TYPE_4__ params; TYPE_4__ samplers; scalar_t__ obj; } ;
typedef TYPE_1__ gs_shader_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_4__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(gs_shader_t *VAR_0)
{
 size_t VAR_1;

 if (!VAR_0)
  return;

 FUNC_5(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->attribs.num; VAR_1++)
  FUNC_6(VAR_0->attribs.array + VAR_1);

 for (VAR_1 = 0; VAR_1 < VAR_0->samplers.num; VAR_1++)
  FUNC_4(VAR_0->samplers.array[VAR_1]);

 for (VAR_1 = 0; VAR_1 < VAR_0->params.num; VAR_1++)
  FUNC_7(VAR_0->params.array + VAR_1);

 if (VAR_0->obj) {
  FUNC_2(VAR_0->obj);
  FUNC_3("glDeleteShader");
 }

 FUNC_1(VAR_0->samplers);
 FUNC_1(VAR_0->params);
 FUNC_1(VAR_0->attribs);
 FUNC_0(VAR_0);
}
