
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vo {int dummy; } ;
struct mp_image_params {int dummy; } ;
struct m_property {int dummy; } ;
struct TYPE_4__ {struct vo* video_out; } ;
typedef TYPE_1__ MPContext ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 struct mp_image_params FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct mp_image_params*,int*,int*) ;
 int FUNC_2 (TYPE_1__*,struct m_property*,int,void*) ;
 int FUNC_3 (struct vo*,int ,int*) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, struct m_property *VAR_4,
                                    int VAR_5, void *VAR_6)
{
    MPContext *VAR_7 = VAR_3;
    struct vo *VAR_8 = VAR_7->video_out;
    if (!VAR_8)
        goto generic;

    struct mp_image_params VAR_9 = FUNC_0(VAR_7);
    int VAR_10, VAR_11;
    FUNC_1(&VAR_9, &VAR_10, &VAR_11);
    if (VAR_10 < 1 || VAR_11 < 1)
        goto generic;

    switch (VAR_5) {
    case 128: {
        double VAR_12 = *(double *)VAR_6;
        int VAR_13[2] = {VAR_10 * VAR_12, VAR_11 * VAR_12};
        if (VAR_13[0] > 0 && VAR_13[1] > 0)
            FUNC_3(VAR_8, VAR_2, VAR_13);
        goto generic;
    }
    case 129: {
        int VAR_14[2];
        if (FUNC_3(VAR_8, VAR_1, VAR_14) <= 0 ||
            VAR_14[0] < 1 || VAR_14[1] < 1)
            goto generic;
        double VAR_15 = (double)VAR_14[0] / VAR_10;
        double VAR_16 = (double)VAR_14[1] / VAR_11;
        *(double *)VAR_6 = (VAR_15 + VAR_16) / 2;
        return VAR_0;
    }
    }
generic:
    return FUNC_2(VAR_7, VAR_4, VAR_5, VAR_6);
}
