
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* type_hierarchy; int type_descriptor; int flags; int base_class_offset; int signature; } ;
typedef TYPE_4__ rtti_object_locator ;
struct TYPE_11__ {int array_len; TYPE_2__* base_classes; int attributes; int signature; } ;
typedef TYPE_5__ rtti_object_hierarchy ;
struct TYPE_7__ {int vbase_offset; int vbase_descr; int this_offset; } ;
struct TYPE_9__ {int type_descriptor; int attributes; TYPE_1__ offsets; int num_base_classes; } ;
struct TYPE_8__ {TYPE_3__** bases; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2( const rtti_object_locator *VAR_0 )
{
    int VAR_1;
    const rtti_object_hierarchy *VAR_2 = VAR_0->type_hierarchy;

    FUNC_0( "%p: sig=%08x base_offset=%08x flags=%08x type=%p %s hierarchy=%p\n",
           VAR_0, VAR_0->signature, VAR_0->base_class_offset, VAR_0->flags,
           VAR_0->type_descriptor, FUNC_1(VAR_0->type_descriptor), VAR_0->type_hierarchy );
    FUNC_0( "  hierarchy: sig=%08x attr=%08x len=%d base classes=%p\n",
           VAR_2->signature, VAR_2->attributes, VAR_2->array_len, VAR_2->base_classes );
    for (VAR_1 = 0; VAR_1 < VAR_2->array_len; VAR_1++)
    {
        FUNC_0( "    base class %p: num %d off %d,%d,%d attr %08x type %p %s\n",
               VAR_2->base_classes->bases[VAR_1],
               VAR_2->base_classes->bases[VAR_1]->num_base_classes,
               VAR_2->base_classes->bases[VAR_1]->offsets.this_offset,
               VAR_2->base_classes->bases[VAR_1]->offsets.vbase_descr,
               VAR_2->base_classes->bases[VAR_1]->offsets.vbase_offset,
               VAR_2->base_classes->bases[VAR_1]->attributes,
               VAR_2->base_classes->bases[VAR_1]->type_descriptor,
               FUNC_1(VAR_2->base_classes->bases[VAR_1]->type_descriptor) );
    }
}
