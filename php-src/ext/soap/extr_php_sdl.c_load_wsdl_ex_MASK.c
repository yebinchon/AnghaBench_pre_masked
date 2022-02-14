
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlErrorPtr ;
typedef TYPE_2__* xmlDocPtr ;
typedef int xmlChar ;
typedef TYPE_5__* xmlAttrPtr ;
typedef TYPE_6__* sdlPtr ;
struct TYPE_29__ {int services; int bindings; int portTypes; int messages; int docs; TYPE_6__* sdl; } ;
typedef TYPE_7__ sdlCtx ;
struct TYPE_30__ {int * URL; } ;
struct TYPE_28__ {int target_ns; } ;
struct TYPE_27__ {TYPE_1__* children; } ;
struct TYPE_26__ {int message; } ;
struct TYPE_25__ {char* name; struct TYPE_25__* next; int properties; TYPE_9__* doc; struct TYPE_25__* children; } ;
struct TYPE_24__ {char* content; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_5__* FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_7__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char*,int ) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (int ,char*,char*,int ) ;
 TYPE_2__* FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int * FUNC_14 (char*,int *) ;
 int FUNC_15 (int *) ;
 TYPE_3__* FUNC_16 () ;
 int * FUNC_17 (TYPE_9__*,TYPE_2__*) ;
 int FUNC_18 (char*) ;
 int * FUNC_19 (int *,char*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_20 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_21(zval *VAR_3, char *VAR_4, sdlCtx *VAR_5, int VAR_6)
{
 sdlPtr VAR_7 = VAR_5->sdl;
 xmlDocPtr VAR_8;
 xmlNodePtr VAR_9, VAR_10, VAR_11;
 xmlAttrPtr VAR_12;

 if (FUNC_20(&VAR_5->docs, VAR_4, FUNC_13(VAR_4))) {
  return;
 }

 FUNC_8(VAR_5, VAR_4);
 VAR_8 = FUNC_12(VAR_4);
 FUNC_7(VAR_5);

 if (!VAR_8) {
  xmlErrorPtr VAR_13 = FUNC_16();

  if (VAR_13) {
   FUNC_11(VAR_0, "Parsing WSDL: Couldn't load from '%s' : %s", VAR_4, VAR_13->message);
  } else {
   FUNC_10(VAR_0, "Parsing WSDL: Couldn't load from '%s'", VAR_4);
  }
 }

 FUNC_19(&VAR_5->docs, VAR_4, FUNC_13(VAR_4), VAR_8);

 VAR_9 = VAR_8->children;
 VAR_10 = FUNC_2(VAR_9, "definitions", VAR_1);
 if (!VAR_10) {
  if (VAR_6) {
   xmlNodePtr VAR_14 = FUNC_2(VAR_9, "schema", VAR_2);
   if (VAR_14) {
    FUNC_4(VAR_5, VAR_14);
    return;
   }
  }
  FUNC_10(VAR_0, "Parsing WSDL: Couldn't find <definitions> in '%s'", VAR_4);
 }

 if (!VAR_6) {
  VAR_12 = FUNC_1(VAR_10->properties, "targetNamespace");
  if (VAR_12) {
   VAR_7->target_ns = FUNC_0((char*)VAR_12->children->content);
  }
 }

 VAR_11 = VAR_10->children;
 while (VAR_11 != ((void*)0)) {
  if (!FUNC_3(VAR_11)) {
   VAR_11 = VAR_11->next;
   continue;
  }
  if (FUNC_5(VAR_11,"types")) {

   xmlNodePtr VAR_15 = VAR_11->children;

   while (VAR_15 != ((void*)0)) {
    if (FUNC_6(VAR_15, "schema", VAR_2)) {
     FUNC_4(VAR_5, VAR_15);
    } else if (FUNC_3(VAR_15) && !FUNC_5(VAR_15,"documentation")) {
     FUNC_10(VAR_0, "Parsing WSDL: Unexpected WSDL element <%s>", VAR_15->name);
    }
    VAR_15 = VAR_15->next;
   }
  } else if (FUNC_5(VAR_11,"import")) {

   xmlAttrPtr VAR_16 = FUNC_1(VAR_11->properties, "location");
   if (VAR_16) {
    xmlChar *VAR_17;
    xmlChar *VAR_18 = FUNC_17(VAR_11->doc, VAR_11);

    if (VAR_18 == ((void*)0)) {
     VAR_17 = FUNC_14(VAR_16->children->content, VAR_11->doc->URL);
    } else {
     VAR_17 = FUNC_14(VAR_16->children->content, VAR_18);
     FUNC_15(VAR_18);
    }
    FUNC_21(VAR_3, (char*)VAR_17, VAR_5, 1);
    FUNC_15(VAR_17);
   }

  } else if (FUNC_5(VAR_11,"message")) {
   xmlAttrPtr VAR_19 = FUNC_1(VAR_11->properties, "name");
   if (VAR_19 && VAR_19->children && VAR_19->children->content) {
    if (FUNC_19(&VAR_5->messages, (char*)VAR_19->children->content, FUNC_18(VAR_19->children->content), VAR_11) == ((void*)0)) {
     FUNC_10(VAR_0, "Parsing WSDL: <message> '%s' already defined", VAR_19->children->content);
    }
   } else {
    FUNC_9(VAR_0, "Parsing WSDL: <message> has no name attribute");
   }

  } else if (FUNC_5(VAR_11,"portType")) {
   xmlAttrPtr VAR_20 = FUNC_1(VAR_11->properties, "name");
   if (VAR_20 && VAR_20->children && VAR_20->children->content) {
    if (FUNC_19(&VAR_5->portTypes, (char*)VAR_20->children->content, FUNC_18(VAR_20->children->content), VAR_11) == ((void*)0)) {
     FUNC_10(VAR_0, "Parsing WSDL: <portType> '%s' already defined", VAR_20->children->content);
    }
   } else {
    FUNC_9(VAR_0, "Parsing WSDL: <portType> has no name attribute");
   }

  } else if (FUNC_5(VAR_11,"binding")) {
   xmlAttrPtr VAR_21 = FUNC_1(VAR_11->properties, "name");
   if (VAR_21 && VAR_21->children && VAR_21->children->content) {
    if (FUNC_19(&VAR_5->bindings, (char*)VAR_21->children->content, FUNC_18(VAR_21->children->content), VAR_11) == ((void*)0)) {
     FUNC_10(VAR_0, "Parsing WSDL: <binding> '%s' already defined", VAR_21->children->content);
    }
   } else {
    FUNC_9(VAR_0, "Parsing WSDL: <binding> has no name attribute");
   }

  } else if (FUNC_5(VAR_11,"service")) {
   xmlAttrPtr VAR_22 = FUNC_1(VAR_11->properties, "name");
   if (VAR_22 && VAR_22->children && VAR_22->children->content) {
    if (FUNC_19(&VAR_5->services, (char*)VAR_22->children->content, FUNC_18(VAR_22->children->content), VAR_11) == ((void*)0)) {
     FUNC_10(VAR_0, "Parsing WSDL: <service> '%s' already defined", VAR_22->children->content);
    }
   } else {
    FUNC_9(VAR_0, "Parsing WSDL: <service> has no name attribute");
   }
  } else if (!FUNC_5(VAR_11,"documentation")) {
   FUNC_10(VAR_0, "Parsing WSDL: Unexpected WSDL element <%s>", VAR_11->name);
  }
  VAR_11 = VAR_11->next;
 }
}
