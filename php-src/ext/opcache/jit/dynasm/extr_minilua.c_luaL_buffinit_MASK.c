
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {scalar_t__ lvl; int buffer; int p; int * L; } ;
typedef TYPE_1__ luaL_Buffer ;



__attribute__((used)) static void FUNC_0(lua_State*VAR_0,luaL_Buffer*VAR_1){
VAR_1->L=VAR_0;
VAR_1->p=VAR_1->buffer;
VAR_1->lvl=0;
}
