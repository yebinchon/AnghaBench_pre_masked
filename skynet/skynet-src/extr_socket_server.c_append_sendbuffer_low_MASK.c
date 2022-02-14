
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_buffer {scalar_t__ sz; } ;
struct socket_server {int dummy; } ;
struct socket {int wb_size; int low; } ;
struct request_send {int dummy; } ;


 int VAR_0 ;
 struct write_buffer* FUNC_0 (struct socket_server*,int *,struct request_send*,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct socket_server *VAR_1,struct socket *VAR_2, struct request_send * VAR_3) {
 struct write_buffer *VAR_4 = FUNC_0(VAR_1, &VAR_2->low, VAR_3, VAR_0);
 VAR_2->wb_size += VAR_4->sz;
}
