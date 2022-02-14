
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap_sel {int member_0; } ;
struct ao {int channels; } ;
typedef int pa_channel_map ;


 scalar_t__ FUNC_0 (struct ao*,struct mp_chmap_sel*,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct mp_chmap_sel*,int) ;
 int** VAR_0 ;

__attribute__((used)) static bool FUNC_3(struct ao *VAR_1, pa_channel_map *VAR_2)
{
    struct mp_chmap_sel VAR_3 = {0};
    for (int VAR_4 = 0; VAR_0[VAR_4][1] != -1; VAR_4++)
        FUNC_2(&VAR_3, VAR_0[VAR_4][1]);
    return FUNC_0(VAR_1, &VAR_3, &VAR_1->channels) &&
           FUNC_1(VAR_2, &VAR_1->channels);
}
