
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* readable; int asn1; } ;
typedef int BIO ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char**) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,char const*,int) ;
 scalar_t__ FUNC_10 (char const*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_11(int VAR_1)
{
    BIO *VAR_2;
    int VAR_3 = 0, VAR_4;
    char *VAR_5;
    const char *VAR_6;

    if (!FUNC_7(VAR_2 = FUNC_3(FUNC_4())))
        goto err;

    VAR_4 = FUNC_0(VAR_2, &VAR_0[VAR_1].asn1);
    VAR_6 = VAR_0[VAR_1].readable;

    if (VAR_4 == 0 && !FUNC_8(VAR_6, "Bad time value")) {

        goto err;
    }
    if (!FUNC_6(VAR_4 = FUNC_2(VAR_2, &VAR_5), 0)
        || !FUNC_5(VAR_4, (int)FUNC_10(VAR_6))
        || !FUNC_9(VAR_5, VAR_6, VAR_4))
        goto err;

    VAR_3 = 1;
 err:
    FUNC_1(VAR_2);
    return VAR_3;
}
