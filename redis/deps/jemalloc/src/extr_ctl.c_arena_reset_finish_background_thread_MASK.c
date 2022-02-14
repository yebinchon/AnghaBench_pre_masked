
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_3__ {scalar_t__ state; int mtx; } ;
typedef TYPE_1__ background_thread_info_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 unsigned int VAR_5 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(tsd_t *VAR_6, unsigned VAR_7) {
 if (VAR_4) {
  if (FUNC_1()) {
   unsigned VAR_8 = VAR_7 % VAR_5;
   background_thread_info_t *VAR_9 =
       &VAR_0[VAR_8];
   FUNC_0(VAR_9->state == VAR_2);
   FUNC_2(FUNC_4(VAR_6), &VAR_9->mtx);
   VAR_9->state = VAR_3;
   FUNC_3(FUNC_4(VAR_6), &VAR_9->mtx);
  }
  FUNC_3(FUNC_4(VAR_6), &VAR_1);
 }
}
