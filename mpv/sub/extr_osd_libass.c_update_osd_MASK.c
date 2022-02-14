
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {int dummy; } ;
struct osd_object {int osd_changed; int ass; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct osd_state*,struct osd_object*) ;
 int FUNC_2 (struct osd_state*,struct osd_object*) ;

__attribute__((used)) static void FUNC_3(struct osd_state *VAR_0, struct osd_object *VAR_1)
{
    VAR_1->osd_changed = 0;
    FUNC_0(&VAR_1->ass);
    FUNC_1(VAR_0, VAR_1);
    FUNC_2(VAR_0, VAR_1);
}
