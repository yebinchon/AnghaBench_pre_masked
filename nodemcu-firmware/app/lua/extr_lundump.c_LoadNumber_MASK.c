
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_Number ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_4__ {int numsize; scalar_t__ toflt; } ;
typedef TYPE_1__ LoadState ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static lua_Number FUNC_2(LoadState* VAR_0)
{
 lua_Number VAR_1;
 if(VAR_0->toflt)
 {
  switch(VAR_0->numsize)
  {
   case 1: {
    int8_t VAR_2;
    FUNC_0(VAR_0,VAR_2);
    VAR_1 = (lua_Number)VAR_2;
   } break;
   case 2: {
    int16_t VAR_3;
    FUNC_0(VAR_0,VAR_3);
    VAR_1 = (lua_Number)VAR_3;
   } break;
   case 4: {
    int32_t VAR_4;
    FUNC_0(VAR_0,VAR_4);
    VAR_1 = (lua_Number)VAR_4;
   } break;
   case 8: {
    int64_t VAR_5;
    FUNC_0(VAR_0,VAR_5);
    VAR_1 = (lua_Number)VAR_5;
   } break;
   default: FUNC_1(0);
  }
 }
 else
 {
  FUNC_0(VAR_0,VAR_1);
 }
 return VAR_1;
}
