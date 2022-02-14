
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vo {int dummy; } ;
struct TYPE_7__ {TYPE_4__* scaler; scalar_t__ interpolation; } ;
struct gl_video {TYPE_3__ opts; } ;
struct TYPE_5__ {double radius; } ;
struct filter_kernel {TYPE_1__ f; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_8__ {double radius; TYPE_2__ kernel; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (double) ;
 int FUNC_1 (struct gl_video*) ;
 struct filter_kernel* FUNC_2 (int ) ;
 int FUNC_3 (struct vo*,int ,int) ;

void FUNC_4(struct gl_video *VAR_1, struct vo *VAR_2)
{
    FUNC_1(VAR_1);

    int VAR_3 = 1;



    if (VAR_1->opts.interpolation) {
        const struct filter_kernel *VAR_4 =
            FUNC_2(VAR_1->opts.scaler[VAR_0].kernel.name);
        if (VAR_4) {



            double VAR_5 = VAR_4->f.radius;
            VAR_5 = VAR_5 > 0 ? VAR_5 : VAR_1->opts.scaler[VAR_0].radius;
            VAR_3 += 1 + FUNC_0(VAR_5);
        } else {

            VAR_3 += 2;
        }
    }

    FUNC_3(VAR_2, 0, VAR_3);
}
