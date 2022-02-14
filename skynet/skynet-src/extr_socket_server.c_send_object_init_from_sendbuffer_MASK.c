
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_server {int dummy; } ;
struct socket_sendbuffer {int type; int sz; scalar_t__ buffer; } ;
struct send_object {int * free_func; int sz; int * buffer; } ;





 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct socket_server*,struct send_object*,void*,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct socket_server *VAR_2, struct send_object *VAR_3, struct socket_sendbuffer *VAR_4) {
 switch (VAR_4->type) {
 case 130:
  FUNC_0(VAR_2, VAR_3, (void *)VAR_4->buffer, VAR_4->sz);
  break;
 case 129:
  FUNC_0(VAR_2, VAR_3, (void *)VAR_4->buffer, VAR_0);
  break;
 case 128:
  VAR_3->buffer = (void *)VAR_4->buffer;
  VAR_3->sz = VAR_4->sz;
  VAR_3->free_func = VAR_1;
  break;
 default:

  VAR_3->buffer = ((void*)0);
  VAR_3->sz = 0;
  VAR_3->free_func = ((void*)0);
  break;
 }
}
