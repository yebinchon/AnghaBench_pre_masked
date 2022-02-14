
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ raw_audio2; } ;
struct TYPE_8__ {size_t mixer_mask; int audio; TYPE_1__ info; } ;
typedef TYPE_2__ obs_output_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_3(obs_output_t *VAR_2)
{
 if (VAR_2->info.raw_audio2) {
  for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if ((VAR_2->mixer_mask & ((size_t)1 << VAR_3)) != 0) {
    FUNC_0(
     VAR_2->audio, VAR_3,
     FUNC_1(VAR_2),
     VAR_1, VAR_2);
   }
  }
 } else {
  FUNC_0(VAR_2->audio, FUNC_2(VAR_2),
         FUNC_1(VAR_2),
         VAR_1, VAR_2);
 }
}
