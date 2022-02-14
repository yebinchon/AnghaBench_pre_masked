
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int num; int ptr; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,unsigned char,char const*,int) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_8(BIO *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    FUNC_5();

    if (FUNC_3(VAR_0)) {
        unsigned char VAR_4 = (intptr_t)VAR_0->ptr;
        VAR_3 = FUNC_6(VAR_0->num, VAR_4, VAR_1, VAR_2);
        if (VAR_3 >= 0) {
            VAR_3 = VAR_2;
            FUNC_0(VAR_0);
        }
    } else

        VAR_3 = FUNC_7(VAR_0->num, VAR_1, VAR_2);
    FUNC_1(VAR_0);
    if (VAR_3 <= 0) {
        if (FUNC_4(VAR_3))
            FUNC_2(VAR_0);
    }
    return VAR_3;
}
