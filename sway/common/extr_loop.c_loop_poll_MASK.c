
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
struct pollfd {unsigned int events; unsigned int revents; int fd; } ;
struct TYPE_6__ {int tv_sec; int tv_nsec; } ;
struct loop_timer {int data; int (* callback ) (int ) ;TYPE_3__ expiry; } ;
struct loop_fd_event {int data; int (* callback ) (int ,unsigned int,int ) ;} ;
struct loop {int fd_length; TYPE_2__* timers; TYPE_1__* fd_events; struct pollfd* fds; } ;
struct TYPE_5__ {int length; struct loop_timer** items; } ;
struct TYPE_4__ {struct loop_fd_event** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct loop*,struct loop_timer*) ;
 int FUNC_2 (struct pollfd*,int,int) ;
 int FUNC_3 (int ,unsigned int,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct loop *VAR_4) {

 int VAR_5 = VAR_1;
 if (VAR_4->timers->length) {
  struct timespec VAR_6;
  FUNC_0(VAR_0, &VAR_6);
  for (int VAR_7 = 0; VAR_7 < VAR_4->timers->length; ++VAR_7) {
   struct loop_timer *VAR_8 = VAR_4->timers->items[VAR_7];
   int VAR_9 = (VAR_8->expiry.tv_sec - VAR_6.tv_sec) * 1000;
   VAR_9 += (VAR_8->expiry.tv_nsec - VAR_6.tv_nsec) / 1000000;
   if (VAR_9 < VAR_5) {
    VAR_5 = VAR_9;
   }
  }
 }
 if (VAR_5 < 0) {
  VAR_5 = 0;
 }

 FUNC_2(VAR_4->fds, VAR_4->fd_length, VAR_5);


 for (int VAR_10 = 0; VAR_10 < VAR_4->fd_length; ++VAR_10) {
  struct pollfd VAR_11 = VAR_4->fds[VAR_10];
  struct loop_fd_event *VAR_12 = VAR_4->fd_events->items[VAR_10];


  unsigned VAR_13 = VAR_11.events | VAR_3 | VAR_2;

  if (VAR_11.revents & VAR_13) {
   VAR_12->callback(VAR_11.fd, VAR_11.revents, VAR_12->data);
  }
 }


 if (VAR_4->timers->length) {
  struct timespec VAR_14;
  FUNC_0(VAR_0, &VAR_14);
  for (int VAR_15 = 0; VAR_15 < VAR_4->timers->length; ++VAR_15) {
   struct loop_timer *VAR_16 = VAR_4->timers->items[VAR_15];
   bool VAR_17 = VAR_16->expiry.tv_sec < VAR_14.tv_sec ||
    (VAR_16->expiry.tv_sec == VAR_14.tv_sec &&
     VAR_16->expiry.tv_nsec < VAR_14.tv_nsec);
   if (VAR_17) {
    VAR_16->callback(VAR_16->data);
    FUNC_1(VAR_4, VAR_16);
    --VAR_15;
   }
  }
 }
}
