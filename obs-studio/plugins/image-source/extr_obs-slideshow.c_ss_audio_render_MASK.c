
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct slideshow {int dummy; } ;
struct obs_source_audio_mix {int dummy; } ;
typedef int obs_source_t ;


 int * FUNC_0 (struct slideshow*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,struct obs_source_audio_mix*,int ,size_t,size_t) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, uint64_t *VAR_1,
       struct obs_source_audio_mix *VAR_2,
       uint32_t VAR_3, size_t VAR_4,
       size_t VAR_5)
{
 struct slideshow *VAR_6 = VAR_0;
 obs_source_t *VAR_7 = FUNC_0(VAR_6);
 bool VAR_8;

 if (!VAR_7)
  return 0;

 VAR_8 = FUNC_2(VAR_7, VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5);

 FUNC_1(VAR_7);
 return VAR_8;
}
