
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


typedef int zval ;
typedef TYPE_4__* xmlNodePtr ;
typedef TYPE_5__* xmlAttrPtr ;
typedef TYPE_6__* encodePtr ;
struct TYPE_19__ {TYPE_2__* sdl_type; } ;
struct TYPE_22__ {TYPE_3__ details; } ;
struct TYPE_21__ {TYPE_1__* children; } ;
struct TYPE_20__ {int properties; } ;
struct TYPE_18__ {scalar_t__ kind; TYPE_6__* encode; } ;
struct TYPE_17__ {int content; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;
 TYPE_5__* FUNC_2 (int ,char*,int ) ;
 TYPE_6__* FUNC_3 (int ) ;
 TYPE_6__* FUNC_4 (int ,TYPE_4__*,int ) ;
 int * FUNC_5 (int *,TYPE_6__*,TYPE_4__*) ;
 int VAR_3 ;

zval *FUNC_6(zval *VAR_4, encodePtr VAR_5, xmlNodePtr VAR_6)
{
 VAR_6 = FUNC_1(VAR_6);

 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_3(VAR_0);
 } else {

  xmlAttrPtr VAR_7 = FUNC_2(VAR_6->properties,"type", VAR_2);

  if (VAR_7 != ((void*)0)) {
   encodePtr VAR_8 = FUNC_4(FUNC_0(VAR_3), VAR_6, VAR_7->children->content);

   if (VAR_8 != ((void*)0) && VAR_8 != VAR_5) {
     encodePtr VAR_9 = VAR_8;
     while (VAR_9 &&
            VAR_9->details.sdl_type != ((void*)0) &&
            VAR_9->details.sdl_type->kind != VAR_1) {
       if (VAR_8 == VAR_9->details.sdl_type->encode ||
           VAR_9 == VAR_9->details.sdl_type->encode) {
        VAR_8 = ((void*)0);
        break;
       }
       VAR_9 = VAR_9->details.sdl_type->encode;
     }
     if (VAR_8 != ((void*)0)) {
       VAR_5 = VAR_8;
     }
   }
  }
 }
 return FUNC_5(VAR_4, VAR_5, VAR_6);
}
