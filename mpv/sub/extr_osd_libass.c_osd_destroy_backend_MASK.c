
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {struct osd_object** objs; } ;
struct osd_object {int num_externals; int * externals; int ass; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct osd_state *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        struct osd_object *VAR_3 = VAR_1->objs[VAR_2];
        FUNC_0(&VAR_3->ass);
        for (int VAR_4 = 0; VAR_4 < VAR_3->num_externals; VAR_4++)
            FUNC_1(&VAR_3->externals[VAR_4]);
        VAR_3->num_externals = 0;
    }
}
