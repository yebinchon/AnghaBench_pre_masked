
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* function; } ;
typedef TYPE_3__ call_frame_t ;
struct TYPE_6__ {TYPE_1__* variables; int * params; } ;
struct TYPE_5__ {int name; } ;
typedef int BSTR ;



__attribute__((used)) static inline BSTR FUNC_0(call_frame_t *VAR_0, int VAR_1)
{
    return VAR_1 < 0 ? VAR_0->function->params[-VAR_1-1] : VAR_0->function->variables[VAR_1].name;
}
