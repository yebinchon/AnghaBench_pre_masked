
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_9__ {scalar_t__ mode; TYPE_1__* lock; } ;
struct TYPE_8__ {int state; } ;
typedef scalar_t__ LWLockMode ;
typedef TYPE_1__ LWLock ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,TYPE_1__*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*,int ) ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *,int) ;

void
FUNC_9(LWLock *VAR_9)
{
 LWLockMode VAR_10;
 uint32 VAR_11;
 bool VAR_12;
 int VAR_13;





 for (VAR_13 = VAR_8; --VAR_13 >= 0;)
  if (VAR_9 == VAR_7[VAR_13].lock)
   break;

 if (VAR_13 < 0)
  FUNC_7(VAR_0, "lock %s is not held", FUNC_6(VAR_9));

 VAR_10 = VAR_7[VAR_13].mode;

 VAR_8--;
 for (; VAR_13 < VAR_8; VAR_13++)
  VAR_7[VAR_13] = VAR_7[VAR_13 + 1];

 FUNC_3("LWLockRelease", VAR_9, VAR_10);





 if (VAR_10 == VAR_1)
  VAR_11 = FUNC_8(&VAR_9->state, VAR_5);
 else
  VAR_11 = FUNC_8(&VAR_9->state, VAR_6);


 FUNC_0(!(VAR_11 & VAR_5));






 if ((VAR_11 & (VAR_2 | VAR_3)) ==
  (VAR_2 | VAR_3) &&
  (VAR_11 & VAR_4) == 0)
  VAR_12 = 1;
 else
  VAR_12 = 0;





 if (VAR_12)
 {

  FUNC_1("LWLockRelease", VAR_9, "releasing waiters");
  FUNC_2(VAR_9);
 }

 FUNC_5(FUNC_6(VAR_9));




 FUNC_4();
}
