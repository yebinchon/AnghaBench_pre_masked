
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int total_renegotiations; int num_renegotiations; scalar_t__ renegotiate; } ;
struct TYPE_7__ {TYPE_1__ s3; int rlayer; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(SSL *VAR_0, int VAR_1)
{
    int VAR_2 = 0;

    if (VAR_0->s3.renegotiate) {
        if (!FUNC_0(&VAR_0->rlayer)
            && !FUNC_1(&VAR_0->rlayer)
            && (VAR_1 || !FUNC_2(VAR_0))) {





            FUNC_3(VAR_0);
            VAR_0->s3.renegotiate = 0;
            VAR_0->s3.num_renegotiations++;
            VAR_0->s3.total_renegotiations++;
            VAR_2 = 1;
        }
    }
    return VAR_2;
}
