
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct obs_source {scalar_t__ next_audio_source; } ;
struct obs_core_data {struct obs_source* first_audio_source; } ;


 int FUNC_0 (struct obs_source*,size_t,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct obs_core_data *VAR_0,
     size_t VAR_1, uint64_t VAR_2)
{
 bool VAR_3 = 0;

 struct obs_source *VAR_4 = VAR_0->first_audio_source;
 while (VAR_4) {
  VAR_3 |=
   FUNC_0(VAR_4, VAR_1, VAR_2);
  VAR_4 = (struct obs_source *)VAR_4->next_audio_source;
 }

 return VAR_3;
}
