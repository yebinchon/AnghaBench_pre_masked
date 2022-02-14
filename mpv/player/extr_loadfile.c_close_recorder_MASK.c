
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int num_tracks; int * recorder; int * tracks; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct MPContext *VAR_0)
{
    if (!VAR_0->recorder)
        return;

    for (int VAR_1 = 0; VAR_1 < VAR_0->num_tracks; VAR_1++)
        FUNC_1(VAR_0->tracks[VAR_1], ((void*)0));

    FUNC_0(VAR_0->recorder);
    VAR_0->recorder = ((void*)0);
}
