
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ RSA_METHOD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(RSA_METHOD *VAR_2, const char *VAR_3)
{
    char *VAR_4 = FUNC_1(VAR_3);

    if (VAR_4 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }

    FUNC_0(VAR_2->name);
    VAR_2->name = VAR_4;

    return 1;
}
