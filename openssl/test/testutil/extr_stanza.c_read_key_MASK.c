
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmpbuf ;
struct TYPE_3__ {int * key; int curr; int fp; } ;
typedef TYPE_1__ STANZA ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int FUNC_9(STANZA *VAR_0)
{
    char VAR_1[128];

    if (VAR_0->key == ((void*)0)) {
        if (!FUNC_7(VAR_0->key = FUNC_1(FUNC_4())))
            return 0;
    } else if (!FUNC_6(FUNC_3(VAR_0->key), 0)) {
        return 0;
    }


    while (FUNC_0(VAR_0->fp, VAR_1, sizeof(VAR_1))) {
        VAR_0->curr++;
        if (!FUNC_6(FUNC_2(VAR_0->key, VAR_1), 0))
            return 0;
        if (FUNC_8(VAR_1, "-----END", 8) == 0)
            return 1;
    }
    FUNC_5("Can't find key end");
    return 0;
}
