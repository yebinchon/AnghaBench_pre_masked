
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pNext; int zPattern; } ;
typedef TYPE_1__ quotaGroup ;
struct TYPE_5__ {TYPE_1__* pGroup; } ;


 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static quotaGroup *FUNC_1(const char *VAR_1){
  quotaGroup *VAR_2;
  for(VAR_2=VAR_0.pGroup; VAR_2 && FUNC_0(VAR_2->zPattern, VAR_1)==0;
      VAR_2=VAR_2->pNext){}
  return VAR_2;
}
