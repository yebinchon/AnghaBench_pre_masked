
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* data; struct TYPE_4__* next; } ;
typedef TYPE_1__ CHANGE ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

int FUNC_4(int VAR_3)
{
    CHANGE *VAR_4;
    int VAR_5;

    VAR_5 = ! !VAR_0;
    if (VAR_3)
 FUNC_2();
    else
 while (VAR_0) {
     VAR_4 = VAR_0->next;
     FUNC_1(VAR_0->data);
     FUNC_1(VAR_0);
     VAR_0 = VAR_4;
 }
    if (FUNC_0(VAR_2) < 0)
 FUNC_3("closing filesystem");
    return VAR_5 || VAR_1;
}
