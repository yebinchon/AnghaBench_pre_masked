
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* adns_query ;
struct TYPE_6__ {scalar_t__* owner; } ;
typedef TYPE_2__ adns_answer ;
struct TYPE_5__ {TYPE_2__* answer; } ;


 scalar_t__* FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,char const*,size_t) ;

__attribute__((used)) static int FUNC_3(adns_query VAR_0, const char *VAR_1, int VAR_2) {

  adns_answer *VAR_3;

  VAR_3= VAR_0->answer;
  FUNC_1(!VAR_3->owner);

  VAR_3->owner= FUNC_0(VAR_0, (size_t) VAR_2+1); if (!VAR_3->owner) return 0;

  FUNC_2(VAR_3->owner,VAR_1, (size_t) VAR_2);
  VAR_3->owner[VAR_2]= 0;
  return 1;
}
