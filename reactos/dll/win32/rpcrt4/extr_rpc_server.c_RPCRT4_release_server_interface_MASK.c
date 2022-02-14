
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ CallsCompletedEvent; scalar_t__ Delete; int CurrentCalls; } ;
typedef TYPE_1__ RpcServerInterface ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(RpcServerInterface *VAR_0)
{
  if (!FUNC_2(&VAR_0->CurrentCalls) &&
      VAR_0->Delete) {


    if (VAR_0->CallsCompletedEvent)
      FUNC_3(VAR_0->CallsCompletedEvent);
    FUNC_1(FUNC_0(), 0, VAR_0);
  }
}
