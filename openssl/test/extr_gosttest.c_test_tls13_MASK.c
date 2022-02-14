
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ certnum; scalar_t__ expected_prot; int cipher; } ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_11 (int *,int *,int **,int **,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(int VAR_7)
{
    SSL_CTX *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    SSL *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    int VAR_12 = 0;

    if (!FUNC_6(FUNC_10(FUNC_8(),
                                       FUNC_7(),
                                       VAR_1,
                                       0,
                                       &VAR_9, &VAR_8,
                                       VAR_4[VAR_7].certnum == 0 ? VAR_2
                                                                 : VAR_3,
                                       VAR_4[VAR_7].certnum == 0 ? VAR_5
                                                                 : VAR_6)))
        goto end;

    if (!FUNC_6(FUNC_1(VAR_8, VAR_4[VAR_7].cipher))
            || !FUNC_6(FUNC_1(VAR_9, VAR_4[VAR_7].cipher))
            || !FUNC_6(FUNC_11(VAR_9, VAR_8, &VAR_11, &VAR_10,
                                             ((void*)0), ((void*)0))))
        goto end;

    if (VAR_4[VAR_7].expected_prot == 0) {
        if (!FUNC_4(FUNC_9(VAR_11, VAR_10,
                                              VAR_0)))
            goto end;
    } else {
        if (!FUNC_6(FUNC_9(VAR_11, VAR_10,
                                             VAR_0))
                || !FUNC_5(FUNC_3(VAR_10),
                                VAR_4[VAR_7].expected_prot))
        goto end;
    }

    VAR_12 = 1;

 end:
    FUNC_2(VAR_11);
    FUNC_2(VAR_10);
    FUNC_0(VAR_9);
    FUNC_0(VAR_8);

    return VAR_12;
}
