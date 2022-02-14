
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ zend_class_entry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(zend_class_entry *VAR_5, zend_class_entry *VAR_6)
{
 if (VAR_6->type == VAR_2 &&
  !FUNC_0(VAR_6, VAR_3) &&
  !FUNC_0(VAR_6, VAR_4)
 ) {
  FUNC_1(VAR_0, "DateTimeInterface can't be implemented by user classes");
 }

 return VAR_1;
}
