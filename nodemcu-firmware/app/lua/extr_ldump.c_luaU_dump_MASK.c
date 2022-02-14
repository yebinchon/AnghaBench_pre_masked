
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int strsize_t ;
typedef int lua_Writer ;
typedef int lua_State ;
typedef scalar_t__ lua_Number ;
struct TYPE_3__ {char little_endian; int sizeof_int; int sizeof_strsize_t; int sizeof_lua_Number; int lua_Number_integral; scalar_t__ is_arm_fpa; } ;
typedef int Proto ;
typedef TYPE_1__ DumpTargetInfo ;


 int FUNC_0 (int *,int const*,int ,void*,int,TYPE_1__) ;

int FUNC_1 (lua_State* VAR_0, const Proto* VAR_1, lua_Writer VAR_2, void* VAR_3, int VAR_4)
{
 DumpTargetInfo VAR_5;
 int VAR_6=1;
 VAR_5.little_endian=*(char*)&VAR_6;
 VAR_5.sizeof_int=sizeof(int);
 VAR_5.sizeof_strsize_t=sizeof(strsize_t);
 VAR_5.sizeof_lua_Number=sizeof(lua_Number);
 VAR_5.lua_Number_integral=(((lua_Number)0.5)==0);
 VAR_5.is_arm_fpa=0;
 return FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,VAR_5);
}
