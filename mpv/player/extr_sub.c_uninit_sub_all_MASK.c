
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int num_tracks; int * tracks; } ;


 int FUNC_0 (struct MPContext*,int ) ;

void FUNC_1(struct MPContext *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_tracks; VAR_1++)
        FUNC_0(VAR_0, VAR_0->tracks[VAR_1]);
}
