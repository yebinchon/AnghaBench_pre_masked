
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int active; int reset; int kill; scalar_t__ has_audio; scalar_t__ has_video; int mutex; int sem; } ;
typedef TYPE_1__ mp_media_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static inline bool FUNC_12(mp_media_t *VAR_0)
{
 FUNC_9("mp_media_thread");

 if (!FUNC_0(VAR_0)) {
  return 0;
 }
 if (!FUNC_6(VAR_0)) {
  return 0;
 }

 for (;;) {
  bool VAR_1, VAR_2, VAR_3;
  bool VAR_4 = 0;

  FUNC_10(&VAR_0->mutex);
  VAR_3 = VAR_0->active;
  FUNC_11(&VAR_0->mutex);

  if (!VAR_3) {
   if (FUNC_8(VAR_0->sem) < 0)
    return 0;
  } else {
   VAR_4 = FUNC_7(VAR_0);
  }

  FUNC_10(&VAR_0->mutex);

  VAR_1 = VAR_0->reset;
  VAR_2 = VAR_0->kill;
  VAR_0->reset = 0;
  VAR_0->kill = 0;

  FUNC_11(&VAR_0->mutex);

  if (VAR_2) {
   break;
  }
  if (VAR_1) {
   FUNC_6(VAR_0);
   continue;
  }


  if (VAR_3 && !VAR_4) {
   if (VAR_0->has_video)
    FUNC_4(VAR_0, 0);
   if (VAR_0->has_audio)
    FUNC_3(VAR_0);

   if (!FUNC_5(VAR_0))
    return 0;
   if (FUNC_2(VAR_0))
    continue;

   FUNC_1(VAR_0);
  }
 }

 return 1;
}
