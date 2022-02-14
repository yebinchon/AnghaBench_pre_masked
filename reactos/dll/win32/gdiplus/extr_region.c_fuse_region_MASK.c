
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int region_element ;
struct TYPE_6__ {int * right; int * left; } ;
struct TYPE_7__ {TYPE_1__ combine; } ;
struct TYPE_8__ {TYPE_2__ elementdata; int type; } ;
struct TYPE_9__ {int num_children; TYPE_3__ node; } ;
typedef TYPE_4__ GpRegion ;
typedef int CombineMode ;



__attribute__((used)) static inline void FUNC_0(GpRegion* VAR_0, region_element* VAR_1,
        region_element* VAR_2, const CombineMode VAR_3)
{
    VAR_0->node.type = VAR_3;
    VAR_0->node.elementdata.combine.left = VAR_1;
    VAR_0->node.elementdata.combine.right = VAR_2;
    VAR_0->num_children += 2;
}
