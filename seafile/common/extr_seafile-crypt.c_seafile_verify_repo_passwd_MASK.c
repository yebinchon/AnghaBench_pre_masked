
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int str; } ;
typedef TYPE_1__ GString ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (unsigned char*,char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ,int,char const*,unsigned char*,unsigned char*) ;

int
FUNC_7 (const char *VAR_1,
                            const char *VAR_2,
                            const char *VAR_3,
                            int VAR_4,
                            const char *VAR_5)
{
    GString *VAR_6 = FUNC_3 (((void*)0));
    unsigned char VAR_7[32], VAR_8[16];
    char VAR_9[65];

    if (VAR_4 != 1 && VAR_4 != 2 && VAR_4 != 3) {
        FUNC_5 ("Unsupported enc_version %d.\n", VAR_4);
        return -1;
    }


    FUNC_1 (VAR_6, "%s%s", VAR_1, VAR_2);

    FUNC_6 (VAR_6->str, VAR_6->len, VAR_4, VAR_5, VAR_7, VAR_8);

    FUNC_2 (VAR_6, VAR_0);

    if (VAR_4 >= 2)
        FUNC_4 (VAR_7, VAR_9, 32);
    else
        FUNC_4 (VAR_7, VAR_9, 16);

    if (FUNC_0 (VAR_9, VAR_3) == 0)
        return 0;
    else
        return -1;
}
