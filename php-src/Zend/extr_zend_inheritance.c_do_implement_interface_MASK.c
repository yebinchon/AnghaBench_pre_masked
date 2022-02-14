
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ce_flags; scalar_t__ (* interface_gets_implemented ) (TYPE_1__*,TYPE_1__*) ;int name; } ;
typedef TYPE_1__ zend_class_entry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(zend_class_entry *VAR_3, zend_class_entry *VAR_4)
{
 if (!(VAR_3->ce_flags & VAR_2) && VAR_4->interface_gets_implemented && VAR_4->interface_gets_implemented(VAR_4, VAR_3) == VAR_1) {
  FUNC_3(VAR_0, "Class %s could not implement interface %s", FUNC_1(VAR_3->name), FUNC_1(VAR_4->name));
 }

 FUNC_0(VAR_3 != VAR_4);
}
