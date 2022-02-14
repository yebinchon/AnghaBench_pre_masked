
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_9__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef scalar_t__ StkId ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,char*) ;
 int * FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int const*) ;

__attribute__((used)) static StkId FUNC_7(lua_State*VAR_1,StkId VAR_2){
const TValue*VAR_3=FUNC_2(VAR_1,VAR_2,VAR_0);
StkId VAR_4;
ptrdiff_t VAR_5=FUNC_4(VAR_1,VAR_2);
if(!FUNC_6(VAR_3))
FUNC_1(VAR_1,VAR_2,"call");
for(VAR_4=VAR_1->top;VAR_4>VAR_2;VAR_4--)FUNC_5(VAR_1,VAR_4,VAR_4-1);
FUNC_0(VAR_1);
VAR_2=FUNC_3(VAR_1,VAR_5);
FUNC_5(VAR_1,VAR_2,VAR_3);
return VAR_2;
}
