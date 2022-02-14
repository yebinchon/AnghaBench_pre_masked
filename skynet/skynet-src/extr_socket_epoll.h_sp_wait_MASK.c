
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event {int write; int read; int error; int eof; int s; } ;
struct TYPE_2__ {int ptr; } ;
struct epoll_event {unsigned int events; TYPE_1__ data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,struct epoll_event*,int,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_4, struct event *VAR_5, int VAR_6) {
 struct epoll_event VAR_7[VAR_6];
 int VAR_8 = FUNC_0(VAR_4 , VAR_7, VAR_6, -1);
 int VAR_9;
 for (VAR_9=0;VAR_9<VAR_8;VAR_9++) {
  VAR_5[VAR_9].s = VAR_7[VAR_9].data.ptr;
  unsigned VAR_10 = VAR_7[VAR_9].events;
  VAR_5[VAR_9].write = (VAR_10 & VAR_3) != 0;
  VAR_5[VAR_9].read = (VAR_10 & (VAR_2 | VAR_1)) != 0;
  VAR_5[VAR_9].error = (VAR_10 & VAR_0) != 0;
  VAR_5[VAR_9].eof = 0;
 }

 return VAR_8;
}
