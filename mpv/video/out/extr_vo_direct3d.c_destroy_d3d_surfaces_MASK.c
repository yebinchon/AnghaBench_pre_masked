
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct osdpart {int change_id; int texture; } ;
struct TYPE_6__ {int d3d_in_scene; int * d3d_backbuf; struct osdpart** osd; } ;
typedef TYPE_1__ d3d_priv ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_4(d3d_priv *VAR_1)
{
    FUNC_1(VAR_1, "destroy_d3d_surfaces called.\n");

    FUNC_2(VAR_1);

    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        struct osdpart *VAR_3 = VAR_1->osd[VAR_2];
        FUNC_3(VAR_1, &VAR_3->texture);
        VAR_3->change_id = -1;
    }

    if (VAR_1->d3d_backbuf)
        FUNC_0(VAR_1->d3d_backbuf);
    VAR_1->d3d_backbuf = ((void*)0);

    VAR_1->d3d_in_scene = 0;
}
