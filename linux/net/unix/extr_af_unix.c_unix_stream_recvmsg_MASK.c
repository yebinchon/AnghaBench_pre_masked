
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_stream_read_state {size_t size; int flags; struct msghdr* msg; struct socket* socket; int recv_actor; } ;
struct socket {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct unix_stream_read_state*,int) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_1, struct msghdr *VAR_2,
          size_t VAR_3, int VAR_4)
{
 struct unix_stream_read_state VAR_5 = {
  .recv_actor = VAR_0,
  .socket = VAR_1,
  .msg = VAR_2,
  .size = VAR_3,
  .flags = VAR_4
 };

 return FUNC_0(&VAR_5, 1);
}
