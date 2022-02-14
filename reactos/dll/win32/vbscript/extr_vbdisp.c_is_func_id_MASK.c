
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* desc; } ;
typedef TYPE_2__ vbdisp_t ;
struct TYPE_4__ {scalar_t__ func_cnt; } ;
typedef scalar_t__ DISPID ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL FUNC_0(vbdisp_t *VAR_0, DISPID VAR_1)
{
    return VAR_1 < VAR_0->desc->func_cnt;
}
