
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_3__* xmlNsPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef int xmlChar ;
typedef TYPE_5__* xmlAttrPtr ;
typedef TYPE_6__* encodeTypePtr ;
typedef TYPE_7__* encodePtr ;
struct TYPE_25__ {int type; TYPE_2__* sdl_type; } ;
struct TYPE_26__ {TYPE_6__ details; } ;
struct TYPE_24__ {TYPE_1__* children; } ;
struct TYPE_23__ {scalar_t__ type; int doc; struct TYPE_23__* next; struct TYPE_23__* children; scalar_t__ properties; } ;
struct TYPE_22__ {scalar_t__ href; } ;
struct TYPE_21__ {scalar_t__ kind; TYPE_7__* encode; } ;
struct TYPE_20__ {int * content; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int *,char*,int *) ;
 TYPE_4__* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (scalar_t__,char*) ;
 TYPE_5__* FUNC_10 (scalar_t__,char*,int ) ;
 TYPE_7__* FUNC_11 (int ) ;
 TYPE_7__* FUNC_12 (scalar_t__,TYPE_4__*,int *) ;
 int FUNC_13 (int *,TYPE_7__*,TYPE_4__*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,char**,char**) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_16 (int ,TYPE_4__*,int ) ;

__attribute__((used)) static zval *FUNC_17(zval *VAR_9, encodeTypePtr VAR_10, xmlNodePtr VAR_11)
{
 encodePtr VAR_12 = ((void*)0);
 xmlAttrPtr VAR_13;
 xmlChar *VAR_14 = ((void*)0);

 VAR_11 = FUNC_7(VAR_11);

 if (VAR_11 == ((void*)0)) {
  VAR_12 = FUNC_11(VAR_0);
 } else if (VAR_11->properties && FUNC_10(VAR_11->properties, "nil", VAR_6)) {
  VAR_12 = FUNC_11(VAR_0);
 } else {
  VAR_13 = FUNC_10(VAR_11->properties,"type", VAR_6);
  if (VAR_13 != ((void*)0)) {
    VAR_14 = VAR_13->children->content;
   VAR_12 = FUNC_12(FUNC_1(VAR_7), VAR_11, VAR_13->children->content);
   if (VAR_12 && VAR_10 == &VAR_12->details) {
    VAR_12 = ((void*)0);
   }
   if (VAR_12 != ((void*)0)) {
     encodePtr VAR_15 = VAR_12;
     while (VAR_15 &&
            VAR_15->details.sdl_type != ((void*)0) &&
            VAR_15->details.sdl_type->kind != VAR_5) {
       if (VAR_12 == VAR_15->details.sdl_type->encode ||
           VAR_15 == VAR_15->details.sdl_type->encode) {
        VAR_12 = ((void*)0);
        break;
       }
       VAR_15 = VAR_15->details.sdl_type->encode;
     }
   }
  }

  if (VAR_12 == ((void*)0)) {


   xmlNodePtr VAR_16;

   if (FUNC_9(VAR_11->properties, "arrayType") ||
       FUNC_9(VAR_11->properties, "itemType") ||
       FUNC_9(VAR_11->properties, "arraySize")) {
    VAR_12 = FUNC_11(VAR_1);
   } else {
    VAR_12 = FUNC_11(VAR_4);
    VAR_16 = VAR_11->children;
    while (VAR_16 != ((void*)0)) {
     if (VAR_16->type == VAR_3) {
      VAR_12 = FUNC_11(VAR_2);
      break;
     }
     VAR_16 = VAR_16->next;
    }
   }
  }
 }
 FUNC_13(VAR_9, VAR_12, VAR_11);
 if (FUNC_1(VAR_7) && VAR_14 && VAR_12->details.sdl_type) {
  zval VAR_17;
  char *VAR_18, *VAR_19;
  xmlNsPtr VAR_20;

  FUNC_14(&VAR_17, VAR_8);
  FUNC_4(&VAR_17, "enc_type", VAR_12->details.type);
  FUNC_3(VAR_9);
  FUNC_6(&VAR_17, "enc_value", VAR_9);
  FUNC_15(VAR_14, &VAR_19, &VAR_18);
  VAR_20 = FUNC_16(VAR_11->doc, VAR_11, FUNC_0(VAR_18));
  FUNC_5(&VAR_17, "enc_stype", VAR_19);
  if (VAR_20) {
   FUNC_5(&VAR_17, "enc_ns", (char*)VAR_20->href);
  }
  FUNC_8(VAR_19);
  if (VAR_18) {FUNC_8(VAR_18);}
  FUNC_2(VAR_9, &VAR_17);
 }
 return VAR_9;
}
