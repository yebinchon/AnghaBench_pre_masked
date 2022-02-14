
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int start; int test_file; } ;
typedef TYPE_1__ STANZA ;
typedef int BIGNUM ;


 int FUNC_0 (char*,char const*,...) ;
 char* FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (int **,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static BIGNUM *FUNC_4(STANZA *VAR_0, const char *VAR_1)
{
    const char *VAR_2;
    BIGNUM *VAR_3 = ((void*)0);

    if ((VAR_2 = FUNC_1(VAR_0, VAR_1)) == ((void*)0)) {
        FUNC_0("%s:%d: Can't find %s", VAR_0->test_file, VAR_0->start, VAR_1);
        return ((void*)0);
    }

    if (FUNC_2(&VAR_3, VAR_2) != (int)FUNC_3(VAR_2)) {
        FUNC_0("Could not decode '%s'", VAR_2);
        return ((void*)0);
    }
    return VAR_3;
}
