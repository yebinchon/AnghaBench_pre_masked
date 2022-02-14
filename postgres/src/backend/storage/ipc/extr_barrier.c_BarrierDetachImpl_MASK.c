
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ participants; scalar_t__ arrived; int condition_variable; int mutex; int phase; int static_party; } ;
typedef TYPE_1__ Barrier ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline bool
FUNC_4(Barrier *VAR_0, bool VAR_1)
{
 bool VAR_2;
 bool VAR_3;

 FUNC_0(!VAR_0->static_party);

 FUNC_2(&VAR_0->mutex);
 FUNC_0(VAR_0->participants > 0);
 --VAR_0->participants;






 if ((VAR_1 || VAR_0->participants > 0) &&
  VAR_0->arrived == VAR_0->participants)
 {
  VAR_2 = 1;
  VAR_0->arrived = 0;
  ++VAR_0->phase;
 }
 else
  VAR_2 = 0;

 VAR_3 = VAR_0->participants == 0;
 FUNC_3(&VAR_0->mutex);

 if (VAR_2)
  FUNC_1(&VAR_0->condition_variable);

 return VAR_3;
}
