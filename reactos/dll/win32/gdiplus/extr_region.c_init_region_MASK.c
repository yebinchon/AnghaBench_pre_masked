
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_5__ {scalar_t__ num_children; TYPE_1__ node; } ;
typedef int RegionType ;
typedef int GpStatus ;
typedef TYPE_2__ GpRegion ;


 int VAR_0 ;

__attribute__((used)) static inline GpStatus FUNC_0(GpRegion* VAR_1, const RegionType VAR_2)
{
    VAR_1->node.type = VAR_2;
    VAR_1->num_children = 0;

    return VAR_0;
}
