
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_bws {int fsm; int usock; int * aws; int awss; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nn_bws*,int ) ;
 int FUNC_2 (struct nn_bws*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6 (void *VAR_1)
{
    struct nn_bws *VAR_2 = VAR_1;

    FUNC_1 (VAR_2, VAR_0);
    FUNC_4 (&VAR_2->awss);
    FUNC_0 (VAR_2->aws == ((void*)0));
    FUNC_5 (&VAR_2->usock);
    FUNC_3 (&VAR_2->fsm);

    FUNC_2 (VAR_2);
}
