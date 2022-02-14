
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int ctx; int output_len; int output; } ;
typedef TYPE_1__ KDF_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (TYPE_2__*,int ,char const*) ;
 int FUNC_1 (char const*,int *,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_4(EVP_TEST *VAR_0,
                          const char *VAR_1, const char *VAR_2)
{
    KDF_DATA *VAR_3 = VAR_0->data;

    if (FUNC_2(VAR_1, "Output") == 0)
        return FUNC_1(VAR_2, &VAR_3->output, &VAR_3->output_len);
    if (FUNC_3(VAR_1, "Ctrl", 4) == 0)
        return FUNC_0(VAR_0, VAR_3->ctx, VAR_2);
    return 0;
}
