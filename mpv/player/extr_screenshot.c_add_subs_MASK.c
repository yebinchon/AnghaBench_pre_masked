
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_osd_res {int dummy; } ;
struct mp_image {int params; } ;
struct MPContext {int video_pts; int osd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mp_osd_res,int ,int ,struct mp_image*) ;
 struct mp_osd_res FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct MPContext *VAR_1, struct mp_image *VAR_2)
{
    struct mp_osd_res VAR_3 = FUNC_1(&VAR_2->params);
    FUNC_0(VAR_1->osd, VAR_3, VAR_1->video_pts,
                      VAR_0, VAR_2);
}
