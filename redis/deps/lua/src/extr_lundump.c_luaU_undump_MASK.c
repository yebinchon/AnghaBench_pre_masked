
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int ZIO ;
struct TYPE_4__ {char const* name; int * b; int * Z; int * L; } ;
typedef int Proto ;
typedef int Mbuffer ;
typedef TYPE_1__ LoadState ;


 char const* VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;

Proto* FUNC_3 (lua_State* VAR_1, ZIO* VAR_2, Mbuffer* VAR_3, const char* VAR_4)
{
 LoadState VAR_5;
 if (*VAR_4=='@' || *VAR_4=='=')
  VAR_5.name=VAR_4+1;
 else if (*VAR_4==VAR_0[0])
  VAR_5.name="binary string";
 else
  VAR_5.name=VAR_4;
 VAR_5.L=VAR_1;
 VAR_5.Z=VAR_2;
 VAR_5.b=VAR_3;
 FUNC_1(&VAR_5);
 return FUNC_0(&VAR_5,FUNC_2(VAR_1,"=?"));
}
