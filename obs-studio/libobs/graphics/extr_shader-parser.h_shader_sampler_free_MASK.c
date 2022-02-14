
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; int * array; } ;
struct shader_sampler {TYPE_1__ values; TYPE_1__ states; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;

__attribute__((used)) static inline void FUNC_2(struct shader_sampler *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->states.num; VAR_1++)
  FUNC_0(VAR_0->states.array[VAR_1]);
 for (VAR_1 = 0; VAR_1 < VAR_0->values.num; VAR_1++)
  FUNC_0(VAR_0->values.array[VAR_1]);

 FUNC_0(VAR_0->name);
 FUNC_1(VAR_0->states);
 FUNC_1(VAR_0->values);
}
