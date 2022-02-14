
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__* n; } ;
typedef TYPE_3__ cmsVEC3 ;
struct TYPE_8__ {int* n; } ;
struct TYPE_7__ {scalar_t__* n; } ;
struct TYPE_10__ {TYPE_2__ u; TYPE_1__ a; } ;
typedef TYPE_4__ cmsLine ;
typedef int cmsFloat64Number ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static
void FUNC_0(cmsVEC3* VAR_3, const cmsLine* VAR_4, cmsFloat64Number VAR_5)
{
    VAR_3 ->n[VAR_0] = VAR_4 ->a.n[VAR_0] + VAR_5 * VAR_4->u.n[VAR_0];
    VAR_3 ->n[VAR_1] = VAR_4 ->a.n[VAR_1] + VAR_5 * VAR_4->u.n[VAR_1];
    VAR_3 ->n[VAR_2] = VAR_4 ->a.n[VAR_2] + VAR_5 * VAR_4->u.n[VAR_2];
}
