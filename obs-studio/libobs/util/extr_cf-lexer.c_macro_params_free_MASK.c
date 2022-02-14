
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; scalar_t__ array; } ;
struct macro_params {TYPE_1__ params; } ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct macro_params *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->params.num; VAR_1++)
  FUNC_1(VAR_0->params.array + VAR_1);
 FUNC_0(VAR_0->params);
}
