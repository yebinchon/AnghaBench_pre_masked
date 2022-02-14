
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef float lua_Number ;
struct TYPE_7__ {int sizeof_lua_Number; int is_arm_fpa; scalar_t__ lua_Number_integral; } ;
struct TYPE_8__ {TYPE_1__ target; int status; } ;
typedef TYPE_2__ DumpState ;


 int FUNC_0 (float,int,TYPE_2__*) ;
 int FUNC_1 (double,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(lua_Number VAR_1, DumpState* VAR_2)
{



 if (VAR_2->target.lua_Number_integral)
 {
  if (((float)(int)VAR_1)!=VAR_1) VAR_2->status=VAR_0;
  FUNC_0(VAR_1,VAR_2->target.sizeof_lua_Number,VAR_2);
 }
 else
 {
  switch(VAR_2->target.sizeof_lua_Number)
  {

   case 4: {
    float VAR_3=VAR_1;
    FUNC_2((char*)&VAR_3,4,VAR_2);
    FUNC_1(VAR_3,VAR_2);
   } break;
   case 8: {
    double VAR_4=VAR_1;



    if(VAR_2->target.is_arm_fpa)
    {
      char *VAR_5=(char*)&VAR_4, VAR_6[4];
      FUNC_4(VAR_6,VAR_5,4);
      FUNC_4(VAR_5,VAR_5+4,4);
      FUNC_4(VAR_5+4,VAR_6,4);
    }
    FUNC_2((char*)&VAR_4,8,VAR_2);
    FUNC_1(VAR_4,VAR_2);
   } break;
   default: FUNC_3(0);
  }
 }

}
