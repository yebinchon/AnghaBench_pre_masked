
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; scalar_t__ ct; } ;
typedef TYPE_1__ opj_bio_t ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

OPJ_BOOL FUNC_1(opj_bio_t *VAR_2)
{
    if ((VAR_2->buf & 0xff) == 0xff) {
        if (! FUNC_0(VAR_2)) {
            return VAR_0;
        }
    }
    VAR_2->ct = 0;
    return VAR_1;
}
