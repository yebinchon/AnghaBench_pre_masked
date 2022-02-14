
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct socket_udp_address {int dummy; } ;
struct socket_server {int dummy; } ;
struct socket_message {scalar_t__ ud; scalar_t__ data; } ;





const struct socket_udp_address *
FUNC_0(struct socket_server *VAR_0, struct socket_message *VAR_1, int *VAR_2) {
 uint8_t * VAR_3 = (uint8_t *)(VAR_1->data + VAR_1->ud);
 int VAR_4 = VAR_3[0];
 switch(VAR_4) {
 case 129:
  *VAR_2 = 1+2+4;
  break;
 case 128:
  *VAR_2 = 1+2+16;
  break;
 default:
  return ((void*)0);
 }
 return (const struct socket_udp_address *)VAR_3;
}
