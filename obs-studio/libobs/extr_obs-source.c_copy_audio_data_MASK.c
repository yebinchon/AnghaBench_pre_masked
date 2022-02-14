
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int * data; int timestamp; scalar_t__ frames; } ;
struct TYPE_8__ {size_t audio_storage_size; TYPE_2__ audio_data; } ;
typedef TYPE_3__ obs_source_t ;
struct TYPE_6__ {int audio; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ,int const* const,size_t) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static void FUNC_5(obs_source_t *VAR_1, const uint8_t *const VAR_2[],
       uint32_t VAR_3, uint64_t VAR_4)
{
 size_t VAR_5 = FUNC_1(VAR_0->audio.audio);
 size_t VAR_6 = FUNC_0(VAR_0->audio.audio);
 size_t VAR_7 = (size_t)VAR_3 * VAR_6;
 bool VAR_8 = VAR_1->audio_storage_size < VAR_7;

 VAR_1->audio_data.frames = VAR_3;
 VAR_1->audio_data.timestamp = VAR_4;

 for (size_t VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {

  if (VAR_8) {
   FUNC_2(VAR_1->audio_data.data[VAR_9]);
   VAR_1->audio_data.data[VAR_9] = FUNC_3(VAR_7);
  }

  FUNC_4(VAR_1->audio_data.data[VAR_9], VAR_2[VAR_9], VAR_7);
 }

 if (VAR_8)
  VAR_1->audio_storage_size = VAR_7;
}
