
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct obs_output {int * audio_encoders; TYPE_1__ info; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct obs_output const*) ;

__attribute__((used)) static inline size_t FUNC_1(const struct obs_output *VAR_3)
{
 size_t VAR_4 = 1;

 if ((VAR_3->info.flags & VAR_2) != 0) {
  if (!FUNC_0(VAR_3)) {
   return 1;
  }
 }

 if ((VAR_3->info.flags & VAR_1) != 0) {
  VAR_4 = 0;

  for (size_t VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (!VAR_3->audio_encoders[VAR_5])
    break;

   VAR_4++;
  }
 }

 return VAR_4;
}
