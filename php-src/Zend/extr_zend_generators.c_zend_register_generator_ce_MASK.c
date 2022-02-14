
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_object_handlers ;
typedef int zend_class_entry ;
struct TYPE_7__ {int get_constructor; int * clone_obj; int get_gc; int dtor_obj; int free_obj; } ;
struct TYPE_6__ {int get_iterator; int unserialize; int serialize; int create_object; int ce_flags; } ;


 int FUNC_0 (int ,char*,int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(void)
{
 zend_class_entry VAR_16;

 FUNC_0(VAR_16, "Generator", VAR_1);
 VAR_5 = FUNC_3(&VAR_16);
 VAR_5->ce_flags |= VAR_0;
 VAR_5->create_object = VAR_9;
 VAR_5->serialize = VAR_7;
 VAR_5->unserialize = VAR_8;


 FUNC_2(VAR_5, 1, VAR_6);
 VAR_5->get_iterator = VAR_14;

 FUNC_1(&VAR_15, &VAR_2, sizeof(zend_object_handlers));
 VAR_15.free_obj = VAR_11;
 VAR_15.dtor_obj = VAR_10;
 VAR_15.get_gc = VAR_13;
 VAR_15.clone_obj = ((void*)0);
 VAR_15.get_constructor = VAR_12;

 FUNC_0(VAR_16, "ClosedGeneratorException", ((void*)0));
 VAR_3 = FUNC_4(&VAR_16, VAR_4);
}
