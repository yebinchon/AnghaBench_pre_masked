
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zval ;
typedef int * xmlNodePtr ;
typedef TYPE_1__* sdlTypePtr ;
typedef TYPE_2__* encodeTypePtr ;
struct TYPE_12__ {int type; TYPE_1__* sdl_type; } ;
struct TYPE_13__ {TYPE_2__ details; } ;
struct TYPE_11__ {int kind; TYPE_9__* encode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int * FUNC_0 (TYPE_2__*,int *,int,int *) ;
 int * FUNC_1 (TYPE_9__*,int *,int,int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (TYPE_2__*,int *,int,int *) ;
 int * FUNC_5 (TYPE_2__*,int *,int,int *) ;
 int * FUNC_6 (TYPE_2__*,int *,int,int *) ;
 int * FUNC_7 (TYPE_2__*,int *,int,int *) ;

xmlNodePtr FUNC_8(encodeTypePtr VAR_4, zval *VAR_5, int VAR_6, xmlNodePtr VAR_7)
{
 sdlTypePtr VAR_8;
 xmlNodePtr VAR_9 = ((void*)0);

 VAR_8 = VAR_4->sdl_type;

 if (VAR_8 == ((void*)0)) {
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_6 == VAR_2) {
   FUNC_2(VAR_9, VAR_4);
  }
  return VAR_9;
 }
 switch(VAR_8->kind) {
  case 129:
   if (VAR_8->encode && VAR_4 != &VAR_8->encode->details) {
    VAR_9 = FUNC_1(VAR_8->encode, VAR_5, VAR_6, VAR_7);
   } else {
    VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
   }
   break;
  case 131:
   VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
   break;
  case 128:
   VAR_9 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);
   break;
  case 133:
  case 130:
  case 132:
   if (VAR_8->encode &&
       (VAR_8->encode->details.type == VAR_1 ||
        VAR_8->encode->details.type == VAR_3)) {
    return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
   } else {
    return FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7);
   }
   break;
  default:
    FUNC_3(VAR_0, "Encoding: Internal Error");
   break;
 }
 if (VAR_6 == VAR_2) {
  FUNC_2(VAR_9, VAR_4);
 }
 return VAR_9;
}
