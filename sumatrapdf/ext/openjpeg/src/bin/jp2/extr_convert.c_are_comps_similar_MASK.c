
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_4__ {scalar_t__ dx; scalar_t__ dy; scalar_t__ prec; scalar_t__ sgnd; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(opj_image_t * VAR_2)
{
    unsigned int VAR_3;
    for (VAR_3 = 1; VAR_3 < VAR_2->numcomps; VAR_3++) {
        if (VAR_2->comps[0].dx != VAR_2->comps[VAR_3].dx ||
                VAR_2->comps[0].dy != VAR_2->comps[VAR_3].dy ||
                (VAR_3 <= 2 &&
                 (VAR_2->comps[0].prec != VAR_2->comps[VAR_3].prec ||
                  VAR_2->comps[0].sgnd != VAR_2->comps[VAR_3].sgnd))) {
            return VAR_0;
        }
    }
    return VAR_1;
}
