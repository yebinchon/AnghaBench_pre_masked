
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int dummy; } ;
struct bstr {scalar_t__ len; } ;


 int FUNC_0 (struct bstr,struct bstr*) ;
 int FUNC_1 (struct input_ctx*,int) ;

void FUNC_2(struct input_ctx *VAR_0, int VAR_1, struct bstr VAR_2)
{
    while (VAR_2.len) {
        int VAR_3 = FUNC_0(VAR_2, &VAR_2);
        if (VAR_3 < 0)
            break;
        FUNC_1(VAR_0, VAR_3 | VAR_1);
    }
}
