
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;


typedef TYPE_3__* xmlNsPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef TYPE_5__* xmlAttrPtr ;
struct TYPE_45__ {int s; int member_0; } ;
typedef TYPE_6__ smart_str ;
typedef TYPE_7__* sdlTypePtr ;
typedef int sdlType ;
typedef TYPE_8__* sdlPtr ;
typedef TYPE_7__* sdlContentModelPtr ;
typedef int sdlContentModel ;
struct TYPE_47__ {int * elements; } ;
struct TYPE_40__ {int * content; TYPE_7__* element; } ;
struct TYPE_46__ {char* namens; char* name; int nillable; scalar_t__ form; int encode; void* def; void* fixed; TYPE_1__ u; int kind; int * elements; int ref; } ;
struct TYPE_44__ {TYPE_2__* children; } ;
struct TYPE_43__ {struct TYPE_43__* next; int name; struct TYPE_43__* children; int doc; struct TYPE_43__* parent; TYPE_5__* properties; } ;
struct TYPE_42__ {scalar_t__ href; } ;
struct TYPE_41__ {scalar_t__ content; } ;
typedef int HashTable ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 TYPE_5__* FUNC_7 (TYPE_5__*,char*) ;
 int FUNC_8 (TYPE_8__*,TYPE_7__*,scalar_t__,int ) ;
 int FUNC_9 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_10 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_11 (TYPE_4__*,char*,int ) ;
 int FUNC_12 (scalar_t__,char**,char**) ;
 int FUNC_13 (TYPE_8__*,TYPE_5__*,TYPE_4__*,TYPE_7__*) ;
 int FUNC_14 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_15 (TYPE_8__*,TYPE_5__*,TYPE_4__*,TYPE_7__*) ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (TYPE_6__*,char) ;
 int FUNC_18 (TYPE_6__*,char*) ;
 int FUNC_19 (TYPE_6__*) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (int ,char*,int ) ;
 int FUNC_22 (char*,char*) ;
 scalar_t__ FUNC_23 (char*,char*,int) ;
 TYPE_3__* FUNC_24 (int ,TYPE_4__*,int ) ;
 int * FUNC_25 (int *,int ,TYPE_7__*) ;
 int FUNC_26 (int *,int ,int *,int ,int ) ;
 int FUNC_27 (int *,TYPE_7__*) ;

