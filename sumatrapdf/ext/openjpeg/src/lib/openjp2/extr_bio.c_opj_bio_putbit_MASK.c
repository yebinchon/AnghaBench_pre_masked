
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ct; int buf; } ;
typedef TYPE_1__ opj_bio_t ;
typedef int OPJ_UINT32 ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(opj_bio_t *VAR_0, OPJ_UINT32 VAR_1)
{
    if (VAR_0->ct == 0) {
        FUNC_0(
            VAR_0);
    }
    VAR_0->ct--;
    VAR_0->buf |= VAR_1 << VAR_0->ct;
}
