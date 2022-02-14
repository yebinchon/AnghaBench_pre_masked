
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int * lock; } ;
typedef scalar_t__ LWLockMode ;
typedef int LWLock ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int *,char*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (char*,int *,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;

bool
FUNC_10(LWLock *VAR_6, LWLockMode VAR_7)
{
 bool VAR_8;

 FUNC_0(VAR_7 == VAR_2 || VAR_7 == VAR_1);

 FUNC_4("LWLockConditionalAcquire", VAR_6, VAR_7);


 if (VAR_5 >= VAR_3)
  FUNC_9(VAR_0, "too many LWLocks taken");






 FUNC_1();


 VAR_8 = FUNC_3(VAR_6, VAR_7);

 if (VAR_8)
 {

  FUNC_5();

  FUNC_2("LWLockConditionalAcquire", VAR_6, "failed");
  FUNC_7(FUNC_8(VAR_6), VAR_7);
 }
 else
 {

  VAR_4[VAR_5].lock = VAR_6;
  VAR_4[VAR_5++].mode = VAR_7;
  FUNC_6(FUNC_8(VAR_6), VAR_7);
 }
 return !VAR_8;
}
