
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptr; } ;
struct epoll_event {TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct epoll_event*,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void*
FUNC_2(void* VAR_2)
{
  struct epoll_event VAR_3[VAR_0];
  int VAR_4, VAR_5;

  for (;;) {
    VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_0, -1);
    if (VAR_5 < 0) {
      return ((void*)0);
    }
    for (VAR_4=0; VAR_4<VAR_5; VAR_4++) {
      FUNC_1(VAR_3[VAR_4].data.ptr);
    }
  }
  return ((void*)0);
}
