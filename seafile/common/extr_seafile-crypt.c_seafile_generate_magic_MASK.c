
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int str; } ;
typedef TYPE_1__ GString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (unsigned char*,char*,int) ;
 int FUNC_4 (int ,int ,int,char const*,unsigned char*,unsigned char*) ;

void
FUNC_5 (int VAR_1, const char *VAR_2,
                        const char *VAR_3,
                        const char *VAR_4,
                        char *VAR_5)
{
    GString *VAR_6 = FUNC_2 (((void*)0));
    unsigned char VAR_7[32], VAR_8[16];





    FUNC_0 (VAR_6, "%s%s", VAR_2, VAR_3);

    FUNC_4 (VAR_6->str, VAR_6->len, VAR_1, VAR_4, VAR_7, VAR_8);

    FUNC_1 (VAR_6, VAR_0);
    FUNC_3 (VAR_7, VAR_5, 32);
}