__attribute__((used)) static int FUNC_28(sdlPtr VAR_9, xmlAttrPtr VAR_10, xmlNodePtr VAR_11, sdlTypePtr VAR_12, sdlContentModelPtr VAR_13)
{
 xmlNodePtr VAR_14;
 xmlAttrPtr VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20 = ((void*)0);

 VAR_15 = VAR_11->properties;
 VAR_17 = FUNC_7(VAR_15, "targetNamespace");
 if (VAR_17 == ((void*)0)) {
  VAR_17 = VAR_10;
 }

 VAR_18 = FUNC_7(VAR_15, "name");
 if (VAR_18 == ((void*)0)) {
  VAR_18 = VAR_20 = FUNC_7(VAR_15, "ref");
 }

 if (VAR_18) {
  HashTable *VAR_21;
  sdlTypePtr VAR_22;
  smart_str VAR_23 = {0};

  VAR_22 = FUNC_4(sizeof(sdlType));
  FUNC_9(VAR_22, 0, sizeof(sdlType));

  if (VAR_20) {
   smart_str VAR_24 = {0};
   char *VAR_25, *VAR_26;
   xmlNsPtr VAR_27;

   FUNC_12(VAR_20->children->content, &VAR_25, &VAR_26);
   VAR_27 = FUNC_24(VAR_11->doc, VAR_11, FUNC_0(VAR_26));
   if (VAR_27 != ((void*)0)) {
    FUNC_18(&VAR_24, (char*)VAR_27->href);
    VAR_22->namens = FUNC_5((char*)VAR_27->href);
   } else {
    xmlAttrPtr VAR_28 = FUNC_7(VAR_15, "targetNamespace");
    if (VAR_28 == ((void*)0)) {
     VAR_28 = VAR_10;
    }
    if (VAR_28) {
     FUNC_18(&VAR_24, (char*)VAR_28->children->content);
    }
   }
   FUNC_17(&VAR_24, ':');
   FUNC_18(&VAR_24, VAR_25);
   VAR_22->name = FUNC_5(VAR_25);
   FUNC_16(&VAR_24);
   if (VAR_25) {FUNC_3(VAR_25);}
   if (VAR_26) {FUNC_3(VAR_26);}
   VAR_22->ref = FUNC_6(FUNC_2(VAR_24.s), FUNC_1(VAR_24.s));
   FUNC_19(&VAR_24);
  } else {
   VAR_22->name = FUNC_5((char*)VAR_18->children->content);
   VAR_22->namens = FUNC_5((char*)VAR_17->children->content);
  }

  VAR_22->nillable = VAR_1;

  if (VAR_12 == ((void*)0)) {
   if (VAR_9->elements == ((void*)0)) {
    VAR_9->elements = FUNC_4(sizeof(HashTable));
    FUNC_26(VAR_9->elements, 0, ((void*)0), VAR_8, 0);
   }
   VAR_21 = VAR_9->elements;
   FUNC_18(&VAR_23, VAR_22->namens);
   FUNC_17(&VAR_23, ':');
   FUNC_18(&VAR_23, VAR_22->name);
  } else {
   if (VAR_12->elements == ((void*)0)) {
    VAR_12->elements = FUNC_4(sizeof(HashTable));
    FUNC_26(VAR_12->elements, 0, ((void*)0), VAR_8, 0);
   }
   VAR_21 = VAR_12->elements;
   FUNC_18(&VAR_23, VAR_22->name);
  }

  FUNC_16(&VAR_23);
  if (FUNC_25(VAR_21, VAR_23.s, VAR_22) == ((void*)0)) {
   if (VAR_12 == ((void*)0)) {
    FUNC_21(VAR_0, "Parsing Schema: element '%s' already defined", FUNC_2(VAR_23.s));
   } else {
    FUNC_27(VAR_21, VAR_22);
   }
  }
  FUNC_19(&VAR_23);

  if (VAR_13 != ((void*)0)) {
   sdlContentModelPtr VAR_29 = FUNC_4(sizeof(sdlContentModel));

   VAR_29->kind = VAR_4;
   VAR_29->u.element = VAR_22;

   FUNC_14(VAR_11, VAR_29);


   FUNC_27(VAR_13->u.content, VAR_29);
  }
  VAR_12 = VAR_22;
 } else {
  FUNC_20(VAR_0, "Parsing Schema: element has no 'name' nor 'ref' attributes");
 }


 VAR_15 = VAR_11->properties;
 VAR_16 = FUNC_7(VAR_15, "nillable");
 if (VAR_16) {
  if (VAR_20 != ((void*)0)) {
   FUNC_20(VAR_0, "Parsing Schema: element has both 'ref' and 'nillable' attributes");
  }
  if (!FUNC_22((char*)VAR_16->children->content, "true") ||
   !FUNC_22((char*)VAR_16->children->content, "1")) {
   VAR_12->nillable = VAR_3;
  } else {
   VAR_12->nillable = VAR_1;
  }
 } else {
  VAR_12->nillable = VAR_1;
 }

 VAR_16 = FUNC_7(VAR_15, "fixed");
 if (VAR_16) {
  if (VAR_20 != ((void*)0)) {
   FUNC_20(VAR_0, "Parsing Schema: element has both 'ref' and 'fixed' attributes");
  }
  VAR_12->fixed = FUNC_5((char*)VAR_16->children->content);
 }

 VAR_16 = FUNC_7(VAR_15, "default");
 if (VAR_16) {
  if (VAR_20 != ((void*)0)) {
   FUNC_20(VAR_0, "Parsing Schema: element has both 'ref' and 'fixed' attributes");
  } else if (VAR_20 != ((void*)0)) {
   FUNC_20(VAR_0, "Parsing Schema: element has both 'default' and 'fixed' attributes");
  }
  VAR_12->def = FUNC_5((char*)VAR_16->children->content);
 }


 VAR_16 = FUNC_7(VAR_15, "form");
 if (VAR_16) {
  if (FUNC_23((char*)VAR_16->children->content, "qualified", sizeof("qualified")) == 0) {
    VAR_12->form = VAR_6;
  } else if (FUNC_23((char*)VAR_16->children->content, "unqualified", sizeof("unqualified")) == 0) {
    VAR_12->form = VAR_7;
  } else {
    VAR_12->form = VAR_5;
  }
 } else {
   VAR_12->form = VAR_5;
 }
 if (VAR_12->form == VAR_5) {
   xmlNodePtr VAR_30 = VAR_11->parent;
   while (VAR_30) {
   if (FUNC_11(VAR_30, "schema", VAR_2)) {
    xmlAttrPtr VAR_31;
    VAR_31 = FUNC_7(VAR_30->properties, "elementFormDefault");
    if(VAR_31 == ((void*)0) || FUNC_23((char*)VAR_31->children->content, "qualified", sizeof("qualified"))) {
     VAR_12->form = VAR_7;
    } else {
     VAR_12->form = VAR_6;
    }
    break;
   }
   VAR_30 = VAR_30->parent;
   }
  if (VAR_30 == ((void*)0)) {
   VAR_12->form = VAR_7;
  }
 }


 VAR_19 = FUNC_7(VAR_15, "type");
 if (VAR_19) {
  char *VAR_32, *VAR_33;
  xmlNsPtr VAR_34;

  if (VAR_20 != ((void*)0)) {
   FUNC_20(VAR_0, "Parsing Schema: element has both 'ref' and 'type' attributes");
  }
  FUNC_12(VAR_19->children->content, &VAR_32, &VAR_33);
  VAR_34 = FUNC_24(VAR_11->doc, VAR_11, FUNC_0(VAR_33));
  if (VAR_34 != ((void*)0)) {
   VAR_12->encode = FUNC_8(VAR_9, VAR_12, VAR_34->href, FUNC_0(VAR_32));
  }
  if (VAR_33) {FUNC_3(VAR_33);}
  if (VAR_32) {FUNC_3(VAR_32);}
 }

 VAR_14 = VAR_11->children;
 if (VAR_14 != ((void*)0) && FUNC_10(VAR_14, "annotation")) {

  VAR_14 = VAR_14->next;
 }
 if (VAR_14 != ((void*)0)) {
  if (FUNC_10(VAR_14,"simpleType")) {
   if (VAR_20 != ((void*)0)) {
    FUNC_20(VAR_0, "Parsing Schema: element has both 'ref' attribute and subtype");
   } else if (VAR_19 != ((void*)0)) {
    FUNC_20(VAR_0, "Parsing Schema: element has both 'type' attribute and subtype");
   }
   FUNC_15(VAR_9, VAR_10, VAR_14, VAR_12);
   VAR_14 = VAR_14->next;
  } else if (FUNC_10(VAR_14,"complexType")) {
   if (VAR_20 != ((void*)0)) {
    FUNC_20(VAR_0, "Parsing Schema: element has both 'ref' attribute and subtype");
   } else if (VAR_19 != ((void*)0)) {
    FUNC_20(VAR_0, "Parsing Schema: element has both 'type' attribute and subtype");
   }
   FUNC_13(VAR_9, VAR_10, VAR_14, VAR_12);
   VAR_14 = VAR_14->next;
  }
 }
 while (VAR_14 != ((void*)0)) {
  if (FUNC_10(VAR_14,"unique")) {

  } else if (FUNC_10(VAR_14,"key")) {

  } else if (FUNC_10(VAR_14,"keyref")) {

  } else {
   FUNC_21(VAR_0, "Parsing Schema: unexpected <%s> in element", VAR_14->name);
  }
  VAR_14 = VAR_14->next;
 }

 return VAR_3;
}
