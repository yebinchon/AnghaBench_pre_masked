
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
typedef int xmlNodePtr ;
typedef TYPE_1__* sdlTypePtr ;
typedef TYPE_2__* encodeTypePtr ;
struct TYPE_11__ {int type; TYPE_1__* sdl_type; } ;
struct TYPE_12__ {TYPE_2__ details; } ;
struct TYPE_10__ {int kind; TYPE_8__* encode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int * FUNC_0 (int *,TYPE_2__*,int ) ;
 int * FUNC_1 (int *,TYPE_8__*,int ) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int *,TYPE_2__*,int ) ;
 int * FUNC_4 (int *,TYPE_2__*,int ) ;
 int * FUNC_5 (int *,TYPE_2__*,int ) ;
 int * FUNC_6 (int *,TYPE_2__*,int ) ;

zval *FUNC_7(zval *VAR_3, encodeTypePtr VAR_4, xmlNodePtr VAR_5)
{
 sdlTypePtr VAR_6;

 VAR_6 = VAR_4->sdl_type;
 if (VAR_6 == ((void*)0)) {
  return FUNC_0(VAR_3, VAR_4, VAR_5);
 }
 switch (VAR_6->kind) {
  case 129:
   if (VAR_6->encode && VAR_4 != &VAR_6->encode->details) {
    return FUNC_1(VAR_3, VAR_6->encode, VAR_5);
   } else {
    return FUNC_0(VAR_3, VAR_4, VAR_5);
   }
   break;
  case 131:
   return FUNC_4(VAR_3, VAR_4, VAR_5);
  case 128:
   return FUNC_6(VAR_3, VAR_4, VAR_5);
  case 133:
  case 130:
  case 132:
   if (VAR_6->encode &&
       (VAR_6->encode->details.type == VAR_1 ||
        VAR_6->encode->details.type == VAR_2)) {
    return FUNC_3(VAR_3, VAR_4, VAR_5);
   }
   return FUNC_5(VAR_3, VAR_4, VAR_5);
  default:
    FUNC_2(VAR_0, "Encoding: Internal Error");
   return FUNC_0(VAR_3, VAR_4, VAR_5);
 }
}
