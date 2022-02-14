
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int level; int L; } ;
typedef TYPE_1__ MatchState ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (TYPE_1__*,int,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(MatchState*VAR_0,const char*VAR_1,const char*VAR_2){
int VAR_3;
int VAR_4=(VAR_0->level==0&&VAR_1)?1:VAR_0->level;
FUNC_0(VAR_0->L,VAR_4,"too many captures");
for(VAR_3=0;VAR_3<VAR_4;VAR_3++)
FUNC_1(VAR_0,VAR_3,VAR_1,VAR_2);
return VAR_4;
}
