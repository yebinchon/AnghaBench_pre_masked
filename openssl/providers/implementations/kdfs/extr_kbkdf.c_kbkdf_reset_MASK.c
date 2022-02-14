
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iv_len; int iv; int ki_len; int ki; int label_len; int label; int context_len; int context; int ctx_init; } ;
typedef TYPE_1__ KBKDF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    KBKDF *VAR_1 = (KBKDF *)VAR_0;

    FUNC_0(VAR_1->ctx_init);
    FUNC_1(VAR_1->context, VAR_1->context_len);
    FUNC_1(VAR_1->label, VAR_1->label_len);
    FUNC_1(VAR_1->ki, VAR_1->ki_len);
    FUNC_1(VAR_1->iv, VAR_1->iv_len);
    FUNC_2(VAR_1, 0, sizeof(*VAR_1));
}
