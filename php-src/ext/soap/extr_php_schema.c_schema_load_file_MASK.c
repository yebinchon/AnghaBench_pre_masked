
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlDocPtr ;
typedef int xmlChar ;
typedef TYPE_4__* xmlAttrPtr ;
struct TYPE_23__ {int docs; } ;
typedef TYPE_5__ sdlCtx ;
struct TYPE_22__ {TYPE_1__* children; } ;
struct TYPE_21__ {int children; } ;
struct TYPE_20__ {int properties; } ;
struct TYPE_19__ {int content; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (int ,char*,int *,int ) ;
 TYPE_3__* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,int ,TYPE_3__*) ;
 int FUNC_14 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_15(sdlCtx *VAR_1, xmlAttrPtr VAR_2, xmlChar *VAR_3, xmlAttrPtr VAR_4, int VAR_5) {
 if (VAR_3 != ((void*)0) &&
     !FUNC_14(&VAR_1->docs, (char*)VAR_3, FUNC_12(VAR_3))) {
  xmlDocPtr VAR_6;
  xmlNodePtr VAR_7;
  xmlAttrPtr VAR_8;

  FUNC_5(VAR_1, (char*)VAR_3);
  VAR_6 = FUNC_8((char*)VAR_3);
  FUNC_4(VAR_1);

  if (VAR_6 == ((void*)0)) {
   FUNC_6(VAR_0, "Parsing Schema: can't import schema from '%s'", VAR_3);
  }
  VAR_7 = FUNC_2(VAR_6->children, "schema");
  if (VAR_7 == ((void*)0)) {
   FUNC_9(VAR_6);
   FUNC_6(VAR_0, "Parsing Schema: can't import schema from '%s'", VAR_3);
  }
  VAR_8 = FUNC_1(VAR_7->properties, "targetNamespace");
  if (VAR_5) {
   if (VAR_2 != ((void*)0) && (VAR_8 == ((void*)0) || FUNC_11(VAR_2->children->content, VAR_8->children->content) != 0)) {
    FUNC_9(VAR_6);
    FUNC_7(VAR_0, "Parsing Schema: can't import schema from '%s', unexpected 'targetNamespace'='%s'", VAR_3, VAR_2->children->content);
   }
   if (VAR_2 == ((void*)0) && VAR_8 != ((void*)0)) {
    FUNC_9(VAR_6);
    FUNC_7(VAR_0, "Parsing Schema: can't import schema from '%s', unexpected 'targetNamespace'='%s'", VAR_3, VAR_8->children->content);
   }
  } else {
   VAR_8 = FUNC_1(VAR_7->properties, "targetNamespace");
   if (VAR_8 == ((void*)0)) {
    if (VAR_4 != ((void*)0)) {
     FUNC_10(VAR_7, FUNC_0("targetNamespace"), VAR_4->children->content);
    }
   } else if (VAR_4 != ((void*)0) && FUNC_11(VAR_4->children->content, VAR_8->children->content) != 0) {
    FUNC_9(VAR_6);
    FUNC_6(VAR_0, "Parsing Schema: can't include schema from '%s', different 'targetNamespace'", VAR_3);
   }
  }
  FUNC_13(&VAR_1->docs, (char*)VAR_3, FUNC_12(VAR_3), VAR_6);
  FUNC_3(VAR_1, VAR_7);
 }
}
