
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_server {char* buffer; TYPE_1__* slot; int event_fd; } ;
struct socket_message {int id; char* data; scalar_t__ ud; int opaque; } ;
struct socket {int fd; int type; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct request_open {int id; int port; int opaque; int host; } ;
struct addrinfo {scalar_t__ ai_family; struct sockaddr* ai_addr; int ai_addrlen; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; } ;
typedef int ai_hints ;
struct TYPE_2__ {int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct addrinfo*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_6 (scalar_t__,void*,char*,int) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 struct socket* FUNC_8 (struct socket_server*,int,int,int ,int ,int) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ,struct socket*,int) ;
 int FUNC_13 (char*,char*,int) ;
 char* FUNC_14 (scalar_t__) ;

__attribute__((used)) static int
FUNC_15(struct socket_server *VAR_12, struct request_open * VAR_13, struct socket_message *VAR_14) {
 int VAR_15 = VAR_13->id;
 VAR_14->opaque = VAR_13->opaque;
 VAR_14->id = VAR_15;
 VAR_14->ud = 0;
 VAR_14->data = ((void*)0);
 struct socket *VAR_16;
 int VAR_17;
 struct addrinfo VAR_18;
 struct addrinfo *VAR_19 = ((void*)0);
 struct addrinfo *VAR_20 = ((void*)0);
 char VAR_21[16];
 FUNC_13(VAR_21, "%d", VAR_13->port);
 FUNC_7(&VAR_18, 0, sizeof( VAR_18 ) );
 VAR_18.ai_family = VAR_1;
 VAR_18.ai_socktype = VAR_10;
 VAR_18.ai_protocol = VAR_3;

 VAR_17 = FUNC_5( VAR_13->host, VAR_21, &VAR_18, &VAR_19 );
 if ( VAR_17 != 0 ) {
  VAR_14->data = (void *)FUNC_4(VAR_17);
  goto _failed;
 }
 int VAR_22= -1;
 for (VAR_20 = VAR_19; VAR_20 != ((void*)0); VAR_20 = VAR_20->ai_next ) {
  VAR_22 = FUNC_9( VAR_20->ai_family, VAR_20->ai_socktype, VAR_20->ai_protocol );
  if ( VAR_22 < 0 ) {
   continue;
  }
  FUNC_10(VAR_22);
  FUNC_11(VAR_22);
  VAR_17 = FUNC_2( VAR_22, VAR_20->ai_addr, VAR_20->ai_addrlen);
  if ( VAR_17 != 0 && VAR_11 != VAR_2) {
   FUNC_1(VAR_22);
   VAR_22 = -1;
   continue;
  }
  break;
 }

 if (VAR_22 < 0) {
  VAR_14->data = FUNC_14(VAR_11);
  goto _failed;
 }

 VAR_16 = FUNC_8(VAR_12, VAR_15, VAR_22, VAR_4, VAR_13->opaque, 1);
 if (VAR_16 == ((void*)0)) {
  FUNC_1(VAR_22);
  VAR_14->data = "reach skynet socket number limit";
  goto _failed;
 }

 if(VAR_17 == 0) {
  VAR_16->type = VAR_7;
  struct sockaddr * VAR_23 = VAR_20->ai_addr;
  void * VAR_24 = (VAR_20->ai_family == VAR_0) ? (void*)&((struct sockaddr_in *)VAR_23)->sin_addr : (void*)&((struct sockaddr_in6 *)VAR_23)->sin6_addr;
  if (FUNC_6(VAR_20->ai_family, VAR_24, VAR_12->buffer, sizeof(VAR_12->buffer))) {
   VAR_14->data = VAR_12->buffer;
  }
  FUNC_3( VAR_19 );
  return VAR_6;
 } else {
  VAR_16->type = VAR_8;
  FUNC_12(VAR_12->event_fd, VAR_16->fd, VAR_16, 1);
 }

 FUNC_3( VAR_19 );
 return -1;
_failed:
 FUNC_3( VAR_19 );
 VAR_12->slot[FUNC_0(VAR_15)].type = VAR_9;
 return VAR_5;
}
