
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_view {int channels_mutex; int * channels; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct obs_view *VAR_1)
{
 if (!VAR_1)
  return;

 for (size_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->channels[VAR_2]);

 FUNC_0(VAR_1->channels, 0, sizeof(VAR_1->channels));
 FUNC_2(&VAR_1->channels_mutex);
}
