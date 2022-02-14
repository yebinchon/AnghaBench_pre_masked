
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* eoh_methods; } ;
struct TYPE_5__ {int (* get_flat_size ) (TYPE_2__*) ;} ;
typedef int Size ;
typedef TYPE_2__ ExpandedObjectHeader ;


 int FUNC_0 (TYPE_2__*) ;

Size
FUNC_1(ExpandedObjectHeader *VAR_0)
{
 return VAR_0->eoh_methods->get_flat_size(VAR_0);
}
