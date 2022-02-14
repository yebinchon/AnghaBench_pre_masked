
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_bipc {int fsm; int usock; int * aipc; int aipcs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nn_bipc*,int ) ;
 int FUNC_2 (struct nn_bipc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6 (void *VAR_1)
{
    struct nn_bipc *VAR_2 = VAR_1;

    FUNC_1 (VAR_2, VAR_0);
    FUNC_4 (&VAR_2->aipcs);
    FUNC_0 (VAR_2->aipc == ((void*)0));
    FUNC_5 (&VAR_2->usock);
    FUNC_3 (&VAR_2->fsm);

    FUNC_2 (VAR_2);
}
