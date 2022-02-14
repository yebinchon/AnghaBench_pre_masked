
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef TYPE_2__* adns_state ;
struct TYPE_12__ {int buf; int used; } ;
struct TYPE_10__ {int used; int buf; } ;
struct TYPE_11__ {int tcpstate; TYPE_1__ tcpsend; int tcpsocket; TYPE_5__ tcprecv; int tcprecv_skip; } ;
typedef int ADNS_SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,char*) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,size_t) ;




 char* FUNC_11 (int) ;
 int FUNC_12 (TYPE_2__*,struct timeval const) ;

int FUNC_13(adns_state VAR_8, ADNS_SOCKET VAR_9, const struct timeval *VAR_10) {
  int VAR_11;

  FUNC_1(VAR_8,0,VAR_6);

  switch (VAR_8->tcpstate) {
  case 129:
  case 131:
    break;
  case 130:
    if (VAR_9 != VAR_8->tcpsocket) break;
    FUNC_8(VAR_8->tcprecv.used==0);
    FUNC_8(VAR_8->tcprecv_skip==0);
    for (;;) {
      if (!FUNC_5(&VAR_8->tcprecv,1)) { VAR_11= VAR_4; goto xit; }
   VAR_1;
      VAR_11= FUNC_6(VAR_8->tcpsocket,&VAR_8->tcprecv.buf,1);
   VAR_0;
      if (VAR_11==0 || (VAR_11<0 && (VAR_7==VAR_2 || VAR_7==VAR_5))) {
 FUNC_12(VAR_8,*VAR_10);
 VAR_11= 0; goto xit;
      }
      if (VAR_11>0) {
 FUNC_4(VAR_8,"connect/adns_socket_read","sent data before first request");
 VAR_11= 0; goto xit;
      }
      if (VAR_7==VAR_3) continue;
      if (FUNC_9(VAR_7)) { VAR_11= VAR_7; goto xit; }
      FUNC_4(VAR_8,"connect/adns_socket_read",FUNC_11(VAR_7));
      VAR_11= 0; goto xit;
    }
  case 128:
    if (VAR_9 != VAR_8->tcpsocket) break;
    while (VAR_8->tcpsend.used) {
      FUNC_2(VAR_8);
   VAR_1;
      VAR_11= FUNC_7(VAR_8->tcpsocket,VAR_8->tcpsend.buf,VAR_8->tcpsend.used);
   VAR_0;
      FUNC_3(VAR_8);
      if (VAR_11<0) {
 if (VAR_7==VAR_3) continue;
 if (VAR_7==VAR_2 || VAR_7==VAR_5) { VAR_11= 0; goto xit; }
 if (FUNC_9(VAR_7)) { VAR_11= VAR_7; goto xit; }
 FUNC_4(VAR_8,"adns_socket_write",FUNC_11(VAR_7));
 VAR_11= 0; goto xit;
      } else if (VAR_11>0) {
 VAR_8->tcpsend.used -= VAR_11;
 FUNC_10(VAR_8->tcpsend.buf,VAR_8->tcpsend.buf+VAR_11, (size_t) VAR_8->tcpsend.used);
      }
    }
    VAR_11= 0;
    goto xit;
  default:
    FUNC_0();
  }
  VAR_11= 0;
xit:
  FUNC_1(VAR_8,0,VAR_6);
  return VAR_11;
}
