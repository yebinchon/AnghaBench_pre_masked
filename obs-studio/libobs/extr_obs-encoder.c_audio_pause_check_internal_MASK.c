
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pause_data {scalar_t__ ts_start; scalar_t__ ts_end; } ;
struct audio_data {scalar_t__ timestamp; int frames; } ;


 scalar_t__ FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct pause_data*,struct audio_data*,size_t) ;
 int FUNC_2 (struct pause_data*,struct audio_data*,size_t) ;

__attribute__((used)) static inline bool FUNC_3(struct pause_data *VAR_0,
           struct audio_data *VAR_1,
           size_t VAR_2)
{
 uint64_t VAR_3;

 if (!VAR_0->ts_start) {
  return 0;
 }

 VAR_3 =
  VAR_1->timestamp + FUNC_0(VAR_2, VAR_1->frames);

 if (VAR_0->ts_start >= VAR_1->timestamp) {
  if (VAR_0->ts_start <= VAR_3) {
   FUNC_1(VAR_0, VAR_1, VAR_2);
   return !VAR_1->frames;
  }

 } else {
  if (VAR_0->ts_end >= VAR_1->timestamp &&
      VAR_0->ts_end <= VAR_3) {
   FUNC_2(VAR_0, VAR_1, VAR_2);
   return !VAR_1->frames;
  }

  return 1;
 }

 return 0;
}
