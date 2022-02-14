
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct game_capture {int pitch; int cy; int texture; int ** texture_buffers; scalar_t__ convert_16bit; int ** texture_mutexes; TYPE_1__* shmem_data; } ;
struct TYPE_2__ {int last_tex; } ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct game_capture*,int,int *,int) ;
 scalar_t__ FUNC_2 (int ,int **,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct game_capture *VAR_0)
{
 int VAR_1;
 HANDLE VAR_2 = ((void*)0);
 uint32_t VAR_3;
 int VAR_4;
 uint8_t *VAR_5;

 if (!VAR_0->shmem_data)
  return;

 VAR_1 = VAR_0->shmem_data->last_tex;

 if (VAR_1 < 0 || VAR_1 > 1)
  return;

 VAR_4 = VAR_1 == 1 ? 0 : 1;

 if (FUNC_5(VAR_0->texture_mutexes[VAR_1])) {
  VAR_2 = VAR_0->texture_mutexes[VAR_1];

 } else if (FUNC_5(VAR_0->texture_mutexes[VAR_4])) {
  VAR_2 = VAR_0->texture_mutexes[VAR_4];
  VAR_1 = VAR_4;

 } else {
  return;
 }

 if (FUNC_2(VAR_0->texture, &VAR_5, &VAR_3)) {
  if (VAR_0->convert_16bit) {
   FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3);

  } else if (VAR_3 == VAR_0->pitch) {
   FUNC_4(VAR_5, VAR_0->texture_buffers[VAR_1],
          VAR_3 * VAR_0->cy);
  } else {
   uint8_t *VAR_6 = VAR_0->texture_buffers[VAR_1];
   uint32_t VAR_7 = VAR_3 < VAR_0->pitch ? VAR_3
        : VAR_0->pitch;

   for (uint32_t VAR_8 = 0; VAR_8 < VAR_0->cy; VAR_8++) {
    uint8_t *VAR_9 = VAR_6 + VAR_0->pitch * VAR_8;
    uint8_t *VAR_10 = VAR_5 + VAR_3 * VAR_8;
    FUNC_4(VAR_10, VAR_9, VAR_7);
   }
  }

  FUNC_3(VAR_0->texture);
 }

 FUNC_0(VAR_2);
}
