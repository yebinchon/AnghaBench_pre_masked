
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef TYPE_2__* xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef TYPE_4__* xmlAttrPtr ;
typedef TYPE_5__* sdlTypePtr ;
typedef int sdlType ;
typedef TYPE_6__* sdlPtr ;
typedef int buf ;
struct TYPE_28__ {int types; } ;
struct TYPE_27__ {char* name; int * elements; void* namens; int encode; } ;
struct TYPE_26__ {TYPE_1__* children; } ;
struct TYPE_25__ {int name; struct TYPE_25__* next; struct TYPE_25__* children; int doc; int properties; } ;
struct TYPE_24__ {scalar_t__ href; } ;
struct TYPE_23__ {scalar_t__ content; } ;
typedef int HashTable ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (char*) ;
 TYPE_4__* FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*,scalar_t__,int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (scalar_t__,char**,char**) ;
 int FUNC_10 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int ) ;
 TYPE_2__* FUNC_13 (int ,TYPE_3__*,int ) ;
 int FUNC_14 (int *,int ,int *,int ,int ) ;
 int FUNC_15 (int *,TYPE_5__*) ;
 int FUNC_16 (int ) ;
 char* FUNC_17 (char*,int ) ;

__attribute__((used)) static int FUNC_18(sdlPtr VAR_4, xmlAttrPtr VAR_5, xmlNodePtr VAR_6, sdlTypePtr VAR_7)
{
 xmlNodePtr VAR_8;
 xmlAttrPtr VAR_9;

 VAR_9 = FUNC_4(VAR_6->properties, "itemType");
 if (VAR_9 != ((void*)0)) {
  char *VAR_10, *VAR_11;
  xmlNsPtr VAR_12;

  FUNC_9(VAR_9->children->content, &VAR_10, &VAR_11);
  VAR_12 = FUNC_13(VAR_6->doc, VAR_6, FUNC_0(VAR_11));
  if (VAR_12 != ((void*)0)) {
   sdlTypePtr VAR_13;

   VAR_13 = FUNC_2(sizeof(sdlType));
   FUNC_7(VAR_13, 0, sizeof(sdlType));

   VAR_13->name = FUNC_3(VAR_10);
   VAR_13->namens = FUNC_3((char*)VAR_12->href);

   VAR_13->encode = FUNC_5(VAR_4, VAR_13, VAR_12->href, FUNC_0(VAR_10));

   if (VAR_7->elements == ((void*)0)) {
    VAR_7->elements = FUNC_2(sizeof(HashTable));
    FUNC_14(VAR_7->elements, 0, ((void*)0), VAR_3, 0);
   }
   FUNC_15(VAR_7->elements, VAR_13);
  }
  if (VAR_10) {FUNC_1(VAR_10);}
  if (VAR_11) {FUNC_1(VAR_11);}
 }

 VAR_8 = VAR_6->children;
 if (VAR_8 != ((void*)0) && FUNC_8(VAR_8,"annotation")) {

  VAR_8 = VAR_8->next;
 }
 if (VAR_8 != ((void*)0) && FUNC_8(VAR_8,"simpleType")) {
  sdlTypePtr VAR_14;

  if (VAR_9 != ((void*)0)) {
   FUNC_11(VAR_0, "Parsing Schema: element has both 'itemType' attribute and subtype");
  }

  VAR_14 = FUNC_2(sizeof(sdlType));
  FUNC_7(VAR_14, 0, sizeof(sdlType));

  {
   char VAR_15[VAR_1 + 1];
   char *VAR_16 = FUNC_17(VAR_15 + sizeof(VAR_15) - 1, FUNC_16(VAR_4->types));
   char *VAR_17 = FUNC_2(sizeof("anonymous")-1 + (VAR_15 + sizeof(VAR_15) - VAR_16));

   FUNC_6(VAR_17, "anonymous", sizeof("anonymous")-1);
   FUNC_6(VAR_17 + sizeof("anonymous")-1, VAR_16, VAR_15 + sizeof(VAR_15) - VAR_16);
   VAR_14->name = VAR_17;
  }
  VAR_14->namens = FUNC_3((char*)VAR_5->children->content);

  if (VAR_7->elements == ((void*)0)) {
   VAR_7->elements = FUNC_2(sizeof(HashTable));
   FUNC_14(VAR_7->elements, 0, ((void*)0), VAR_3, 0);
  }
  FUNC_15(VAR_7->elements, VAR_14);

  FUNC_10(VAR_4, VAR_5, VAR_8, VAR_14);

  VAR_8 = VAR_8->next;
 }
 if (VAR_8 != ((void*)0)) {
  FUNC_12(VAR_0, "Parsing Schema: unexpected <%s> in list", VAR_8->name);
 }
 return VAR_2;
}
