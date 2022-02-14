
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_mapper {int dummy; } ;
struct ra_hwdec {int dummy; } ;
struct mp_image {int params; } ;


 struct ra_hwdec_mapper* FUNC_0 (struct ra_hwdec*,int *) ;
 int FUNC_1 (struct ra_hwdec_mapper**) ;
 scalar_t__ FUNC_2 (struct ra_hwdec_mapper*,struct mp_image*) ;

__attribute__((used)) static bool FUNC_3(struct ra_hwdec *VAR_0, struct mp_image *VAR_1)
{
    bool VAR_2 = 0;
    struct ra_hwdec_mapper *VAR_3 = FUNC_0(VAR_0, &VAR_1->params);
    if (VAR_3)
        VAR_2 = FUNC_2(VAR_3, VAR_1) >= 0;
    FUNC_1(&VAR_3);
    return VAR_2;
}
