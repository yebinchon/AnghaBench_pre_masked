
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; scalar_t__ array; } ;
struct shader_func {TYPE_1__ params; int mapping; int return_type; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct shader_func *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->params.num; VAR_1++)
  FUNC_2(VAR_0->params.array + VAR_1);

 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->return_type);
 FUNC_0(VAR_0->mapping);
 FUNC_1(VAR_0->params);
}
