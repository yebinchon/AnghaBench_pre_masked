
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* free ) (void*) ;} ;
struct socket_server {TYPE_1__ soi; } ;
struct socket_sendbuffer {int type; scalar_t__ buffer; } ;


 int FUNC_0 (void*) ;



 int FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(struct socket_server *VAR_0, struct socket_sendbuffer *VAR_1) {
 void *VAR_2 = (void *)VAR_1->buffer;
 switch (VAR_1->type) {
 case 130:
  FUNC_0((void *)VAR_2);
  break;
 case 129:
  VAR_0->soi.free(VAR_2);
  break;
 case 128:
  break;
 }
}
