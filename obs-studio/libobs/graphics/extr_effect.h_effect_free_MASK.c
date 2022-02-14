
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t num; scalar_t__ array; } ;
struct TYPE_4__ {int * effect_dir; int * effect_path; TYPE_3__ techniques; TYPE_3__ params; } ;
typedef TYPE_1__ gs_effect_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(gs_effect_t *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->params.num; VAR_1++)
  FUNC_2(VAR_0->params.array + VAR_1);
 for (VAR_1 = 0; VAR_1 < VAR_0->techniques.num; VAR_1++)
  FUNC_3(VAR_0->techniques.array + VAR_1);

 FUNC_1(VAR_0->params);
 FUNC_1(VAR_0->techniques);

 FUNC_0(VAR_0->effect_path);
 FUNC_0(VAR_0->effect_dir);
 VAR_0->effect_path = ((void*)0);
 VAR_0->effect_dir = ((void*)0);
}
