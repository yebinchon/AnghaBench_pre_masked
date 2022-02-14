
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_1__* sdlTypePtr ;
struct TYPE_5__ {struct TYPE_5__* restrictions; struct TYPE_5__* enumeration; int pattern; int whiteSpace; int maxLength; int minLength; int length; int fractionDigits; int totalDigits; int maxInclusive; int maxExclusive; int minInclusive; int minExclusive; scalar_t__ model; struct TYPE_5__* attributes; struct TYPE_5__* elements; struct TYPE_5__* fixed; struct TYPE_5__* def; struct TYPE_5__* namens; struct TYPE_5__* name; } ;


 int FUNC_0 (int *,scalar_t__) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(zval *VAR_0)
{
 sdlTypePtr VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->name) {
  FUNC_5(VAR_1->name);
 }
 if (VAR_1->namens) {
  FUNC_5(VAR_1->namens);
 }
 if (VAR_1->def) {
  FUNC_5(VAR_1->def);
 }
 if (VAR_1->fixed) {
  FUNC_5(VAR_1->fixed);
 }
 if (VAR_1->elements) {
  FUNC_6(VAR_1->elements);
  FUNC_5(VAR_1->elements);
 }
 if (VAR_1->attributes) {
  FUNC_6(VAR_1->attributes);
  FUNC_5(VAR_1->attributes);
 }
 if (VAR_1->model) {
  zval VAR_2;
  FUNC_0(&VAR_2, VAR_1->model);
  FUNC_2(&VAR_2);
 }
 if (VAR_1->restrictions) {
  FUNC_4(VAR_1->restrictions->minExclusive);
  FUNC_4(VAR_1->restrictions->minInclusive);
  FUNC_4(VAR_1->restrictions->maxExclusive);
  FUNC_4(VAR_1->restrictions->maxInclusive);
  FUNC_4(VAR_1->restrictions->totalDigits);
  FUNC_4(VAR_1->restrictions->fractionDigits);
  FUNC_4(VAR_1->restrictions->length);
  FUNC_4(VAR_1->restrictions->minLength);
  FUNC_4(VAR_1->restrictions->maxLength);
  FUNC_3(VAR_1->restrictions->whiteSpace);
  FUNC_3(VAR_1->restrictions->pattern);
  if (VAR_1->restrictions->enumeration) {
   FUNC_6(VAR_1->restrictions->enumeration);
   FUNC_5(VAR_1->restrictions->enumeration);
  }
  FUNC_5(VAR_1->restrictions);
 }
 FUNC_5(VAR_1);
}
