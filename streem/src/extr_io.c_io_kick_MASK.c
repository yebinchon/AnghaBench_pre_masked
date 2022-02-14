
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int strm_stream ;
typedef int strm_callback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,struct epoll_event*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_4, strm_stream* VAR_5, strm_callback VAR_6)
{
  struct epoll_event VAR_7;

  VAR_7.events = VAR_0 | VAR_1;
  VAR_7.data.ptr = FUNC_1(VAR_5, VAR_6);
  return FUNC_0(VAR_3, VAR_2, VAR_4, &VAR_7);
}
