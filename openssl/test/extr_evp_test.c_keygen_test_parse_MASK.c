
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int genctx; int keyname; } ;
typedef TYPE_1__ KEYGEN_TEST_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(EVP_TEST *VAR_0,
                             const char *VAR_1, const char *VAR_2)
{
    KEYGEN_TEST_DATA *VAR_3 = VAR_0->data;

    if (FUNC_3(VAR_1, "KeyName") == 0)
        return FUNC_1(VAR_3->keyname = FUNC_0(VAR_2));
    if (FUNC_3(VAR_1, "Ctrl") == 0)
        return FUNC_2(VAR_0, VAR_3->genctx, VAR_2);
    return 0;
}
