
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sk; } ;
typedef TYPE_1__ CRYPTO_EX_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,void*) ;

int FUNC_5(CRYPTO_EX_DATA *VAR_2, int VAR_3, void *VAR_4)
{
    int VAR_5;

    if (VAR_2->sk == ((void*)0)) {
        if ((VAR_2->sk = FUNC_1()) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
    }

    for (VAR_5 = FUNC_2(VAR_2->sk); VAR_5 <= VAR_3; ++VAR_5) {
        if (!FUNC_3(VAR_2->sk, ((void*)0))) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
    }
    FUNC_4(VAR_2->sk, VAR_3, VAR_4);
    return 1;
}
