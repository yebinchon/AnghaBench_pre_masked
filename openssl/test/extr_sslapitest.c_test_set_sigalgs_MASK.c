
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int connsuccess; scalar_t__ valid; int liststr; int listlen; int * list; } ;
typedef TYPE_1__ sigalgs_list ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (size_t,int) ;
 int FUNC_11 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_3 ;
 int FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_16 (int *,int *,int **,int **,int *,int *) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_17(int VAR_6)
{
    SSL_CTX *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    SSL *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11 = 0;
    const sigalgs_list *VAR_12;
    int VAR_13;


    if (!FUNC_10((size_t)VAR_6, FUNC_0(VAR_5) * 2))
        return 0;

    VAR_13 = ((size_t)VAR_6 < FUNC_0(VAR_5));
    VAR_12 = VAR_13 ? &VAR_5[VAR_6]
                   : &VAR_5[VAR_6 - FUNC_0(VAR_5)];

    if (!FUNC_11(FUNC_15(FUNC_13(), FUNC_12(),
                                       VAR_2, 0,
                                       &VAR_8, &VAR_7, VAR_3, VAR_4)))
        return 0;





    FUNC_4(VAR_7, VAR_1);

    if (VAR_13) {
        int VAR_14;

        if (VAR_12->list != ((void*)0))
            VAR_14 = FUNC_2(VAR_7, VAR_12->list, VAR_12->listlen);
        else
            VAR_14 = FUNC_3(VAR_7, VAR_12->liststr);

        if (!VAR_14) {
            if (VAR_12->valid)
                FUNC_8("Failure setting sigalgs in SSL_CTX (%d)\n", VAR_6);
            else
                VAR_11 = 1;
            goto end;
        }
        if (!VAR_12->valid) {
            FUNC_8("Not-failed setting sigalgs in SSL_CTX (%d)\n", VAR_6);
            goto end;
        }
    }

    if (!FUNC_11(FUNC_16(VAR_8, VAR_7, &VAR_10,
                                      &VAR_9, ((void*)0), ((void*)0))))
        goto end;

    if (!VAR_13) {
        int VAR_15;

        if (VAR_12->list != ((void*)0))
            VAR_15 = FUNC_6(VAR_9, VAR_12->list, VAR_12->listlen);
        else
            VAR_15 = FUNC_7(VAR_9, VAR_12->liststr);
        if (!VAR_15) {
            if (VAR_12->valid)
                FUNC_8("Failure setting sigalgs in SSL (%d)\n", VAR_6);
            else
                VAR_11 = 1;
            goto end;
        }
        if (!VAR_12->valid)
            goto end;
    }

    if (!FUNC_9(FUNC_14(VAR_10, VAR_9,
                                           VAR_0),
                VAR_12->connsuccess))
        goto end;

    VAR_11 = 1;

 end:
    FUNC_5(VAR_10);
    FUNC_5(VAR_9);
    FUNC_1(VAR_8);
    FUNC_1(VAR_7);

    return VAR_11;
}
