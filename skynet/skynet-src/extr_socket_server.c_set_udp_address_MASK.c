
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_server {struct socket* slot; } ;
struct socket_message {int id; char* data; scalar_t__ ud; int opaque; } ;
struct TYPE_2__ {int udp_address; } ;
struct socket {scalar_t__ type; int id; int protocol; int udpconnecting; TYPE_1__ p; int opaque; } ;
struct request_setudp {int id; int* address; } ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int
FUNC_3(struct socket_server *VAR_3, struct request_setudp *VAR_4, struct socket_message *VAR_5) {
 int VAR_6 = VAR_4->id;
 struct socket *VAR_7 = &VAR_3->slot[FUNC_1(VAR_6)];
 if (VAR_7->type == VAR_2 || VAR_7->id !=VAR_6) {
  return -1;
 }
 int VAR_8 = VAR_4->address[0];
 if (VAR_8 != VAR_7->protocol) {

  VAR_5->opaque = VAR_7->opaque;
  VAR_5->id = VAR_7->id;
  VAR_5->ud = 0;
  VAR_5->data = "protocol mismatch";

  return VAR_1;
 }
 if (VAR_8 == VAR_0) {
  FUNC_2(VAR_7->p.udp_address, VAR_4->address, 1+2+4);
 } else {
  FUNC_2(VAR_7->p.udp_address, VAR_4->address, 1+2+16);
 }
 FUNC_0(&VAR_7->udpconnecting);
 return -1;
}
