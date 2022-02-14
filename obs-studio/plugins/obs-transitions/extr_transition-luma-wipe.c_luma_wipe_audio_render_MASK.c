
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct obs_source_audio_mix {int dummy; } ;
struct luma_wipe_info {int source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct obs_source_audio_mix*,int ,size_t,size_t,int ,int ) ;

bool FUNC_1(void *VAR_2, uint64_t *VAR_3,
       struct obs_source_audio_mix *VAR_4, uint32_t VAR_5,
       size_t VAR_6, size_t VAR_7)
{
 struct luma_wipe_info *VAR_8 = VAR_2;
 return FUNC_0(VAR_8->source, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7, VAR_0, VAR_1);
}
