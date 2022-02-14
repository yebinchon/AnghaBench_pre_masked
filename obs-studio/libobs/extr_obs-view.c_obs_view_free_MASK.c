
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_view {int channels_mutex; struct obs_source** channels; } ;
struct obs_source {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct obs_source**,int ,int) ;
 int FUNC_1 (struct obs_source*,int ) ;
 int FUNC_2 (struct obs_source*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct obs_view *VAR_2)
{
 if (!VAR_2)
  return;

 for (size_t VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct obs_source *VAR_4 = VAR_2->channels[VAR_3];
  if (VAR_4) {
   FUNC_1(VAR_4, VAR_0);
   FUNC_2(VAR_4);
  }
 }

 FUNC_0(VAR_2->channels, 0, sizeof(VAR_2->channels));
 FUNC_3(&VAR_2->channels_mutex);
}
