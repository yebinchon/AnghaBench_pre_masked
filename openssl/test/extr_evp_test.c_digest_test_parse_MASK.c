
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int input; int output_len; int output; } ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ DIGEST_DATA ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,int *,int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(EVP_TEST *VAR_0,
                             const char *VAR_1, const char *VAR_2)
{
    DIGEST_DATA *VAR_3 = VAR_0->data;

    if (FUNC_4(VAR_1, "Input") == 0)
        return FUNC_0(VAR_2, &VAR_3->input);
    if (FUNC_4(VAR_1, "Output") == 0)
        return FUNC_3(VAR_2, &VAR_3->output, &VAR_3->output_len);
    if (FUNC_4(VAR_1, "Count") == 0)
        return FUNC_2(VAR_2, VAR_3->input);
    if (FUNC_4(VAR_1, "Ncopy") == 0)
        return FUNC_1(VAR_2, VAR_3->input);
    return 0;
}
