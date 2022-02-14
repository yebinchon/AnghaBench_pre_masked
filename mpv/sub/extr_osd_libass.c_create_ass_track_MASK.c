
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct osd_state {int dummy; } ;
struct osd_object {int vo_res; } ;
struct ass_state {int library; TYPE_1__* track; } ;
struct TYPE_3__ {int Timer; int WrapStyle; int Kerning; int track_type; } ;
typedef TYPE_1__ ASS_Track ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct osd_state*,struct ass_state*) ;
 int FUNC_2 (struct ass_state*,int *) ;

__attribute__((used)) static void FUNC_3(struct osd_state *VAR_1, struct osd_object *VAR_2,
                             struct ass_state *VAR_3)
{
    FUNC_1(VAR_1, VAR_3);

    ASS_Track *VAR_4 = VAR_3->track;
    if (!VAR_4)
        VAR_4 = VAR_3->track = FUNC_0(VAR_3->library);

    VAR_4->track_type = VAR_0;
    VAR_4->Timer = 100.;
    VAR_4->WrapStyle = 1;
    VAR_4->Kerning = 1;

    FUNC_2(VAR_3, &VAR_2->vo_res);
}
