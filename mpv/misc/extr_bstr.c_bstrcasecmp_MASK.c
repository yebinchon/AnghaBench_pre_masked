
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {scalar_t__ len; int start; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct bstr VAR_0, struct bstr VAR_1)
{
    int VAR_2 = 0;
    if (VAR_0 && VAR_1)
        VAR_2 = FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_0, VAR_1));

    if (!VAR_2) {
        if (VAR_0 == VAR_1)
            return 0;
        else if (VAR_0 > VAR_1)
            return 1;
        else
            return -1;
    }
    return VAR_2;
}
