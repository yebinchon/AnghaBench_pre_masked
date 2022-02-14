
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int controls; int output_len; int output; int input_len; int input; int alg; int salt_len; int salt; int custom_len; int custom; int iv_len; int iv; int key_len; int key; } ;
typedef TYPE_1__ MAC_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(EVP_TEST *VAR_0,
                          const char *VAR_1, const char *VAR_2)
{
    MAC_DATA *VAR_3 = VAR_0->data;

    if (FUNC_3(VAR_1, "Key") == 0)
        return FUNC_1(VAR_2, &VAR_3->key, &VAR_3->key_len);
    if (FUNC_3(VAR_1, "IV") == 0)
        return FUNC_1(VAR_2, &VAR_3->iv, &VAR_3->iv_len);
    if (FUNC_3(VAR_1, "Custom") == 0)
        return FUNC_1(VAR_2, &VAR_3->custom, &VAR_3->custom_len);
    if (FUNC_3(VAR_1, "Salt") == 0)
        return FUNC_1(VAR_2, &VAR_3->salt, &VAR_3->salt_len);
    if (FUNC_3(VAR_1, "Algorithm") == 0) {
        VAR_3->alg = FUNC_0(VAR_2);
        if (!VAR_3->alg)
            return -1;
        return 1;
    }
    if (FUNC_3(VAR_1, "Input") == 0)
        return FUNC_1(VAR_2, &VAR_3->input, &VAR_3->input_len);
    if (FUNC_3(VAR_1, "Output") == 0)
        return FUNC_1(VAR_2, &VAR_3->output, &VAR_3->output_len);
    if (FUNC_3(VAR_1, "Ctrl") == 0)
        return FUNC_2(VAR_3->controls,
                                      FUNC_0(VAR_2)) != 0;
    return 0;
}
