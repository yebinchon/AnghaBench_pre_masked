
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_56__ TYPE_6__ ;
typedef struct TYPE_55__ TYPE_5__ ;
typedef struct TYPE_54__ TYPE_4__ ;
typedef struct TYPE_53__ TYPE_3__ ;
typedef struct TYPE_52__ TYPE_2__ ;
typedef struct TYPE_51__ TYPE_1__ ;


typedef TYPE_3__* xmlNodePtr ;
typedef TYPE_4__* xmlAttrPtr ;
typedef TYPE_5__* sdlTypePtr ;
typedef int sdlType ;
typedef TYPE_6__* sdlPtr ;
typedef int encode ;
struct TYPE_56__ {int * types; int * encoders; } ;
struct TYPE_51__ {TYPE_5__* sdl_type; void* type_str; void* ns; } ;
struct TYPE_55__ {char* name; char* namens; void* kind; struct TYPE_55__* encode; int to_zval; int to_xml; TYPE_1__ details; } ;
struct TYPE_54__ {TYPE_2__* children; } ;
struct TYPE_53__ {int name; struct TYPE_53__* next; struct TYPE_53__* children; TYPE_4__* properties; } ;
struct TYPE_52__ {scalar_t__ content; } ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (TYPE_6__*,TYPE_5__*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (char*) ;
 TYPE_4__* FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_10 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_12 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_13 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int *,int ,int *,int ,int ) ;
 TYPE_5__* FUNC_17 (int *,TYPE_5__*) ;

__attribute__((used)) static int FUNC_18(sdlPtr VAR_7, xmlAttrPtr VAR_8, xmlNodePtr VAR_9, sdlTypePtr VAR_10)
{
 xmlNodePtr VAR_11;
 xmlAttrPtr VAR_12, VAR_13, VAR_14;

 VAR_12 = VAR_9->properties;
 VAR_14 = FUNC_3(VAR_12, "targetNamespace");
 if (VAR_14 == ((void*)0)) {
  VAR_14 = VAR_8;
 }

 VAR_13 = FUNC_3(VAR_12, "name");
 if (VAR_10 != ((void*)0)) {

  sdlTypePtr VAR_15, VAR_16;

  VAR_15 = FUNC_1(sizeof(sdlType));
  FUNC_4(VAR_15, 0, sizeof(sdlType));
  VAR_15->kind = VAR_3;
  if (VAR_13 != ((void*)0)) {
   VAR_15->name = FUNC_2((char*)VAR_13->children->content);
   VAR_15->namens = FUNC_2((char*)VAR_14->children->content);
  } else {
   VAR_15->name = FUNC_2(VAR_10->name);
   VAR_15->namens = FUNC_2(VAR_10->namens);
  }

  VAR_16 = FUNC_17(VAR_7->types, VAR_15);

  if (VAR_7->encoders == ((void*)0)) {
   VAR_7->encoders = FUNC_1(sizeof(HashTable));
   FUNC_16(VAR_7->encoders, 0, ((void*)0), VAR_4, 0);
  }
  VAR_10->encode = FUNC_1(sizeof(encode));
  FUNC_4(VAR_10->encode, 0, sizeof(encode));
  VAR_10->encode->details.ns = FUNC_2(VAR_15->namens);
  VAR_10->encode->details.type_str = FUNC_2(VAR_15->name);
  VAR_10->encode->details.sdl_type = VAR_16;
  VAR_10->encode->to_xml = VAR_5;
  VAR_10->encode->to_zval = VAR_6;
  FUNC_17(VAR_7->encoders, VAR_10->encode);

  VAR_10 = VAR_16;

 } else if (VAR_13) {
  sdlTypePtr VAR_17, VAR_18;

  VAR_17 = FUNC_1(sizeof(sdlType));
  FUNC_4(VAR_17, 0, sizeof(sdlType));
  VAR_17->kind = VAR_3;
  VAR_17->name = FUNC_2((char*)VAR_13->children->content);
  VAR_17->namens = FUNC_2((char*)VAR_14->children->content);

  VAR_18 = FUNC_17(VAR_7->types, VAR_17);

  VAR_10 = VAR_18;
  FUNC_0(VAR_7, VAR_10, VAR_14->children->content, VAR_13->children->content);
 } else {
  FUNC_14(VAR_0, "Parsing Schema: complexType has no 'name' attribute");
  return VAR_1;
 }

 VAR_11 = VAR_9->children;
 if (VAR_11 != ((void*)0) && FUNC_5(VAR_11, "annotation")) {

  VAR_11 = VAR_11->next;
 }
 if (VAR_11 != ((void*)0)) {
  if (FUNC_5(VAR_11,"simpleContent")) {
   FUNC_13(VAR_7, VAR_8, VAR_11, VAR_10);
   VAR_11 = VAR_11->next;
  } else if (FUNC_5(VAR_11,"complexContent")) {
   FUNC_10(VAR_7, VAR_8, VAR_11, VAR_10);
   VAR_11 = VAR_11->next;
  } else {
   if (FUNC_5(VAR_11,"group")) {
    FUNC_11(VAR_7, VAR_8, VAR_11, VAR_10, ((void*)0));
    VAR_11 = VAR_11->next;
   } else if (FUNC_5(VAR_11,"all")) {
    FUNC_6(VAR_7, VAR_8, VAR_11, VAR_10, ((void*)0));
    VAR_11 = VAR_11->next;
   } else if (FUNC_5(VAR_11,"choice")) {
    FUNC_9(VAR_7, VAR_8, VAR_11, VAR_10, ((void*)0));
    VAR_11 = VAR_11->next;
   } else if (FUNC_5(VAR_11,"sequence")) {
    FUNC_12(VAR_7, VAR_8, VAR_11, VAR_10, ((void*)0));
    VAR_11 = VAR_11->next;
   }
   while (VAR_11 != ((void*)0)) {
    if (FUNC_5(VAR_11,"attribute")) {
     FUNC_7(VAR_7, VAR_8, VAR_11, VAR_10, ((void*)0));
    } else if (FUNC_5(VAR_11,"attributeGroup")) {
     FUNC_8(VAR_7, VAR_8, VAR_11, VAR_10, ((void*)0));
    } else if (FUNC_5(VAR_11,"anyAttribute")) {

     VAR_11 = VAR_11->next;
     break;
    } else {
     FUNC_15(VAR_0, "Parsing Schema: unexpected <%s> in complexType", VAR_11->name);
    }
    VAR_11 = VAR_11->next;
   }
  }
 }
 if (VAR_11 != ((void*)0)) {
  FUNC_15(VAR_0, "Parsing Schema: unexpected <%s> in complexType", VAR_11->name);
 }
 return VAR_2;
}
