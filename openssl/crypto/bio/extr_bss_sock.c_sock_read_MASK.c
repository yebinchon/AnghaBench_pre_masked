
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    if (VAR_1 != ((void*)0)) {
        FUNC_4();

        if (FUNC_1(VAR_0))
            VAR_3 = FUNC_5(VAR_0->num, VAR_1, VAR_2);
        else

            VAR_3 = FUNC_6(VAR_0->num, VAR_1, VAR_2);
        FUNC_0(VAR_0);
        if (VAR_3 <= 0) {
            if (FUNC_3(VAR_3))
                FUNC_2(VAR_0);
        }
    }
    return VAR_3;
}
