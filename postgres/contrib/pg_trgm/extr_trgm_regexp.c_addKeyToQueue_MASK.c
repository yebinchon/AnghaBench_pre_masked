
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TrgmStateKey ;
struct TYPE_3__ {int keysQueue; } ;
typedef TYPE_1__ TrgmNFA ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(TrgmNFA *VAR_0, TrgmStateKey *VAR_1)
{
 TrgmStateKey *VAR_2 = (TrgmStateKey *) FUNC_2(sizeof(TrgmStateKey));

 FUNC_1(VAR_2, VAR_1, sizeof(TrgmStateKey));
 VAR_0->keysQueue = FUNC_0(VAR_0->keysQueue, VAR_2);
}
