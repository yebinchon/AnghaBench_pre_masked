
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_1__* sdlAttributePtr ;
struct TYPE_5__ {struct TYPE_5__* extraAttributes; struct TYPE_5__* ref; struct TYPE_5__* namens; struct TYPE_5__* name; struct TYPE_5__* fixed; struct TYPE_5__* def; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(zval *VAR_0)
{
 sdlAttributePtr VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->def) {
  FUNC_1(VAR_1->def);
 }
 if (VAR_1->fixed) {
  FUNC_1(VAR_1->fixed);
 }
 if (VAR_1->name) {
  FUNC_1(VAR_1->name);
 }
 if (VAR_1->namens) {
  FUNC_1(VAR_1->namens);
 }
 if (VAR_1->ref) {
  FUNC_1(VAR_1->ref);
 }
 if (VAR_1->extraAttributes) {
  FUNC_2(VAR_1->extraAttributes);
  FUNC_1(VAR_1->extraAttributes);
 }
 FUNC_1(VAR_1);
}
