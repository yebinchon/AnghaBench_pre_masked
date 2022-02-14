
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


typedef TYPE_3__* xmlNodePtr ;
typedef int xmlChar ;
typedef TYPE_4__* xmlAttrPtr ;
typedef TYPE_5__* sdlParamPtr ;
typedef int sdlParam ;
struct TYPE_22__ {int sdl; int messages; } ;
typedef TYPE_6__ sdlCtx ;
struct TYPE_21__ {TYPE_13__* element; int encode; int paramName; scalar_t__ order; } ;
struct TYPE_20__ {TYPE_2__* children; } ;
struct TYPE_19__ {struct TYPE_19__* next; int properties; int * name; TYPE_1__* ns; struct TYPE_19__* children; } ;
struct TYPE_18__ {scalar_t__ content; } ;
struct TYPE_17__ {scalar_t__ href; } ;
struct TYPE_16__ {int encode; } ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 (int ,char*) ;
 TYPE_13__* FUNC_3 (int ,TYPE_3__*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_3__*,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (int ,char*,int *) ;
 scalar_t__ FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (int *,int ,int *,int ,int ) ;
 int FUNC_12 (int *,TYPE_5__*) ;
 TYPE_3__* FUNC_13 (int *,char*,int ) ;

__attribute__((used)) static HashTable* FUNC_14(sdlCtx *VAR_3, xmlChar* VAR_4)
{
 xmlNodePtr VAR_5, VAR_6, VAR_7 = ((void*)0), VAR_8;
 HashTable* VAR_9 = ((void*)0);
 char *VAR_10;

 VAR_10 = FUNC_10((char*)VAR_4,':');
 if (VAR_10 == ((void*)0)) {
  VAR_10 = (char*)VAR_4;
 } else {
  ++VAR_10;
 }
 if ((VAR_8 = FUNC_13(&VAR_3->messages, VAR_10, FUNC_9(VAR_10))) == ((void*)0)) {
  FUNC_7(VAR_0, "Parsing WSDL: Missing <message> with name '%s'", VAR_4);
 }
 VAR_7 = VAR_8;

 VAR_9 = FUNC_0(sizeof(HashTable));
 FUNC_11(VAR_9, 0, ((void*)0), VAR_2, 0);

 VAR_5 = VAR_7->children;
 while (VAR_5 != ((void*)0)) {
  xmlAttrPtr VAR_11, VAR_12, VAR_13;
  sdlParamPtr VAR_14;

  if (VAR_5->ns != ((void*)0) && FUNC_8((char*)VAR_5->ns->href, VAR_1) != 0) {
   FUNC_7(VAR_0, "Parsing WSDL: Unexpected extensibility element <%s>", VAR_5->name);
  }
  if (FUNC_6(VAR_5,"documentation")) {
   VAR_5 = VAR_5->next;
   continue;
  }
  if (!FUNC_6(VAR_5,"part")) {
   FUNC_7(VAR_0, "Parsing WSDL: Unexpected WSDL element <%s>", VAR_5->name);
  }
  VAR_6 = VAR_5;
  VAR_14 = FUNC_0(sizeof(sdlParam));
  FUNC_5(VAR_14,0,sizeof(sdlParam));
  VAR_14->order = 0;

  VAR_13 = FUNC_2(VAR_6->properties, "name");
  if (VAR_13 == ((void*)0)) {
   FUNC_7(VAR_0, "Parsing WSDL: No name associated with <part> '%s'", VAR_7->name);
  }

  VAR_14->paramName = FUNC_1((char*)VAR_13->children->content);

  VAR_12 = FUNC_2(VAR_6->properties, "type");
  if (VAR_12 != ((void*)0)) {
   VAR_14->encode = FUNC_4(VAR_3->sdl, VAR_6, VAR_12->children->content);
  } else {
   VAR_11 = FUNC_2(VAR_6->properties, "element");
   if (VAR_11 != ((void*)0)) {
    VAR_14->element = FUNC_3(VAR_3->sdl, VAR_6, VAR_11->children->content);
    if (VAR_14->element) {
     VAR_14->encode = VAR_14->element->encode;
    }
   }
  }

  FUNC_12(VAR_9, VAR_14);

  VAR_5 = VAR_5->next;
 }
 return VAR_9;
}
