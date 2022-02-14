
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long tv_nsec; scalar_t__ tv_sec; } ;
struct loop_timer {void (* callback ) (void*) ;TYPE_1__ expiry; void* data; } ;
struct loop {int timers; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct loop_timer* FUNC_0 (int,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,struct loop_timer*) ;
 int FUNC_3 (int ,char*) ;

struct loop_timer *FUNC_4(struct loop *VAR_2, int VAR_3,
  void (*VAR_4)(void *VAR_5), void *VAR_6) {
 struct loop_timer *VAR_7 = FUNC_0(1, sizeof(struct loop_timer));
 if (!VAR_7) {
  FUNC_3(VAR_1, "Unable to allocate memory for timer");
  return ((void*)0);
 }
 VAR_7->callback = VAR_4;
 VAR_7->data = VAR_6;

 FUNC_1(VAR_0, &VAR_7->expiry);
 VAR_7->expiry.tv_sec += VAR_3 / 1000;

 long int VAR_8 = (VAR_3 % 1000) * 1000000;
 if (VAR_7->expiry.tv_nsec + VAR_8 >= 1000000000) {
  VAR_7->expiry.tv_sec++;
  VAR_8 -= 1000000000;
 }
 VAR_7->expiry.tv_nsec += VAR_8;

 FUNC_2(VAR_2->timers, VAR_7);

 return VAR_7;
}
