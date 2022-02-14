
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ numpairs; int curr; int fp; } ;
typedef TYPE_1__ STANZA ;
typedef int PARAM_CONVERSION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char const*) ;

__attribute__((used)) static int FUNC_11(int VAR_0)
{
    STANZA *VAR_1;
    PARAM_CONVERSION VAR_2;
    const char *VAR_3 = FUNC_8(VAR_0);
    int VAR_4 = 1;

    if (!FUNC_3(VAR_1 = FUNC_2(sizeof(*VAR_1))))
        return 0;
    if (!FUNC_10(VAR_1, VAR_3)) {
        FUNC_1(VAR_1);
        return 0;
    }

    while (!FUNC_0(VAR_1->fp)) {
        if (!FUNC_9(VAR_1)) {
            VAR_4 = 0;
            goto end;
        }
        if (VAR_1->numpairs != 0)
            if (!FUNC_4(&VAR_2, VAR_1)
                || !FUNC_5(&VAR_2, VAR_1->curr))
                VAR_4 = 0;
        FUNC_6(VAR_1);
    }
end:
    FUNC_7(VAR_1);
    FUNC_1(VAR_1);
    return VAR_4;
}
