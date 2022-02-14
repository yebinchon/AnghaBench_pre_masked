
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ffmpeg_muxer {long long stop_ts; int capturing; int stopping; } ;
typedef long long int64_t ;


 scalar_t__ FUNC_0 (struct ffmpeg_muxer*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint64_t VAR_1)
{
 struct ffmpeg_muxer *VAR_2 = VAR_0;

 if (FUNC_0(VAR_2) || VAR_1 == 0) {
  VAR_2->stop_ts = (int64_t)VAR_1 / 1000LL;
  FUNC_1(&VAR_2->stopping, 1);
  FUNC_1(&VAR_2->capturing, 0);
 }
}
