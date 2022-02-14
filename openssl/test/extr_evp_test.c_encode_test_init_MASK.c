
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int encoding; } ;
struct TYPE_8__ {TYPE_2__* data; TYPE_2__* expected_err; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ ENCODE_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(EVP_TEST *VAR_3, const char *VAR_4)
{
    ENCODE_DATA *VAR_5;

    if (!FUNC_4(VAR_5 = FUNC_2(sizeof(*VAR_5))))
        return 0;
    if (FUNC_5(VAR_4, "canonical") == 0) {
        VAR_5->encoding = VAR_0;
    } else if (FUNC_5(VAR_4, "valid") == 0) {
        VAR_5->encoding = VAR_2;
    } else if (FUNC_5(VAR_4, "invalid") == 0) {
        VAR_5->encoding = VAR_1;
        if (!FUNC_4(VAR_3->expected_err = FUNC_1("DECODE_ERROR")))
            goto err;
    } else {
        FUNC_3("Bad encoding: %s."
                   " Should be one of {canonical, valid, invalid}",
                   VAR_4);
        goto err;
    }
    VAR_3->data = VAR_5;
    return 1;
err:
    FUNC_0(VAR_5);
    return 0;
}
