
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* param; } ;
typedef TYPE_2__ X509_STORE_CTX ;
struct TYPE_8__ {int trust; } ;
typedef TYPE_3__ X509_PURPOSE ;
struct TYPE_6__ {int purpose; int trust; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(X509_STORE_CTX *VAR_4, int VAR_5,
                                   int VAR_6, int VAR_7)
{
    int VAR_8;

    if (VAR_6 == 0)
        VAR_6 = VAR_5;

    if (VAR_6 != 0) {
        X509_PURPOSE *VAR_9;
        VAR_8 = FUNC_1(VAR_6);
        if (VAR_8 == -1) {
            FUNC_3(VAR_0,
                    VAR_1);
            return 0;
        }
        VAR_9 = FUNC_0(VAR_8);
        if (VAR_9->trust == VAR_3) {
            VAR_8 = FUNC_1(VAR_5);





            if (VAR_8 == -1) {
                FUNC_3(VAR_0,
                        VAR_1);
                return 0;
            }
            VAR_9 = FUNC_0(VAR_8);
        }

        if (!VAR_7)
            VAR_7 = VAR_9->trust;
    }
    if (VAR_7) {
        VAR_8 = FUNC_2(VAR_7);
        if (VAR_8 == -1) {
            FUNC_3(VAR_0,
                    VAR_2);
            return 0;
        }
    }

    if (VAR_6 && !VAR_4->param->purpose)
        VAR_4->param->purpose = VAR_6;
    if (VAR_7 && !VAR_4->param->trust)
        VAR_4->param->trust = VAR_7;
    return 1;
}
