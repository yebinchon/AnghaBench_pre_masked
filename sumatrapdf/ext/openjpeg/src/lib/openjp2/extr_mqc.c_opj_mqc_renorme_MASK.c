
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int c; scalar_t__ ct; } ;
typedef TYPE_1__ opj_mqc_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(opj_mqc_t *VAR_0)
{
    do {
        VAR_0->a <<= 1;
        VAR_0->c <<= 1;
        VAR_0->ct--;
        if (VAR_0->ct == 0) {
            FUNC_0(VAR_0);
        }
    } while ((VAR_0->a & 0x8000) == 0);
}
