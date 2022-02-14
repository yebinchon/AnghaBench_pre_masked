
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_object_handlers ;
typedef int zend_class_entry ;
struct TYPE_6__ {int offset; int get_constructor; int free_obj; int * clone_obj; } ;
struct TYPE_5__ {int unserialize; int serialize; int create_object; int ce_flags; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4()
{
 zend_class_entry VAR_12;
 FUNC_0(VAR_12, "GdImage", VAR_2);
 VAR_1 = FUNC_3(&VAR_12);
 VAR_1->ce_flags |= VAR_0;
 VAR_1->create_object = VAR_4;
 VAR_1->serialize = VAR_10;
 VAR_1->unserialize = VAR_11;


 FUNC_2(&VAR_7, &VAR_9, sizeof(zend_object_handlers));
 VAR_7.clone_obj = ((void*)0);
 VAR_7.free_obj = VAR_5;
 VAR_7.get_constructor = VAR_6;
 VAR_7.offset = FUNC_1(VAR_3, VAR_8);
}
