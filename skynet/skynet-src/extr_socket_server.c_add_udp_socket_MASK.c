
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_server {TYPE_1__* slot; } ;
struct TYPE_4__ {int udp_address; } ;
struct socket {TYPE_2__ p; int type; } ;
struct request_udp {int id; scalar_t__ family; int fd; int opaque; } ;
struct TYPE_3__ {int type; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct socket* FUNC_3 (struct socket_server*,int,int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct socket_server *VAR_5, struct request_udp *VAR_6) {
 int VAR_7 = VAR_6->id;
 int VAR_8;
 if (VAR_6->family == VAR_0) {
  VAR_8 = VAR_2;
 } else {
  VAR_8 = VAR_1;
 }
 struct socket *VAR_9 = FUNC_3(VAR_5, VAR_7, VAR_6->fd, VAR_8, VAR_6->opaque, 1);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_6->fd);
  VAR_5->slot[FUNC_0(VAR_7)].type = VAR_4;
  return;
 }
 VAR_9->type = VAR_3;
 FUNC_2(VAR_9->p.udp_address, 0, sizeof(VAR_9->p.udp_address));
}
