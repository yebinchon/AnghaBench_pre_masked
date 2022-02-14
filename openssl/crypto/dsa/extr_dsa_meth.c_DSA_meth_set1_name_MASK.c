
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ DSA_METHOD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;

int FUNC_3(DSA_METHOD *VAR_2, const char *VAR_3)
{
    char *VAR_4 = FUNC_2(VAR_3);

    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    FUNC_1(VAR_2->name);
    VAR_2->name = VAR_4;

    return 1;
}
