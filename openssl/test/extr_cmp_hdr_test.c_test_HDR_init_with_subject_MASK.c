
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_4__ {int expected; int cmp_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int (*) (TYPE_1__*)) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(void)
{
    FUNC_2(VAR_0, VAR_4);
    X509_NAME *VAR_5 = ((void*)0);

    VAR_2->expected = 1;
    if (!FUNC_3(VAR_5 = FUNC_7())
        || !FUNC_4(FUNC_5(VAR_5, "CN", "Common Name"))
        || !FUNC_4(FUNC_1(VAR_2->cmp_ctx,
                                                    VAR_5))) {
        FUNC_8(VAR_2);
        VAR_2 = ((void*)0);
    }
    FUNC_6(VAR_5);
    FUNC_0(VAR_1, FUNC_8);
    return VAR_3;
}
