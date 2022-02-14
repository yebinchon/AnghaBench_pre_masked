
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_object_handlers ;
typedef int zend_class_entry ;
struct TYPE_6__ {int get_gc; int get_closure; int get_debug_info; int clone_obj; int compare; int unset_property; int has_property; int get_property_ptr_ptr; int read_property; int write_property; int get_method; int get_constructor; int free_obj; } ;
struct TYPE_5__ {int unserialize; int serialize; int create_object; int ce_flags; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,int *,int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_1__* FUNC_2 (int *) ;

void FUNC_3(void)
{
 zend_class_entry VAR_21;

 FUNC_0(VAR_21, "Closure", VAR_1);
 VAR_4 = FUNC_2(&VAR_21);
 VAR_4->ce_flags |= VAR_0;
 VAR_4->create_object = VAR_17;
 VAR_4->serialize = VAR_5;
 VAR_4->unserialize = VAR_6;

 FUNC_1(&VAR_2, &VAR_3, sizeof(zend_object_handlers));
 VAR_2.free_obj = VAR_9;
 VAR_2.get_constructor = VAR_11;
 VAR_2.get_method = VAR_14;
 VAR_2.write_property = VAR_20;
 VAR_2.read_property = VAR_18;
 VAR_2.get_property_ptr_ptr = VAR_15;
 VAR_2.has_property = VAR_16;
 VAR_2.unset_property = VAR_19;
 VAR_2.compare = VAR_8;
 VAR_2.clone_obj = VAR_7;
 VAR_2.get_debug_info = VAR_12;
 VAR_2.get_closure = VAR_10;
 VAR_2.get_gc = VAR_13;
}
