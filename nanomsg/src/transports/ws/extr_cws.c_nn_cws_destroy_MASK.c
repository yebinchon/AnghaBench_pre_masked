
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_cws {int fsm; int usock; int retry; int sws; int dns; int nic; int remote_host; int resource; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nn_cws*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7 (void *VAR_0)
{
    struct nn_cws *VAR_1 = VAR_0;

    FUNC_1 (&VAR_1->resource);
    FUNC_1 (&VAR_1->remote_host);
    FUNC_1 (&VAR_1->nic);
    FUNC_2 (&VAR_1->dns);
    FUNC_5 (&VAR_1->sws);
    FUNC_0 (&VAR_1->retry);
    FUNC_6 (&VAR_1->usock);
    FUNC_4 (&VAR_1->fsm);

    FUNC_3 (VAR_1);
}
