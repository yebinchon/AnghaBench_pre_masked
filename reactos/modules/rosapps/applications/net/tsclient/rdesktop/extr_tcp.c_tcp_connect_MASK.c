
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef int true_value ;
struct TYPE_11__ {int s_addr; } ;
struct sockaddr_in {int sin_port; int sin_family; TYPE_6__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct hostent {int h_addr; } ;
struct addrinfo {int ai_addrlen; struct addrinfo* ai_next; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
struct TYPE_8__ {int size; int * data; } ;
struct TYPE_7__ {int size; int * data; } ;
struct TYPE_9__ {int sock; TYPE_2__ out; TYPE_1__ in; } ;
struct TYPE_10__ {int tcp_port_rdp; int disconnect_reason; TYPE_3__ tcp; } ;
typedef TYPE_4__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct addrinfo*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 struct hostent* FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_6__*,int ,int) ;
 int FUNC_12 (struct addrinfo*,int ,int) ;
 int FUNC_13 (int,int ,int ,void*,int) ;
 int FUNC_14 (char*,int,char*,int) ;
 void* FUNC_15 (int ,int ,int ) ;

BOOL
FUNC_16(RDPCLIENT * VAR_8, char *VAR_9)
{
 int VAR_10 = 1;
 struct hostent *VAR_11;
 struct sockaddr_in VAR_12;

 if ((VAR_11 = FUNC_7(VAR_9)) != ((void*)0))
 {
  FUNC_11(&VAR_12.sin_addr, VAR_11->h_addr, sizeof(VAR_12.sin_addr));
 }
 else if ((VAR_12.sin_addr.s_addr = FUNC_9(VAR_9)) == VAR_3)
 {
  FUNC_3("%s: unable to resolve host\n", VAR_9);
  VAR_8->disconnect_reason = 260;
  return VAR_2;
 }

 if ((VAR_8->tcp.sock = FUNC_15(VAR_0, VAR_5, 0)) < 0)
 {

  return VAR_2;
 }

 VAR_12.sin_family = VAR_0;
 VAR_12.sin_port = FUNC_8(VAR_8->tcp_port_rdp);



 if (FUNC_2(VAR_8->tcp.sock, (struct sockaddr *) &VAR_12, sizeof(struct sockaddr)) < 0)
 {

  VAR_8->disconnect_reason = 516;
  FUNC_1(VAR_8->tcp.sock);
  return VAR_2;
 }



 FUNC_13(VAR_8->tcp.sock, VAR_4, VAR_6, (void *) &VAR_10, sizeof(VAR_10));

 VAR_8->tcp.in.size = 4096;
 VAR_8->tcp.in.data = (uint8 *) FUNC_10(VAR_8->tcp.in.size);

 if(VAR_8->tcp.in.data == ((void*)0))
 {
  VAR_8->disconnect_reason = 262;
  return VAR_2;
 }

 VAR_8->tcp.out.size = 4096;
 VAR_8->tcp.out.data = (uint8 *) FUNC_10(VAR_8->tcp.out.size);

 if(VAR_8->tcp.out.data == ((void*)0))
 {
  VAR_8->disconnect_reason = 262;
  return VAR_2;
 }

 return VAR_7;
}
