
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int a ;
typedef int Table ;
typedef int Node ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int const*,int ) ;
 int * FUNC_2 (int const*,unsigned int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned int*,int *,int) ;

__attribute__((used)) static Node*FUNC_5(const Table*VAR_0,lua_Number VAR_1){
unsigned int VAR_2[FUNC_0(sizeof(lua_Number)/sizeof(int))];
int VAR_3;
if(FUNC_3(VAR_1,0))
return FUNC_1(VAR_0,0);
FUNC_4(VAR_2,&VAR_1,sizeof(VAR_2));
for(VAR_3=1;VAR_3<FUNC_0(sizeof(lua_Number)/sizeof(int));VAR_3++)VAR_2[0]+=VAR_2[VAR_3];
return FUNC_2(VAR_0,VAR_2[0]);
}
