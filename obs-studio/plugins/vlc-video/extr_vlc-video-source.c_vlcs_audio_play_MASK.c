
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_2__ {unsigned int frames; scalar_t__ timestamp; scalar_t__* data; int speakers; int format; } ;
struct vlc_source {unsigned int audio_capacity; TYPE_1__ audio; int source; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (void*,size_t) ;
 size_t FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (void*,void const*,size_t) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_4(void *VAR_1, const void *VAR_2, unsigned VAR_3,
       int64_t VAR_4)
{
 struct vlc_source *VAR_5 = VAR_1;
 size_t VAR_6 = FUNC_1(VAR_5->audio.format, VAR_5->audio.speakers, VAR_3);

 if (VAR_5->audio_capacity < VAR_3) {
  VAR_5->audio.data[0] = FUNC_0((void *)VAR_5->audio.data[0], VAR_6);
  VAR_5->audio_capacity = VAR_3;
 }

 FUNC_2((void *)VAR_5->audio.data[0], VAR_2, VAR_6);
 VAR_5->audio.timestamp = (uint64_t)VAR_4 * 1000ULL - VAR_0;
 VAR_5->audio.frames = VAR_3;

 FUNC_3(VAR_5->source, &VAR_5->audio);
}
