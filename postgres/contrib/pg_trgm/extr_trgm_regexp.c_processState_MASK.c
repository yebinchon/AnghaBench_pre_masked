
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TrgmStateKey ;
struct TYPE_9__ {int flags; int stateKey; } ;
typedef TYPE_1__ TrgmState ;
struct TYPE_10__ {scalar_t__ keysQueue; } ;
typedef TYPE_2__ TrgmNFA ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(TrgmNFA *VAR_2, TrgmState *VAR_3)
{

 VAR_2->keysQueue = VAR_0;





 FUNC_1(VAR_2, VAR_3, &VAR_3->stateKey);
 while (VAR_2->keysQueue != VAR_0 && !(VAR_3->flags & VAR_1))
 {
  TrgmStateKey *VAR_4 = (TrgmStateKey *) FUNC_2(VAR_2->keysQueue);

  VAR_2->keysQueue = FUNC_3(VAR_2->keysQueue);
  FUNC_1(VAR_2, VAR_3, VAR_4);
 }





 if (!(VAR_3->flags & VAR_1))
  FUNC_0(VAR_2, VAR_3);
}
