
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_26__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef TYPE_2__* xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef TYPE_4__* xmlAttrPtr ;
typedef TYPE_5__* sdlTypePtr ;
typedef int sdlRestrictions ;
typedef TYPE_6__* sdlRestrictionCharPtr ;
typedef int sdlPtr ;
struct TYPE_36__ {int value; } ;
struct TYPE_35__ {TYPE_26__* restrictions; int encode; } ;
struct TYPE_34__ {TYPE_1__* children; } ;
struct TYPE_33__ {int name; struct TYPE_33__* next; struct TYPE_33__* children; int doc; int properties; } ;
struct TYPE_32__ {int href; } ;
struct TYPE_31__ {int * enumeration; TYPE_6__* pattern; TYPE_6__* whiteSpace; int maxLength; int minLength; int length; int fractionDigits; int totalDigits; int maxInclusive; int maxExclusive; int minInclusive; int minExclusive; } ;
struct TYPE_30__ {int content; } ;
typedef int HashTable ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int) ;
 TYPE_4__* FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,TYPE_5__*,int ,int ) ;
 int FUNC_6 (TYPE_26__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (int ,char**,char**) ;
 int FUNC_9 (int ,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_10 (int ,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_11 (TYPE_3__*,TYPE_6__**) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (int ,TYPE_4__*,TYPE_3__*,TYPE_5__*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int ) ;
 TYPE_2__* FUNC_17 (int ,TYPE_3__*,int ) ;
 int FUNC_18 (int *,int ,int *,int ,int ) ;
 int * FUNC_19 (int *,int ,int ,TYPE_6__*) ;

__attribute__((used)) static int FUNC_20(sdlPtr VAR_3, xmlAttrPtr VAR_4, xmlNodePtr VAR_5, sdlTypePtr VAR_6, int VAR_7)
{
 xmlNodePtr VAR_8;
 xmlAttrPtr VAR_9;

 VAR_9 = FUNC_4(VAR_5->properties, "base");
 if (VAR_9 != ((void*)0)) {
  char *VAR_10, *VAR_11;
  xmlNsPtr VAR_12;

  FUNC_8(VAR_9->children->content, &VAR_10, &VAR_11);
  VAR_12 = FUNC_17(VAR_5->doc, VAR_5, FUNC_0(VAR_11));
  if (VAR_12 != ((void*)0)) {
   VAR_6->encode = FUNC_5(VAR_3, VAR_6, VAR_12->href, FUNC_0(VAR_10));
  }
  if (VAR_10) {FUNC_2(VAR_10);}
  if (VAR_11) {FUNC_2(VAR_11);}
 } else if (!VAR_7) {
  FUNC_14(VAR_0, "Parsing Schema: restriction has no 'base' attribute");
 }

 if (VAR_6->restrictions == ((void*)0)) {
  VAR_6->restrictions = FUNC_3(sizeof(sdlRestrictions));
  FUNC_6(VAR_6->restrictions, 0, sizeof(sdlRestrictions));
 }

 VAR_8 = VAR_5->children;
 if (VAR_8 != ((void*)0) && FUNC_7(VAR_8, "annotation")) {

  VAR_8 = VAR_8->next;
 }
 if (VAR_8 != ((void*)0) && FUNC_7(VAR_8, "simpleType")) {
  FUNC_13(VAR_3, VAR_4, VAR_8, VAR_6);
  VAR_8 = VAR_8->next;
 }
 while (VAR_8 != ((void*)0)) {
  if (FUNC_7(VAR_8, "minExclusive")) {
   FUNC_12(VAR_8, &VAR_6->restrictions->minExclusive);
  } else if (FUNC_7(VAR_8, "minInclusive")) {
   FUNC_12(VAR_8, &VAR_6->restrictions->minInclusive);
  } else if (FUNC_7(VAR_8, "maxExclusive")) {
   FUNC_12(VAR_8, &VAR_6->restrictions->maxExclusive);
  } else if (FUNC_7(VAR_8, "maxInclusive")) {
   FUNC_12(VAR_8, &VAR_6->restrictions->maxInclusive);
  } else if (FUNC_7(VAR_8, "totalDigits")) {
   FUNC_12(VAR_8, &VAR_6->restrictions->totalDigits);
  } else if (FUNC_7(VAR_8, "fractionDigits")) {
   FUNC_12(VAR_8, &VAR_6->restrictions->fractionDigits);
  } else if (FUNC_7(VAR_8, "length")) {
   FUNC_12(VAR_8, &VAR_6->restrictions->length);
  } else if (FUNC_7(VAR_8, "minLength")) {
   FUNC_12(VAR_8, &VAR_6->restrictions->minLength);
  } else if (FUNC_7(VAR_8, "maxLength")) {
   FUNC_12(VAR_8, &VAR_6->restrictions->maxLength);
  } else if (FUNC_7(VAR_8, "whiteSpace")) {
   FUNC_11(VAR_8, &VAR_6->restrictions->whiteSpace);
  } else if (FUNC_7(VAR_8, "pattern")) {
   FUNC_11(VAR_8, &VAR_6->restrictions->pattern);
  } else if (FUNC_7(VAR_8, "enumeration")) {
   sdlRestrictionCharPtr VAR_13 = ((void*)0);

   FUNC_11(VAR_8, &VAR_13);
   if (VAR_6->restrictions->enumeration == ((void*)0)) {
    VAR_6->restrictions->enumeration = FUNC_3(sizeof(HashTable));
    FUNC_18(VAR_6->restrictions->enumeration, 0, ((void*)0), VAR_2, 0);
   }
   if (FUNC_19(VAR_6->restrictions->enumeration, VAR_13->value, FUNC_16(VAR_13->value), VAR_13) == ((void*)0)) {
    FUNC_1(VAR_13);
   }
  } else {
   break;
  }
  VAR_8 = VAR_8->next;
 }
 if (!VAR_7) {
  while (VAR_8 != ((void*)0)) {
   if (FUNC_7(VAR_8,"attribute")) {
    FUNC_9(VAR_3, VAR_4, VAR_8, VAR_6, ((void*)0));
   } else if (FUNC_7(VAR_8,"attributeGroup")) {
    FUNC_10(VAR_3, VAR_4, VAR_8, VAR_6, ((void*)0));
   } else if (FUNC_7(VAR_8,"anyAttribute")) {

    VAR_8 = VAR_8->next;
    break;
   } else {
    FUNC_15(VAR_0, "Parsing Schema: unexpected <%s> in restriction", VAR_8->name);
   }
   VAR_8 = VAR_8->next;
  }
 }
 if (VAR_8 != ((void*)0)) {
  FUNC_15(VAR_0, "Parsing Schema: unexpected <%s> in restriction", VAR_8->name);
 }

 return VAR_1;
}
