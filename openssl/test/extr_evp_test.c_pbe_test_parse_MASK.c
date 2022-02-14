
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* data; } ;
struct TYPE_7__ {scalar_t__ pbe_type; int key_len; int key; int salt_len; int salt; int pass_len; int pass; } ;
typedef TYPE_1__ PBE_DATA ;
typedef TYPE_2__ EVP_TEST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,int *,int *) ;
 int FUNC_1 (TYPE_2__*,char const*,char const*) ;
 int FUNC_2 (TYPE_2__*,char const*,char const*) ;
 int FUNC_3 (TYPE_2__*,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(EVP_TEST *VAR_3,
                          const char *VAR_4, const char *VAR_5)
{
    PBE_DATA *VAR_6 = VAR_3->data;

    if (FUNC_4(VAR_4, "Password") == 0)
        return FUNC_0(VAR_5, &VAR_6->pass, &VAR_6->pass_len);
    if (FUNC_4(VAR_4, "Salt") == 0)
        return FUNC_0(VAR_5, &VAR_6->salt, &VAR_6->salt_len);
    if (FUNC_4(VAR_4, "Key") == 0)
        return FUNC_0(VAR_5, &VAR_6->key, &VAR_6->key_len);
    if (VAR_6->pbe_type == VAR_0)
        return FUNC_1(VAR_3, VAR_4, VAR_5);
    else if (VAR_6->pbe_type == VAR_1)
        return FUNC_2(VAR_3, VAR_4, VAR_5);

    else if (VAR_6->pbe_type == VAR_2)
        return FUNC_3(VAR_3, VAR_4, VAR_5);

    return 0;
}
