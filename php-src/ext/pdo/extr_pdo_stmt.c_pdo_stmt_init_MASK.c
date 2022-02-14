
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zend_object_handlers ;
typedef int zend_class_entry ;
struct TYPE_10__ {void* unserialize; void* serialize; int create_object; int ce_flags; } ;
struct TYPE_9__ {int compare; int get_class_name; int get_constructor; int get_method; int get_properties_for; int unset_dimension; int has_dimension; int write_dimension; int read_dimension; int unset_property; int has_property; int write_property; int read_property; int * get_property_ptr_ptr; int * clone_obj; int free_obj; int dtor_obj; int offset; } ;
struct TYPE_8__ {void* unserialize; void* serialize; int create_object; int get_iterator; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 TYPE_4__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 void* VAR_34 ;
 void* VAR_35 ;
 int FUNC_4 (TYPE_1__*,char*,int,int ) ;
 int VAR_36 ;
 void* FUNC_5 (int *) ;

void FUNC_6(void)
{
 zend_class_entry VAR_37;

 FUNC_0(VAR_37, "PDOStatement", VAR_8);
 VAR_6 = FUNC_5(&VAR_37);
 VAR_6->get_iterator = VAR_16;
 VAR_6->create_object = VAR_9;
 VAR_6->serialize = VAR_34;
 VAR_6->unserialize = VAR_35;
 FUNC_3(VAR_6, 1, VAR_33);
 FUNC_4(VAR_6, "queryString", sizeof("queryString")-1, VAR_1);

 FUNC_2(&VAR_10, &VAR_32, sizeof(zend_object_handlers));
 VAR_10.offset = FUNC_1(VAR_17, VAR_31);
 VAR_10.dtor_obj = VAR_36;
 VAR_10.free_obj = VAR_7;
 VAR_10.write_property = VAR_5;
 VAR_10.unset_property = VAR_4;
 VAR_10.get_method = VAR_3;
 VAR_10.compare = VAR_2;
 VAR_10.clone_obj = ((void*)0);

 FUNC_0(VAR_37, "PDORow", VAR_13);
 VAR_11 = FUNC_5(&VAR_37);
 VAR_11->ce_flags |= VAR_0;
 VAR_11->create_object = VAR_14;
 VAR_11->serialize = VAR_34;
 VAR_11->unserialize = VAR_35;

 FUNC_2(&VAR_15, &VAR_32, sizeof(zend_object_handlers));
 VAR_15.free_obj = VAR_12;
 VAR_15.clone_obj = ((void*)0);
 VAR_15.get_property_ptr_ptr = ((void*)0);
 VAR_15.read_property = VAR_29;
 VAR_15.write_property = VAR_30;
 VAR_15.has_property = VAR_28;
 VAR_15.unset_property = VAR_27;
 VAR_15.read_dimension = VAR_21;
 VAR_15.write_dimension = VAR_22;
 VAR_15.has_dimension = VAR_20;
 VAR_15.unset_dimension = VAR_19;
 VAR_15.get_properties_for = VAR_25;
 VAR_15.get_method = VAR_26;
 VAR_15.get_constructor = VAR_24;
 VAR_15.get_class_name = VAR_23;
 VAR_15.compare = VAR_18;
}
