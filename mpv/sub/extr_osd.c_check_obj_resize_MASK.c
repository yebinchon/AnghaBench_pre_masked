
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct osd_state {TYPE_1__* global; } ;
struct mp_osd_res {int dummy; } ;
struct osd_object {struct mp_osd_res vo_res; } ;
struct TYPE_2__ {int client_api; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct mp_osd_res,struct mp_osd_res) ;

__attribute__((used)) static void FUNC_3(struct osd_state *VAR_1, struct mp_osd_res VAR_2,
                             struct osd_object *VAR_3)
{
    if (!FUNC_2(VAR_2, VAR_3->vo_res)) {
        VAR_3->vo_res = VAR_2;
        FUNC_1(FUNC_0(VAR_1->global->client_api),
                                  VAR_0, ((void*)0));
    }
}
