
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct write_buffer {scalar_t__ sz; int udp_address; } ;
struct wb_list {int dummy; } ;
struct socket_server {int dummy; } ;
struct socket {int wb_size; struct wb_list low; struct wb_list high; } ;
struct request_send {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct write_buffer* FUNC_0 (struct socket_server*,struct wb_list*,struct request_send*,int ) ;
 int FUNC_1 (int ,int const*,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct socket_server *VAR_3, struct socket *VAR_4, int VAR_5, struct request_send * VAR_6, const uint8_t VAR_7[VAR_2]) {
 struct wb_list *VAR_8 = (VAR_5 == VAR_0) ? &VAR_4->high : &VAR_4->low;
 struct write_buffer *VAR_9 = FUNC_0(VAR_3, VAR_8, VAR_6, VAR_1);
 FUNC_1(VAR_9->udp_address, VAR_7, VAR_2);
 VAR_4->wb_size += VAR_9->sz;
}
