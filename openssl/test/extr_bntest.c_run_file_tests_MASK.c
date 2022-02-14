
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ numpairs; int errors; int numtests; int fp; } ;
typedef TYPE_1__ STANZA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_10(int VAR_0)
{
    STANZA *VAR_1 = ((void*)0);
    char *VAR_2 = FUNC_7(VAR_0);
    int VAR_3;

    if (!FUNC_3(VAR_1 = FUNC_2(sizeof(*VAR_1))))
        return 0;
    if (!FUNC_9(VAR_1, VAR_2)) {
        FUNC_1(VAR_1);
        return 0;
    }


    while (!FUNC_0(VAR_1->fp) && FUNC_8(VAR_1)) {
        if (VAR_1->numpairs == 0)
            continue;
        if (!FUNC_4(VAR_1))
            VAR_1->errors++;
        VAR_1->numtests++;
        FUNC_5(VAR_1);
    }
    FUNC_6(VAR_1);
    VAR_3 = VAR_1->errors;
    FUNC_1(VAR_1);

    return VAR_3 == 0;
}
