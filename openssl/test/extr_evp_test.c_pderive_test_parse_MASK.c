
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int ctx; int output_len; int output; } ;
typedef TYPE_1__ PKEY_DATA ;
typedef TYPE_2__ EVP_TEST ;
typedef int EVP_PKEY ;


 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int **,char const*,int ) ;
 int FUNC_2 (char const*,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int ,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(EVP_TEST *VAR_1,
                              const char *VAR_2, const char *VAR_3)
{
    PKEY_DATA *VAR_4 = VAR_1->data;

    if (FUNC_4(VAR_2, "PeerKey") == 0) {
        EVP_PKEY *VAR_5;
        if (FUNC_1(&VAR_5, VAR_3, VAR_0) == 0)
            return -1;
        if (FUNC_0(VAR_4->ctx, VAR_5) <= 0)
            return -1;
        return 1;
    }
    if (FUNC_4(VAR_2, "SharedSecret") == 0)
        return FUNC_2(VAR_3, &VAR_4->output, &VAR_4->output_len);
    if (FUNC_4(VAR_2, "Ctrl") == 0)
        return FUNC_3(VAR_1, VAR_4->ctx, VAR_3);
    return 0;
}
