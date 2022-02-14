
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlMutexPtr ;
typedef int xmlMutex ;
struct TYPE_5__ {int tid; int sem; int mutex; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;

xmlMutexPtr
FUNC_5(void)
{
    xmlMutexPtr VAR_3;

    if ((VAR_3 = FUNC_3(sizeof(xmlMutex))) == ((void*)0))
        return (((void*)0));
    return (VAR_3);
}
