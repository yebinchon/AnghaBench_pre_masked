
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_object_handlers ;
typedef int zend_class_entry ;
struct TYPE_6__ {int unserialize; int serialize; int create_object; int ce_flags; } ;
struct TYPE_5__ {int * clone_obj; int get_property_ptr_ptr; int unset_property; int has_property; int write_property; int read_property; int free_obj; int offset; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_5(void)
{
 zend_class_entry VAR_15;

 FUNC_0(VAR_15, "WeakReference", VAR_8);
 VAR_2 = FUNC_4(&VAR_15);
 VAR_2->ce_flags |= VAR_0;

 VAR_2->create_object = VAR_9;
 VAR_2->serialize = VAR_3;
 VAR_2->unserialize = VAR_4;

 FUNC_2(&VAR_7, FUNC_3(), sizeof(zend_object_handlers));
 VAR_7.offset = FUNC_1(VAR_5, VAR_1);

 VAR_7.free_obj = VAR_6;
 VAR_7.read_property = VAR_11;
 VAR_7.write_property = VAR_14;
 VAR_7.has_property = VAR_10;
 VAR_7.unset_property = VAR_13;
 VAR_7.get_property_ptr_ptr = VAR_12;
 VAR_7.clone_obj = ((void*)0);
}
