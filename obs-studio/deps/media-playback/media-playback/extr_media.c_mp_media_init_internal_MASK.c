
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mp_media_info {int hardware_decoding; scalar_t__ format; scalar_t__ path; } ;
struct TYPE_4__ {int thread_valid; int thread; int hw; int * format_name; int * path; int sem; int mutex; } ;
typedef TYPE_1__ mp_media_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static inline bool FUNC_5(mp_media_t *VAR_2,
       const struct mp_media_info *VAR_3)
{
 if (FUNC_4(&VAR_2->mutex, ((void*)0)) != 0) {
  FUNC_0(VAR_0, "MP: Failed to init mutex");
  return 0;
 }
 if (FUNC_2(&VAR_2->sem, 0) != 0) {
  FUNC_0(VAR_0, "MP: Failed to init semaphore");
  return 0;
 }

 VAR_2->path = VAR_3->path ? FUNC_1(VAR_3->path) : ((void*)0);
 VAR_2->format_name = VAR_3->format ? FUNC_1(VAR_3->format) : ((void*)0);
 VAR_2->hw = VAR_3->hardware_decoding;

 if (FUNC_3(&VAR_2->thread, ((void*)0), VAR_1, VAR_2) != 0) {
  FUNC_0(VAR_0, "MP: Could not create media thread");
  return 0;
 }

 VAR_2->thread_valid = 1;
 return 1;
}
