
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct TYPE_15__ {int port; } ;
struct TYPE_16__ {TYPE_6__ tcp; } ;
struct TYPE_17__ {TYPE_7__ u; } ;
struct TYPE_18__ {TYPE_8__ dst; } ;
struct TYPE_13__ {int port; } ;
struct TYPE_14__ {TYPE_4__ tcp; } ;
struct nf_conntrack_expect {int dir; TYPE_9__ tuple; TYPE_5__ saved_proto; int expectfn; struct nf_conn* master; } ;
struct nf_conn {TYPE_3__* tuplehash; } ;
typedef enum nf_ct_ftp_type { ____Placeholder_nf_ct_ftp_type } nf_ct_ftp_type ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int buffer ;
struct TYPE_10__ {union nf_inet_addr u3; } ;
struct TYPE_11__ {TYPE_1__ dst; } ;
struct TYPE_12__ {TYPE_2__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nf_conntrack_expect*,int ) ;
 int FUNC_3 (struct sk_buff*,struct nf_conn*,char*) ;
 int FUNC_4 (struct nf_conntrack_expect*) ;
 int VAR_4 ;
 unsigned int FUNC_5 (struct nf_conn*,int,char*,int,union nf_inet_addr*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned int,unsigned int,char*,unsigned int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static unsigned int FUNC_9(struct sk_buff *VAR_5,
          enum ip_conntrack_info VAR_6,
          enum nf_ct_ftp_type VAR_7,
          unsigned int VAR_8,
          unsigned int VAR_9,
          unsigned int VAR_10,
          struct nf_conntrack_expect *VAR_11)
{
 union nf_inet_addr VAR_12;
 u_int16_t VAR_13;
 int VAR_14 = FUNC_0(VAR_6);
 struct nf_conn *VAR_15 = VAR_11->master;
 char VAR_16[sizeof("|1||65535|") + VAR_1];
 unsigned int VAR_17;

 FUNC_8("type %i, off %u len %u\n", VAR_7, VAR_9, VAR_10);


 VAR_12 = VAR_15->tuplehash[!VAR_14].tuple.dst.u3;
 VAR_11->saved_proto.tcp.port = VAR_11->tuple.dst.u.tcp.port;
 VAR_11->dir = !VAR_14;



 VAR_11->expectfn = VAR_4;


 for (VAR_13 = FUNC_7(VAR_11->saved_proto.tcp.port); VAR_13 != 0; VAR_13++) {
  int VAR_18;

  VAR_11->tuple.dst.u.tcp.port = FUNC_1(VAR_13);
  VAR_18 = FUNC_2(VAR_11, 0);
  if (VAR_18 == 0)
   break;
  else if (VAR_18 != -VAR_0) {
   VAR_13 = 0;
   break;
  }
 }

 if (VAR_13 == 0) {
  FUNC_3(VAR_5, VAR_15, "all ports in use");
  return VAR_3;
 }

 VAR_17 = FUNC_5(VAR_15, VAR_7, VAR_16, sizeof(VAR_16),
        &VAR_12, VAR_13);
 if (!VAR_17)
  goto out;

 FUNC_8("calling nf_nat_mangle_tcp_packet\n");

 if (!FUNC_6(VAR_5, VAR_15, VAR_6, VAR_8, VAR_9,
          VAR_10, VAR_16, VAR_17))
  goto out;

 return VAR_2;

out:
 FUNC_3(VAR_5, VAR_15, "cannot mangle packet");
 FUNC_4(VAR_11);
 return VAR_3;
}
