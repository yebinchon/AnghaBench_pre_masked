
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ version; scalar_t__ hash_alg; int sig_alg; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



int FUNC_0(const SCT *VAR_5)
{
    if (VAR_5->version == VAR_3) {
        if (VAR_5->hash_alg == VAR_4) {
            switch (VAR_5->sig_alg) {
            case 129:
                return VAR_0;
            case 128:
                return VAR_1;
            default:
                return VAR_2;
            }
        }
    }
    return VAR_2;
}
