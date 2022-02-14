
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int output_len; int output; int input_len; int input; } ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ ENCODE_DATA ;


 int FUNC_0 (char const*,int *,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(EVP_TEST *VAR_0,
                             const char *VAR_1, const char *VAR_2)
{
    ENCODE_DATA *VAR_3 = VAR_0->data;

    if (FUNC_1(VAR_1, "Input") == 0)
        return FUNC_0(VAR_2, &VAR_3->input, &VAR_3->input_len);
    if (FUNC_1(VAR_1, "Output") == 0)
        return FUNC_0(VAR_2, &VAR_3->output, &VAR_3->output_len);
    return 0;
}
