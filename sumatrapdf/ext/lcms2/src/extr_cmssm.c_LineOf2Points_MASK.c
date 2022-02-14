
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* n; } ;
typedef TYPE_1__ cmsVEC3 ;
struct TYPE_7__ {int u; int a; } ;
typedef TYPE_2__ cmsLine ;
typedef int cmsContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int *,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_3, cmsLine* VAR_4, cmsVEC3* VAR_5, cmsVEC3* VAR_6)
{

    FUNC_0(VAR_3, &VAR_4 ->a, VAR_5 ->n[VAR_0], VAR_5 ->n[VAR_1], VAR_5 ->n[VAR_2]);
    FUNC_0(VAR_3, &VAR_4 ->u, VAR_6 ->n[VAR_0] - VAR_5 ->n[VAR_0],
                            VAR_6 ->n[VAR_1] - VAR_5 ->n[VAR_1],
                            VAR_6 ->n[VAR_2] - VAR_5 ->n[VAR_2]);
}
