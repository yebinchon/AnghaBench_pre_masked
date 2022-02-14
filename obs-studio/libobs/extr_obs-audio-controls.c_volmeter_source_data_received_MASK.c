
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_volmeter {float* magnitude; float* peak; int mutex; int cur_db; } ;
struct audio_data {int dummy; } ;
typedef int obs_source_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 float FUNC_1 (int ) ;
 float FUNC_2 (float) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct obs_volmeter*,float*,float*,float*) ;
 int FUNC_6 (struct obs_volmeter*,struct audio_data const*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1, obs_source_t *VAR_2,
       const struct audio_data *VAR_3,
       bool VAR_4)
{
 struct obs_volmeter *VAR_5 = (struct obs_volmeter *)VAR_1;
 float VAR_6;
 float VAR_7[VAR_0];
 float VAR_8[VAR_0];
 float VAR_9[VAR_0];

 FUNC_3(&VAR_5->mutex);

 FUNC_6(VAR_5, VAR_3);



 VAR_6 = VAR_4 ? 0.0f : FUNC_1(VAR_5->cur_db);
 for (int VAR_10 = 0; VAR_10 < VAR_0;
      VAR_10++) {
  VAR_7[VAR_10] =
   FUNC_2(VAR_5->magnitude[VAR_10] * VAR_6);
  VAR_8[VAR_10] = FUNC_2(VAR_5->peak[VAR_10] * VAR_6);



  VAR_9[VAR_10] = FUNC_2(VAR_5->peak[VAR_10]);
 }

 FUNC_4(&VAR_5->mutex);

 FUNC_5(VAR_5, VAR_7, VAR_8, VAR_9);

 FUNC_0(VAR_2);
}
