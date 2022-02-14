
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int num_next_frames; int * next_frames; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct MPContext *VAR_0)
{
    if (VAR_0->num_next_frames < 1)
        return;
    FUNC_0(VAR_0->next_frames[0]);
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_next_frames - 1; VAR_1++)
        VAR_0->next_frames[VAR_1] = VAR_0->next_frames[VAR_1 + 1];
    VAR_0->num_next_frames -= 1;
}
