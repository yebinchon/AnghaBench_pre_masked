
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * pctx; int input; scalar_t__ is_oneshot; int output_len; int output; int osin_len; int osin; int md; int ctx; scalar_t__ is_verify; } ;
struct TYPE_5__ {int skip; char* err; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef int EVP_PKEY ;
typedef TYPE_2__ DIGESTSIGN_DATA ;


 int FUNC_0 (int ,int **,int ,int *,int *) ;
 int FUNC_1 (int ,int **,int ,int *,int *) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (int **,char const*,int ) ;
 int FUNC_6 (char const*,int *,int *) ;
 int FUNC_7 (TYPE_1__*,int *,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(EVP_TEST *VAR_2,
                                   const char *VAR_3, const char *VAR_4)
{
    DIGESTSIGN_DATA *VAR_5 = VAR_2->data;

    if (FUNC_8(VAR_3, "Key") == 0) {
        EVP_PKEY *VAR_6 = ((void*)0);
        int VAR_7 = 0;

        if (VAR_5->is_verify)
            VAR_7 = FUNC_5(&VAR_6, VAR_4, VAR_1);
        if (VAR_7 == 0)
            VAR_7 = FUNC_5(&VAR_6, VAR_4, VAR_0);
        if (VAR_7 == 0 || VAR_6 == ((void*)0)) {
            VAR_2->skip = 1;
            return 1;
        }
        if (VAR_5->is_verify) {
            if (!FUNC_1(VAR_5->ctx, &VAR_5->pctx, VAR_5->md,
                                      ((void*)0), VAR_6))
                VAR_2->err = "DIGESTVERIFYINIT_ERROR";
            return 1;
        }
        if (!FUNC_0(VAR_5->ctx, &VAR_5->pctx, VAR_5->md, ((void*)0),
                                VAR_6))
            VAR_2->err = "DIGESTSIGNINIT_ERROR";
        return 1;
    }

    if (FUNC_8(VAR_3, "Input") == 0) {
        if (VAR_5->is_oneshot)
            return FUNC_6(VAR_4, &VAR_5->osin, &VAR_5->osin_len);
        return FUNC_2(VAR_4, &VAR_5->input);
    }
    if (FUNC_8(VAR_3, "Output") == 0)
        return FUNC_6(VAR_4, &VAR_5->output, &VAR_5->output_len);

    if (!VAR_5->is_oneshot) {
        if (FUNC_8(VAR_3, "Count") == 0)
            return FUNC_4(VAR_4, VAR_5->input);
        if (FUNC_8(VAR_3, "Ncopy") == 0)
            return FUNC_3(VAR_4, VAR_5->input);
    }
    if (FUNC_8(VAR_3, "Ctrl") == 0) {
        if (VAR_5->pctx == ((void*)0))
            return -1;
        return FUNC_7(VAR_2, VAR_5->pctx, VAR_4);
    }
    return 0;
}
