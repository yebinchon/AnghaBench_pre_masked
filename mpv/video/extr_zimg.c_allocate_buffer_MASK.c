
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h; int w; } ;
struct mp_zimg_repack {int* zmask; TYPE_3__* tmp; TYPE_1__ fmt; int zimgfmt; scalar_t__ pack; } ;
struct mp_zimg_context {int zimg_graph; } ;
struct TYPE_6__ {int num_planes; int* ys; } ;
struct TYPE_7__ {TYPE_2__ fmt; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mp_zimg_repack*,TYPE_3__*) ;
 int FUNC_4 (int ,unsigned int*) ;
 int FUNC_5 (int ,unsigned int*) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static bool FUNC_7(struct mp_zimg_context *VAR_1,
                            struct mp_zimg_repack *VAR_2)
{
    unsigned VAR_3 = 0;
    int VAR_4;
    if (VAR_2->pack) {
        VAR_4 = FUNC_5(VAR_1->zimg_graph, &VAR_3);
    } else {
        VAR_4 = FUNC_4(VAR_1->zimg_graph, &VAR_3);
    }

    if (VAR_4)
        return 0;

    VAR_2->zmask[0] = FUNC_6(VAR_3);


    FUNC_1(VAR_2->zmask[0] == VAR_0 || FUNC_0(VAR_2->zmask[0] + 1));

    int VAR_5 = VAR_2->zmask[0] == VAR_0 ? VAR_2->fmt.h : VAR_2->zmask[0] + 1;
    if (VAR_5 >= VAR_2->fmt.h) {
        VAR_5 = VAR_2->fmt.h;
        VAR_2->zmask[0] = VAR_0;
    }

    VAR_2->tmp = FUNC_2(VAR_2->zimgfmt, VAR_2->fmt.w, VAR_5);
    FUNC_3(VAR_2, VAR_2->tmp);

    if (VAR_2->tmp) {
        for (int VAR_6 = 1; VAR_6 < VAR_2->tmp->fmt.num_planes; VAR_6++) {
            VAR_2->zmask[VAR_6] = VAR_2->zmask[0];
            if (VAR_2->zmask[0] != VAR_0)
                VAR_2->zmask[VAR_6] = VAR_2->zmask[VAR_6] >> VAR_2->tmp->fmt.ys[VAR_6];
        }
    }

    return !!VAR_2->tmp;
}
