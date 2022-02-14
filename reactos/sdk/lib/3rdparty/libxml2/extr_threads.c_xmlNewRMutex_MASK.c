
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlRMutexPtr ;
typedef int xmlRMutex ;
struct TYPE_5__ {scalar_t__ count; int * lock; int cs; int cv; scalar_t__ waiters; scalar_t__ held; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int *) ;
 int * FUNC_5 () ;

xmlRMutexPtr
FUNC_6(void)
{
    xmlRMutexPtr VAR_1;

    if ((VAR_1 = FUNC_2(sizeof(xmlRMutex))) == ((void*)0))
        return (((void*)0));
    return (VAR_1);
}
