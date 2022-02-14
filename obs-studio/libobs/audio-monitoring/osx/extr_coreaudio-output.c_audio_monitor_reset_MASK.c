
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_monitor {int * source; } ;
typedef int obs_source_t ;


 int FUNC_0 (struct audio_monitor*) ;
 int FUNC_1 (struct audio_monitor*,int *) ;
 int FUNC_2 (struct audio_monitor*) ;
 int FUNC_3 (struct audio_monitor*,int ,int) ;

void FUNC_4(struct audio_monitor *VAR_0)
{
 bool VAR_1;

 obs_source_t *VAR_2 = VAR_0->source;
 FUNC_0(VAR_0);
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));

 VAR_1 = FUNC_1(VAR_0, VAR_2);
 if (VAR_1)
  FUNC_2(VAR_0);
}
