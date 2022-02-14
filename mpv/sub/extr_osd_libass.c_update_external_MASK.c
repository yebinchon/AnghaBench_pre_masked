
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct osd_style_opts {int dummy; } ;
struct osd_state {TYPE_1__* opts; } ;
struct osd_object {int dummy; } ;
struct TYPE_17__ {TYPE_12__* track; int res_y; int res_x; } ;
struct osd_external {TYPE_4__ ass; int res_y; int res_x; int text; } ;
struct TYPE_15__ {scalar_t__ len; } ;
typedef TYPE_2__ bstr ;
struct TYPE_16__ {struct osd_style_opts* defaults; } ;
struct TYPE_14__ {struct osd_style_opts const* osd_style; } ;
struct TYPE_13__ {int PlayResY; } ;


 int FUNC_0 (TYPE_12__*,char*,char*) ;
 TYPE_2__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__,char*,TYPE_2__*,TYPE_2__*) ;
 char* FUNC_3 (int *,TYPE_2__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct osd_state*,struct osd_object*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (int ,int,struct osd_style_opts const*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(struct osd_state *VAR_1, struct osd_object *VAR_2,
                            struct osd_external *VAR_3)
{
    bstr VAR_4 = FUNC_1(VAR_3->text);
    if (!VAR_4.len)
        return;
    VAR_3->ass.res_x = VAR_3->res_x;
    VAR_3->ass.res_y = VAR_3->res_y;
    FUNC_5(VAR_1, VAR_2, &VAR_3->ass);

    FUNC_4(&VAR_3->ass);

    int VAR_5 = VAR_3->ass.track->PlayResY;
    FUNC_7(FUNC_6(&VAR_3->ass, "OSD"), VAR_5, VAR_1->opts->osd_style);


    const struct osd_style_opts *VAR_6 = VAR_0.defaults;
    FUNC_7(FUNC_6(&VAR_3->ass, "Default"), VAR_5, VAR_6);

    while (VAR_4.len) {
        bstr VAR_7;
        FUNC_2(VAR_4, "\n", &VAR_7, &VAR_4);
        if (VAR_7.len) {
            char *VAR_8 = FUNC_3(((void*)0), VAR_7);
            FUNC_0(VAR_3->ass.track, "OSD", VAR_8);
            FUNC_8(VAR_8);
        }
    }
}
