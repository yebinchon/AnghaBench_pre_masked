
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct socket_server {int recvctrl_fd; } ;
struct socket_message {int * data; int ud; int id; int opaque; } ;
struct request_udp {int dummy; } ;
struct request_start {int dummy; } ;
struct request_setudp {int dummy; } ;
struct request_setopt {int dummy; } ;
struct request_send {int id; } ;
struct request_send_udp {int * address; struct request_send send; } ;
struct request_open {int dummy; } ;
struct request_listen {int dummy; } ;
struct request_close {int dummy; } ;
struct request_bind {int dummy; } ;
typedef int header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct socket_server*,struct request_udp*) ;
 int FUNC_1 (struct socket_server*,struct request_bind*,struct socket_message*) ;
 int FUNC_2 (int,int*,int) ;
 int FUNC_3 (struct socket_server*,struct request_close*,struct socket_message*) ;
 int FUNC_4 (struct socket_server*,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct socket_server*,struct request_listen*,struct socket_message*) ;
 int FUNC_7 (struct socket_server*,struct request_open*,struct socket_message*) ;
 int FUNC_8 (struct socket_server*,struct request_send*,struct socket_message*,int,int *) ;
 int FUNC_9 (struct socket_server*,struct request_setudp*,struct socket_message*) ;
 int FUNC_10 (struct socket_server*,struct request_setopt*) ;
 int FUNC_11 (struct socket_server*,struct request_start*,struct socket_message*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_12(struct socket_server *VAR_4, struct socket_message *VAR_5) {
 int VAR_6 = VAR_4->recvctrl_fd;

 uint8_t VAR_7[256];
 uint8_t VAR_8[2];
 FUNC_2(VAR_6, VAR_8, sizeof(VAR_8));
 int VAR_9 = VAR_8[0];
 int VAR_10 = VAR_8[1];
 FUNC_2(VAR_6, VAR_7, VAR_10);

 switch (VAR_9) {
 case 'S':
  return FUNC_11(VAR_4,(struct request_start *)VAR_7, VAR_5);
 case 'B':
  return FUNC_1(VAR_4,(struct request_bind *)VAR_7, VAR_5);
 case 'L':
  return FUNC_6(VAR_4,(struct request_listen *)VAR_7, VAR_5);
 case 'K':
  return FUNC_3(VAR_4,(struct request_close *)VAR_7, VAR_5);
 case 'O':
  return FUNC_7(VAR_4, (struct request_open *)VAR_7, VAR_5);
 case 'X':
  VAR_5->opaque = 0;
  VAR_5->id = 0;
  VAR_5->ud = 0;
  VAR_5->data = ((void*)0);
  return VAR_2;
 case 'D':
 case 'P': {
  int VAR_11 = (VAR_9 == 'D') ? VAR_0 : VAR_1;
  struct request_send * VAR_12 = (struct request_send *) VAR_7;
  int VAR_13 = FUNC_8(VAR_4, VAR_12, VAR_5, VAR_11, ((void*)0));
  FUNC_4(VAR_4, VAR_12->id);
  return VAR_13;
 }
 case 'A': {
  struct request_send_udp * VAR_14 = (struct request_send_udp *)VAR_7;
  return FUNC_8(VAR_4, &VAR_14->send, VAR_5, VAR_0, VAR_14->address);
 }
 case 'C':
  return FUNC_9(VAR_4, (struct request_setudp *)VAR_7, VAR_5);
 case 'T':
  FUNC_10(VAR_4, (struct request_setopt *)VAR_7);
  return -1;
 case 'U':
  FUNC_0(VAR_4, (struct request_udp *)VAR_7);
  return -1;
 default:
  FUNC_5(VAR_3, "socket-server: Unknown ctrl %c.\n",VAR_9);
  return -1;
 };

 return -1;
}
