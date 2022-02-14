
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Smain {int argc; char** argv; } ;
typedef int strsize_t ;
typedef int lua_State ;
typedef scalar_t__ lua_Number ;
struct TYPE_2__ {char little_endian; int sizeof_int; int sizeof_strsize_t; int sizeof_lua_Number; int lua_Number_integral; scalar_t__ is_arm_fpa; } ;


 int VAR_0 ;
 int FUNC_0 (int,char**) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,struct Smain*) ;
 int * FUNC_4 () ;
 char* FUNC_5 (int *,int) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (char*) ;

int FUNC_7(int VAR_4, char* VAR_5[])
{
 lua_State* VAR_6;
 struct Smain VAR_7;

 int VAR_8=1;
 VAR_3.little_endian=*(char*)&VAR_8;
 VAR_3.sizeof_int=sizeof(int);
 VAR_3.sizeof_strsize_t=sizeof(strsize_t);
 VAR_3.sizeof_lua_Number=sizeof(lua_Number);
 VAR_3.lua_Number_integral=(((lua_Number)0.5)==0);
 VAR_3.is_arm_fpa=0;

 int VAR_9=FUNC_0(VAR_4,VAR_5);
 VAR_4-=VAR_9; VAR_5+=VAR_9;
 if (VAR_4<=0 && VAR_1==0) FUNC_6("no input files given");
 VAR_6=FUNC_4();
 if (VAR_6==((void*)0)) FUNC_1("not enough memory for state");
 VAR_7.argc=VAR_4;
 VAR_7.argv=VAR_5;
 if (FUNC_3(VAR_6,VAR_2,&VAR_7)!=0) FUNC_1(FUNC_5(VAR_6,-1));
 FUNC_2(VAR_6);
 return VAR_0;
}
