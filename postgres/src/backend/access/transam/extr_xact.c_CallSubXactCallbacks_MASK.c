
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arg; int (* callback ) (int ,int ,int ,int ) ;struct TYPE_3__* next; } ;
typedef int SubXactEvent ;
typedef TYPE_1__ SubXactCallbackItem ;
typedef int SubTransactionId ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(SubXactEvent VAR_1,
      SubTransactionId VAR_2,
      SubTransactionId VAR_3)
{
 SubXactCallbackItem *VAR_4;

 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next)
  VAR_4->callback(VAR_1, VAR_2, VAR_3, VAR_4->arg);
}
