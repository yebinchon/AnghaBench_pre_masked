
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbg_kat {int flags; int type; } ;





 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drbg_kat const*) ;
 int FUNC_2 (struct drbg_kat const*) ;
 int FUNC_3 (struct drbg_kat const*) ;

__attribute__((used)) static int FUNC_4(const struct drbg_kat *VAR_1[], int VAR_2)
{
    const struct drbg_kat *VAR_3 = VAR_1[VAR_2];
    int VAR_4 = 0;







    switch (VAR_3->type) {
    case 130:
        if (!FUNC_1(VAR_3))
            goto err;
        break;
    case 129:
        if (!FUNC_2(VAR_3))
            goto err;
        break;
    case 128:
        if (!FUNC_3(VAR_3))
            goto err;
        break;
    default:
        goto err;
    }
    VAR_4 = 1;
err:
    return VAR_4;
}
