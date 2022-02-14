
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xpt_flags; struct svc_serv* xpt_server; } ;
struct svc_sock {int sk_tcplen; scalar_t__ sk_datalen; TYPE_1__ sk_xprt; int sk_reclen; } ;
struct svc_serv {scalar_t__ sv_max_mesg; } ;
struct svc_rqst {int dummy; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
typedef int rpc_fraghdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct svc_rqst*,struct kvec*,int,unsigned int,int ) ;
 int FUNC_4 (struct svc_sock*) ;

__attribute__((used)) static int FUNC_5(struct svc_sock *VAR_2, struct svc_rqst *VAR_3)
{
 struct svc_serv *VAR_4 = VAR_2->sk_xprt.xpt_server;
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_2->sk_tcplen < sizeof(rpc_fraghdr)) {
  struct kvec VAR_7;

  VAR_5 = sizeof(rpc_fraghdr) - VAR_2->sk_tcplen;
  VAR_7.iov_base = ((char *) &VAR_2->sk_reclen) + VAR_2->sk_tcplen;
  VAR_7.iov_len = VAR_5;
  VAR_6 = FUNC_3(VAR_3, &VAR_7, 1, VAR_5, 0);
  if (VAR_6 < 0)
   goto error;
  VAR_2->sk_tcplen += VAR_6;

  if (VAR_6 < VAR_5) {
   FUNC_0("svc: short recvfrom while reading record "
    "length (%d of %d)\n", VAR_6, VAR_5);
   return -VAR_0;
  }

  FUNC_0("svc: TCP record, %d bytes\n", FUNC_4(VAR_2));
  if (FUNC_4(VAR_2) + VAR_2->sk_datalen >
       VAR_4->sv_max_mesg) {
   FUNC_1("RPC: fragment too large: %d\n",
     FUNC_4(VAR_2));
   goto err_delete;
  }
 }

 return FUNC_4(VAR_2);
error:
 FUNC_0("RPC: TCP recv_record got %d\n", VAR_6);
 return VAR_6;
err_delete:
 FUNC_2(VAR_1, &VAR_2->sk_xprt.xpt_flags);
 return -VAR_0;
}
