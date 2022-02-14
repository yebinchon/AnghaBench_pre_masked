
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int phase; scalar_t__ arrived; scalar_t__ participants; int elected; int condition_variable; int mutex; } ;
typedef TYPE_1__ Barrier ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

bool
FUNC_7(Barrier *VAR_0, uint32 VAR_1)
{
 bool VAR_2 = 0;
 bool VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_5(&VAR_0->mutex);
 VAR_4 = VAR_0->phase;
 VAR_5 = VAR_4 + 1;
 ++VAR_0->arrived;
 if (VAR_0->arrived == VAR_0->participants)
 {
  VAR_2 = 1;
  VAR_0->arrived = 0;
  VAR_0->phase = VAR_5;
  VAR_0->elected = VAR_5;
 }
 FUNC_6(&VAR_0->mutex);






 if (VAR_2)
 {
  FUNC_1(&VAR_0->condition_variable);

  return 1;
 }





 VAR_3 = 0;
 FUNC_3(&VAR_0->condition_variable);
 for (;;)
 {
  FUNC_5(&VAR_0->mutex);
  FUNC_0(VAR_0->phase == VAR_4 || VAR_0->phase == VAR_5);
  VAR_2 = VAR_0->phase == VAR_5;
  if (VAR_2 && VAR_0->elected != VAR_5)
  {







   VAR_0->elected = VAR_0->phase;
   VAR_3 = 1;
  }
  FUNC_6(&VAR_0->mutex);
  if (VAR_2)
   break;
  FUNC_4(&VAR_0->condition_variable, VAR_1);
 }
 FUNC_2();

 return VAR_3;
}
