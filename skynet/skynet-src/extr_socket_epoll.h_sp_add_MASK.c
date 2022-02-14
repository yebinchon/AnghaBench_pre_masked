
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ptr; } ;
struct epoll_event {TYPE_1__ data; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int,struct epoll_event*) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, int VAR_3, void *VAR_4) {
 struct epoll_event VAR_5;
 VAR_5.events = VAR_0;
 VAR_5.data.ptr = VAR_4;
 if (FUNC_0(VAR_2, VAR_1, VAR_3, &VAR_5) == -1) {
  return 1;
 }
 return 0;
}
