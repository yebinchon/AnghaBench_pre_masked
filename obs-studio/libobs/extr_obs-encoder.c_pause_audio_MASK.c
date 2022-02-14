
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct pause_data {scalar_t__ ts_start; } ;
struct audio_data {scalar_t__ frames; scalar_t__ timestamp; } ;


 scalar_t__ FUNC_0 (size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pause_data *VAR_0, struct audio_data *VAR_1,
   size_t VAR_2)
{
 uint64_t VAR_3 = VAR_0->ts_start - VAR_1->timestamp;
 VAR_3 = FUNC_0(VAR_2, VAR_3);

 VAR_1->frames = (uint32_t)VAR_3;
}
