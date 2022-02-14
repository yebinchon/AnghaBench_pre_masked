
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_osd_res {int display_par; int h; int w; } ;
struct ass_state {int track; int render; } ;
typedef int ASS_Image ;


 int * FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,int ,double) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct ass_state*,struct mp_osd_res*) ;

__attribute__((used)) static void FUNC_4(struct ass_state *VAR_0, struct mp_osd_res *VAR_1,
                       ASS_Image **VAR_2, bool *VAR_3)
{
    if (!VAR_0->render || !VAR_0->track) {
        *VAR_2 = ((void*)0);
        return;
    }

    FUNC_3(VAR_0, VAR_1);

    FUNC_2(VAR_0->render, VAR_1->w, VAR_1->h);
    FUNC_1(VAR_0->render, VAR_1->display_par, 1.0);

    int VAR_4;
    *VAR_2 = FUNC_0(VAR_0->render, VAR_0->track, 0, &VAR_4);
    *VAR_3 |= VAR_4;
}
