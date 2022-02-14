
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int level; int L; TYPE_1__* capture; } ;
struct TYPE_4__ {int len; } ;
typedef TYPE_2__ MatchState ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(MatchState*VAR_0,int VAR_1){
VAR_1-='1';
if(VAR_1<0||VAR_1>=VAR_0->level||VAR_0->capture[VAR_1].len==(-1))
return FUNC_0(VAR_0->L,"invalid capture index");
return VAR_1;
}
