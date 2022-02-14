
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
typedef TYPE_1__ zend_class_entry ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_4__*) ;
 TYPE_4__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(zend_class_entry *VAR_5, zend_class_entry *VAR_6)
{
 if (FUNC_1(VAR_6, VAR_4) || FUNC_1(VAR_6, VAR_3)) {
  return VAR_2;
 }
 FUNC_2(VAR_0, "Class %s cannot implement interface %s, extend %s or %s instead",
  FUNC_0(VAR_6->name),
  FUNC_0(VAR_5->name),
  FUNC_0(VAR_4->name),
  FUNC_0(VAR_3->name));
 return VAR_1;
}
