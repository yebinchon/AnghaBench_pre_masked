
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int ctx; int output_len; int output; int input_len; int input; } ;
typedef TYPE_1__ PKEY_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (char const*,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(EVP_TEST *VAR_0,
                           const char *VAR_1, const char *VAR_2)
{
    PKEY_DATA *VAR_3 = VAR_0->data;
    if (FUNC_2(VAR_1, "Input") == 0)
        return FUNC_0(VAR_2, &VAR_3->input, &VAR_3->input_len);
    if (FUNC_2(VAR_1, "Output") == 0)
        return FUNC_0(VAR_2, &VAR_3->output, &VAR_3->output_len);
    if (FUNC_2(VAR_1, "Ctrl") == 0)
        return FUNC_1(VAR_0, VAR_3->ctx, VAR_2);
    return 0;
}
