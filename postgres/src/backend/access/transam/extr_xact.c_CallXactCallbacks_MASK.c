
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int XactEvent ;
struct TYPE_3__ {int arg; int (* callback ) (int ,int ) ;struct TYPE_3__* next; } ;
typedef TYPE_1__ XactCallbackItem ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(XactEvent VAR_1)
{
 XactCallbackItem *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
  VAR_2->callback(VAR_1, VAR_2->arg);
}
