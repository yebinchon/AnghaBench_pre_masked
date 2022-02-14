
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {long long max_time; int max_size; int output; scalar_t__ total_bytes; int capturing; int active; } ;
typedef int obs_data_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static bool FUNC_7(void *VAR_0)
{
 struct ffmpeg_muxer *VAR_1 = VAR_0;

 if (!FUNC_3(VAR_1->output, 0))
  return 0;
 if (!FUNC_5(VAR_1->output, 0))
  return 0;

 obs_data_t *VAR_2 = FUNC_4(VAR_1->output);
 VAR_1->max_time = FUNC_0(VAR_2, "max_time_sec") * 1000000LL;
 VAR_1->max_size = FUNC_0(VAR_2, "max_size_mb") * (1024 * 1024);
 FUNC_1(VAR_2);

 FUNC_6(&VAR_1->active, 1);
 FUNC_6(&VAR_1->capturing, 1);
 VAR_1->total_bytes = 0;
 FUNC_2(VAR_1->output, 0);

 return 1;
}
