
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_data_st {int category; void* data; int * callback; } ;
typedef int * OSSL_trace_cb ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,struct trace_data_st*) ;
 int VAR_0 ;
 int FUNC_3 (struct trace_data_st*) ;
 struct trace_data_st* FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int,int ,int **,int *,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6(int VAR_5, OSSL_trace_cb VAR_6, void *VAR_7)
{

    BIO *VAR_8 = ((void*)0);
    struct trace_data_st *VAR_9 = ((void*)0);

    if (VAR_5 < 0 || VAR_5 >= VAR_1)
        return 0;

    if (VAR_6 != ((void*)0)) {
        if ((VAR_8 = FUNC_1(&VAR_4)) == ((void*)0)
            || (VAR_9 =
                FUNC_4(sizeof(struct trace_data_st))) == ((void*)0))
            goto err;

        VAR_9->callback = VAR_6;
        VAR_9->category = VAR_5;
        VAR_9->data = VAR_7;

        FUNC_2(VAR_8, VAR_9);
    }

    if (!FUNC_5(VAR_5, VAR_0, &VAR_8, ((void*)0), ((void*)0),
                        VAR_2, VAR_3))
        goto err;

    return 1;

 err:
    FUNC_0(VAR_8);
    FUNC_3(VAR_9);


    return 0;
}
