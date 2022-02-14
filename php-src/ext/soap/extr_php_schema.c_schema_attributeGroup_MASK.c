
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef TYPE_2__* xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef TYPE_4__* xmlAttrPtr ;
struct TYPE_31__ {int s; int member_0; } ;
typedef TYPE_5__ smart_str ;
typedef TYPE_6__* sdlTypePtr ;
typedef int sdlType ;
typedef int sdlPtr ;
struct TYPE_33__ {int attributeGroups; } ;
typedef TYPE_7__ sdlCtx ;
typedef TYPE_6__* sdlAttributePtr ;
typedef int sdlAttribute ;
struct TYPE_32__ {char* name; char* namens; int * attributes; int ref; } ;
struct TYPE_30__ {TYPE_1__* children; } ;
struct TYPE_29__ {int name; struct TYPE_29__* next; struct TYPE_29__* children; int doc; int properties; } ;
struct TYPE_28__ {scalar_t__ href; } ;
struct TYPE_27__ {scalar_t__ content; } ;
typedef int HashTable ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 TYPE_4__* FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (scalar_t__,char**,char**) ;
 int FUNC_11 (int ,TYPE_4__*,TYPE_3__*,TYPE_6__*,int *) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,char) ;
 int FUNC_14 (TYPE_5__*,char*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,char*,int ) ;
 TYPE_2__* FUNC_18 (int ,TYPE_3__*,int ) ;
 int * FUNC_19 (int ,int ,TYPE_6__*) ;
 int FUNC_20 (int *,int ,int *,int ,int ) ;
 int FUNC_21 (int *,TYPE_6__*) ;

__attribute__((used)) static int FUNC_22(sdlPtr VAR_3, xmlAttrPtr VAR_4, xmlNodePtr VAR_5, sdlTypePtr VAR_6, sdlCtx *VAR_7)
{
 xmlNodePtr VAR_8;
 xmlAttrPtr VAR_9, VAR_10 = ((void*)0);


 VAR_9 = FUNC_7(VAR_5->properties, "name");
 if (VAR_9 == ((void*)0)) {
  VAR_9 = VAR_10 = FUNC_7(VAR_5->properties, "ref");
 }
 if (VAR_9) {
  if (VAR_6 == ((void*)0)) {
   xmlAttrPtr VAR_11;
   sdlTypePtr VAR_12;
   smart_str VAR_13 = {0};

   VAR_11 = FUNC_7(VAR_5->properties, "targetNamespace");
   if (VAR_11 == ((void*)0)) {
    VAR_11 = VAR_4;
   }
   VAR_12 = FUNC_4(sizeof(sdlType));
   FUNC_8(VAR_12, 0, sizeof(sdlType));
   VAR_12->name = FUNC_5((char*)VAR_9->children->content);
   VAR_12->namens = FUNC_5((char*)VAR_11->children->content);

   FUNC_14(&VAR_13, VAR_12->namens);
   FUNC_13(&VAR_13, ':');
   FUNC_14(&VAR_13, VAR_12->name);
   FUNC_12(&VAR_13);

   if (FUNC_19(VAR_7->attributeGroups, VAR_13.s, VAR_12) == ((void*)0)) {
    FUNC_17(VAR_0, "Parsing Schema: attributeGroup '%s' already defined", FUNC_2(VAR_13.s));
   }
   VAR_6 = VAR_12;
   FUNC_15(&VAR_13);
  } else if (VAR_10) {
   sdlAttributePtr VAR_14;
   char *VAR_15, *VAR_16;
   smart_str VAR_17 = {0};
   xmlNsPtr VAR_18;

   if (VAR_6->attributes == ((void*)0)) {
    VAR_6->attributes = FUNC_4(sizeof(HashTable));
    FUNC_20(VAR_6->attributes, 0, ((void*)0), VAR_2, 0);
   }
   VAR_14 = FUNC_4(sizeof(sdlAttribute));
   FUNC_8(VAR_14, 0, sizeof(sdlAttribute));

   FUNC_10(VAR_10->children->content, &VAR_15, &VAR_16);
   VAR_18 = FUNC_18(VAR_5->doc, VAR_5, FUNC_0(VAR_16));
   if (VAR_18 != ((void*)0)) {
    FUNC_14(&VAR_17, (char*)VAR_18->href);
   }
   FUNC_13(&VAR_17, ':');
   FUNC_14(&VAR_17, VAR_15);
   FUNC_12(&VAR_17);
   VAR_14->ref = FUNC_6(FUNC_2(VAR_17.s), FUNC_1(VAR_17.s));
   if (VAR_15) {FUNC_3(VAR_15);}
   if (VAR_16) {FUNC_3(VAR_16);}
   FUNC_15(&VAR_17);

   FUNC_21(VAR_6->attributes, VAR_14);
   VAR_6 = ((void*)0);
  }
 } else{
  FUNC_16(VAR_0, "Parsing Schema: attributeGroup has no 'name' nor 'ref' attributes");
 }

 VAR_8 = VAR_5->children;
 if (VAR_8 != ((void*)0) && FUNC_9(VAR_8, "annotation")) {

  VAR_8 = VAR_8->next;
 }
 while (VAR_8 != ((void*)0)) {
  if (FUNC_9(VAR_8,"attribute")) {
   if (VAR_10 != ((void*)0)) {
    FUNC_16(VAR_0, "Parsing Schema: attributeGroup has both 'ref' attribute and subattribute");
   }
   FUNC_11(VAR_3, VAR_4, VAR_8, VAR_6, ((void*)0));
  } else if (FUNC_9(VAR_8,"attributeGroup")) {
   if (VAR_10 != ((void*)0)) {
    FUNC_16(VAR_0, "Parsing Schema: attributeGroup has both 'ref' attribute and subattribute");
   }
   FUNC_22(VAR_3, VAR_4, VAR_8, VAR_6, ((void*)0));
  } else if (FUNC_9(VAR_8,"anyAttribute")) {
   if (VAR_10 != ((void*)0)) {
    FUNC_16(VAR_0, "Parsing Schema: attributeGroup has both 'ref' attribute and subattribute");
   }

   VAR_8 = VAR_8->next;
   break;
  } else {
   FUNC_17(VAR_0, "Parsing Schema: unexpected <%s> in attributeGroup", VAR_8->name);
  }
  VAR_8 = VAR_8->next;
 }
 if (VAR_8 != ((void*)0)) {
  FUNC_17(VAR_0, "Parsing Schema: unexpected <%s> in attributeGroup", VAR_8->name);
 }
 return VAR_1;
}
