
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_1__* sdlTypePtr ;
struct TYPE_5__ {struct TYPE_5__* restrictions; struct TYPE_5__* enumeration; int pattern; int whiteSpace; int maxLength; int minLength; int length; int fractionDigits; int totalDigits; int maxInclusive; int maxExclusive; int minInclusive; int minExclusive; scalar_t__ model; struct TYPE_5__* attributes; struct TYPE_5__* elements; struct TYPE_5__* fixed; struct TYPE_5__* def; struct TYPE_5__* namens; struct TYPE_5__* name; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(zval *VAR_0)
{
 sdlTypePtr VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->name) {
  FUNC_4(VAR_1->name);
 }
 if (VAR_1->namens) {
  FUNC_4(VAR_1->namens);
 }
 if (VAR_1->def) {
  FUNC_4(VAR_1->def);
 }
 if (VAR_1->fixed) {
  FUNC_4(VAR_1->fixed);
 }
 if (VAR_1->elements) {
  FUNC_5(VAR_1->elements);
  FUNC_4(VAR_1->elements);
 }
 if (VAR_1->attributes) {
  FUNC_5(VAR_1->attributes);
  FUNC_4(VAR_1->attributes);
 }
 if (VAR_1->model) {
  FUNC_1(VAR_1->model);
 }
 if (VAR_1->restrictions) {
  FUNC_3(VAR_1->restrictions->minExclusive);
  FUNC_3(VAR_1->restrictions->minInclusive);
  FUNC_3(VAR_1->restrictions->maxExclusive);
  FUNC_3(VAR_1->restrictions->maxInclusive);
  FUNC_3(VAR_1->restrictions->totalDigits);
  FUNC_3(VAR_1->restrictions->fractionDigits);
  FUNC_3(VAR_1->restrictions->length);
  FUNC_3(VAR_1->restrictions->minLength);
  FUNC_3(VAR_1->restrictions->maxLength);
  FUNC_2(VAR_1->restrictions->whiteSpace);
  FUNC_2(VAR_1->restrictions->pattern);
  if (VAR_1->restrictions->enumeration) {
   FUNC_5(VAR_1->restrictions->enumeration);
   FUNC_4(VAR_1->restrictions->enumeration);
  }
  FUNC_4(VAR_1->restrictions);
 }
 FUNC_4(VAR_1);
}
