
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int abort_lock; struct MPContext* abort_list; int num_abort_list; int global; int input; int osd; int * encode_lavc_ctx; int * ipc_ctx; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct MPContext*,struct MPContext*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct MPContext*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct MPContext*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct MPContext*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct MPContext*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct MPContext*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct MPContext*) ;

void FUNC_17(struct MPContext *VAR_0)
{
    FUNC_8(VAR_0);

    FUNC_9(VAR_0->ipc_ctx);
    VAR_0->ipc_ctx = ((void*)0);

    FUNC_14(VAR_0);
    FUNC_16(VAR_0);


    FUNC_4(VAR_0->encode_lavc_ctx);
    VAR_0->encode_lavc_ctx = ((void*)0);

    FUNC_3(VAR_0);

    FUNC_5(VAR_0);

    FUNC_10(VAR_0->osd);





    if (FUNC_1(VAR_0, VAR_0)) {
        FUNC_13();
        FUNC_1(VAR_0, ((void*)0));
    }

    FUNC_6(VAR_0->input);

    FUNC_15(VAR_0->global);

    FUNC_7(VAR_0->global);
    FUNC_0(!VAR_0->num_abort_list);
    FUNC_12(VAR_0->abort_list);
    FUNC_11(&VAR_0->abort_lock);
    FUNC_12(VAR_0);
}
