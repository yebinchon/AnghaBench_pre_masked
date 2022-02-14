
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


union nf_inet_addr {int ip; } ;
typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct TYPE_15__ {int port; } ;
struct TYPE_16__ {TYPE_6__ tcp; } ;
struct TYPE_17__ {TYPE_7__ u; } ;
struct TYPE_18__ {TYPE_8__ dst; } ;
struct TYPE_13__ {int port; } ;
struct TYPE_14__ {TYPE_4__ tcp; } ;
struct nf_conntrack_expect {size_t dir; TYPE_9__ tuple; TYPE_5__ saved_proto; int expectfn; struct nf_conn* master; } ;
struct nf_conn {TYPE_3__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int buffer ;
struct TYPE_10__ {union nf_inet_addr u3; } ;
struct TYPE_11__ {TYPE_1__ dst; } ;
struct TYPE_12__ {TYPE_2__ tuple; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nf_conntrack_expect*,int ) ;
 int FUNC_2 (struct sk_buff*,struct nf_conn*,char*) ;
 int FUNC_3 (struct nf_conntrack_expect*) ;
 int VAR_4 ;
 int FUNC_4 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned int,unsigned int,char*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,int *,scalar_t__) ;
 int FUNC_8 (char*,int,char*,int,scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static unsigned int FUNC_10(struct sk_buff *VAR_5,
    enum ip_conntrack_info VAR_6,
    unsigned int VAR_7,
    unsigned int VAR_8,
    unsigned int VAR_9,
    struct nf_conntrack_expect *VAR_10)
{
 char VAR_11[sizeof("4294967296 65635")];
 struct nf_conn *VAR_12 = VAR_10->master;
 union nf_inet_addr VAR_13;
 u_int16_t VAR_14;


 VAR_13 = VAR_12->tuplehash[VAR_1].tuple.dst.u3;

 VAR_10->saved_proto.tcp.port = VAR_10->tuple.dst.u.tcp.port;
 VAR_10->dir = VAR_1;
 VAR_10->expectfn = VAR_4;


 for (VAR_14 = FUNC_6(VAR_10->saved_proto.tcp.port); VAR_14 != 0; VAR_14++) {
  int VAR_15;

  VAR_10->tuple.dst.u.tcp.port = FUNC_0(VAR_14);
  VAR_15 = FUNC_1(VAR_10, 0);
  if (VAR_15 == 0)
   break;
  else if (VAR_15 != -VAR_0) {
   VAR_14 = 0;
   break;
  }
 }

 if (VAR_14 == 0) {
  FUNC_2(VAR_5, VAR_12, "all ports in use");
  return VAR_3;
 }
 FUNC_8(VAR_11, sizeof(VAR_11), "%u %u", FUNC_5(VAR_13.ip), VAR_14);
 FUNC_7("inserting '%s' == %pI4, port %u\n",
   VAR_11, &VAR_13.ip, VAR_14);

 if (!FUNC_4(VAR_5, VAR_12, VAR_6, VAR_7, VAR_8,
          VAR_9, VAR_11, FUNC_9(VAR_11))) {
  FUNC_2(VAR_5, VAR_12, "cannot mangle packet");
  FUNC_3(VAR_10);
  return VAR_3;
 }

 return VAR_2;
}
