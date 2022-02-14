
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* builtin_info; } ;
typedef TYPE_2__ jsdisp_t ;
typedef scalar_t__ jsclass_t ;
struct TYPE_4__ {scalar_t__ class; } ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL FUNC_0(jsdisp_t *VAR_0, jsclass_t VAR_1)
{
    return VAR_0->builtin_info->class == VAR_1;
}
