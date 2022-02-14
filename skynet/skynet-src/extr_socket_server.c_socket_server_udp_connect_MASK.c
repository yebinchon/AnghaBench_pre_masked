
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union sockaddr_all {int dummy; } sockaddr_all ;
struct socket_server {struct socket* slot; } ;
struct socket_lock {int dummy; } ;
struct socket {int id; scalar_t__ type; int udpconnecting; } ;
struct TYPE_3__ {int id; int address; } ;
struct TYPE_4__ {TYPE_1__ set_udp; } ;
struct request_package {TYPE_2__ u; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; int ai_protocol; int ai_socktype; } ;
typedef int ai_hints ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int,union sockaddr_all*,int ) ;
 int FUNC_4 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 int FUNC_6 (struct socket_server*,struct request_package*,char,int) ;
 int FUNC_7 (struct socket_lock*) ;
 int FUNC_8 (struct socket*,struct socket_lock*) ;
 int FUNC_9 (struct socket_lock*) ;
 int FUNC_10 (char*,char*,int) ;

int
FUNC_11(struct socket_server *VAR_8, int VAR_9, const char * VAR_10, int VAR_11) {
 struct socket * VAR_12 = &VAR_8->slot[FUNC_1(VAR_9)];
 if (VAR_12->id != VAR_9 || VAR_12->type == VAR_6) {
  return -1;
 }
 struct socket_lock VAR_13;
 FUNC_8(VAR_12, &VAR_13);
 FUNC_7(&VAR_13);
 if (VAR_12->id != VAR_9 || VAR_12->type == VAR_6) {
  FUNC_9(&VAR_13);
  return -1;
 }
 FUNC_0(&VAR_12->udpconnecting);
 FUNC_9(&VAR_13);

 int VAR_14;
 struct addrinfo VAR_15;
 struct addrinfo *VAR_16 = ((void*)0);
 char VAR_17[16];
 FUNC_10(VAR_17, "%d", VAR_11);
 FUNC_5( &VAR_15, 0, sizeof( VAR_15 ) );
 VAR_15.ai_family = VAR_2;
 VAR_15.ai_socktype = VAR_7;
 VAR_15.ai_protocol = VAR_3;

 VAR_14 = FUNC_4(VAR_10, VAR_17, &VAR_15, &VAR_16 );
 if ( VAR_14 != 0 ) {
  return -1;
 }
 struct request_package VAR_18;
 VAR_18.u.set_udp.id = VAR_9;
 int VAR_19;

 if (VAR_16->ai_family == VAR_0) {
  VAR_19 = VAR_4;
 } else if (VAR_16->ai_family == VAR_1) {
  VAR_19 = VAR_5;
 } else {
  FUNC_2( VAR_16 );
  return -1;
 }

 int VAR_20 = FUNC_3(VAR_19, (union sockaddr_all *)VAR_16->ai_addr, VAR_18.u.set_udp.address);

 FUNC_2( VAR_16 );

 FUNC_6(VAR_8, &VAR_18, 'C', sizeof(VAR_18.u.set_udp) - sizeof(VAR_18.u.set_udp.address) +VAR_20);

 return 0;
}
