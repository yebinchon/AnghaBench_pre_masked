
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int int_val; } ;
struct TYPE_10__ {TYPE_1__ v; } ;
typedef TYPE_2__ PROPERTY_DEFINITION ;
typedef int OPENSSL_CTX ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const**,TYPE_2__*) ;
 int FUNC_3 (char const**,TYPE_2__*) ;
 int FUNC_4 (char const**,TYPE_2__*) ;
 int FUNC_5 (int *,char const**,char const,TYPE_2__*,int) ;
 int FUNC_6 (int *,char const**,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_7(OPENSSL_CTX *VAR_0, const char *VAR_1[],
                       PROPERTY_DEFINITION *VAR_2, int VAR_3)
{
    const char *VAR_4 = *VAR_1;
    int VAR_5 = 0;

    if (*VAR_4 == '"' || *VAR_4 == '\'') {
        VAR_4++;
        VAR_5 = FUNC_5(VAR_0, &VAR_4, VAR_4[-1], VAR_2, VAR_3);
    } else if (*VAR_4 == '+') {
        VAR_4++;
        VAR_5 = FUNC_3(&VAR_4, VAR_2);
    } else if (*VAR_4 == '-') {
        VAR_4++;
        VAR_5 = FUNC_3(&VAR_4, VAR_2);
        VAR_2->v.int_val = -VAR_2->v.int_val;
    } else if (*VAR_4 == '0' && VAR_4[1] == 'x') {
        VAR_4 += 2;
        VAR_5 = FUNC_2(&VAR_4, VAR_2);
    } else if (*VAR_4 == '0' && FUNC_1(VAR_4[1])) {
        VAR_4++;
        VAR_5 = FUNC_4(&VAR_4, VAR_2);
    } else if (FUNC_1(*VAR_4)) {
        return FUNC_3(VAR_1, VAR_2);
    } else if (FUNC_0(*VAR_4))
        return FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_5)
        *VAR_1 = VAR_4;
    return VAR_5;
}
