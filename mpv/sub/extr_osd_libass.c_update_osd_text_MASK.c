
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct osd_state {int dummy; } ;
struct TYPE_2__ {int track; } ;
struct osd_object {int * text; TYPE_1__ ass; } ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (struct osd_state*,struct osd_object*) ;

__attribute__((used)) static void FUNC_2(struct osd_state *VAR_0, struct osd_object *VAR_1)
{

    if (!VAR_1->text[0])
        return;

    FUNC_1(VAR_0, VAR_1);
    FUNC_0(VAR_1->ass.track, "OSD", VAR_1->text);
}
