
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expected; scalar_t__ input; } ;
typedef TYPE_1__ TESTDATA ;
typedef int MDC2_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int,unsigned char*,int) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_6(int VAR_2)
{
    unsigned char VAR_3[VAR_0];
    MDC2_CTX VAR_4;
    const TESTDATA VAR_5 = VAR_1[VAR_2];

    FUNC_1(&VAR_4);
    FUNC_2(&VAR_4, (const unsigned char *)VAR_5.input,
                FUNC_5(VAR_5.input));
    FUNC_0(&(VAR_3[0]), &VAR_4);

    if (!FUNC_4(VAR_5.expected, VAR_0,
                     VAR_3, VAR_0)) {
        FUNC_3("mdc2 test %d: unexpected output", VAR_2);
        return 0;
    }

    return 1;
}
