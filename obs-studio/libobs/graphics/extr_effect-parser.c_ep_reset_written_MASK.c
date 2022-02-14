
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {size_t num; TYPE_7__* array; } ;
struct TYPE_14__ {size_t num; TYPE_5__* array; } ;
struct TYPE_12__ {size_t num; TYPE_3__* array; } ;
struct TYPE_10__ {size_t num; TYPE_1__* array; } ;
struct effect_parser {TYPE_8__ samplers; TYPE_6__ funcs; TYPE_4__ structs; TYPE_2__ params; } ;
struct TYPE_15__ {int written; } ;
struct TYPE_13__ {int written; } ;
struct TYPE_11__ {int written; } ;
struct TYPE_9__ {int written; } ;



__attribute__((used)) static inline void FUNC_0(struct effect_parser *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->params.num; VAR_1++)
  VAR_0->params.array[VAR_1].written = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->structs.num; VAR_1++)
  VAR_0->structs.array[VAR_1].written = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->funcs.num; VAR_1++)
  VAR_0->funcs.array[VAR_1].written = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->samplers.num; VAR_1++)
  VAR_0->samplers.array[VAR_1].written = 0;
}
