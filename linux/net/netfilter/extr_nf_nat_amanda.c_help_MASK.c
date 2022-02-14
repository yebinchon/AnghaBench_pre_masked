
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {int port; } ;
struct TYPE_10__ {TYPE_3__ tcp; } ;
struct TYPE_11__ {TYPE_4__ u; } ;
struct TYPE_12__ {TYPE_5__ dst; } ;
struct TYPE_7__ {int port; } ;
struct TYPE_8__ {TYPE_1__ tcp; } ;
struct nf_conntrack_expect {int master; TYPE_6__ tuple; TYPE_2__ saved_proto; int expectfn; int dir; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nf_conntrack_expect*,int ) ;
 int FUNC_2 (struct sk_buff*,int ,char*) ;
 int FUNC_3 (struct nf_conntrack_expect*) ;
 int VAR_4 ;
 int FUNC_4 (struct sk_buff*,int ,int,unsigned int,unsigned int,unsigned int,char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,scalar_t__) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static unsigned int FUNC_8(struct sk_buff *VAR_5,
    enum ip_conntrack_info VAR_6,
    unsigned int VAR_7,
    unsigned int VAR_8,
    unsigned int VAR_9,
    struct nf_conntrack_expect *VAR_10)
{
 char VAR_11[sizeof("65535")];
 u_int16_t VAR_12;


 VAR_10->saved_proto.tcp.port = VAR_10->tuple.dst.u.tcp.port;
 VAR_10->dir = VAR_1;



 VAR_10->expectfn = VAR_4;


 for (VAR_12 = FUNC_5(VAR_10->saved_proto.tcp.port); VAR_12 != 0; VAR_12++) {
  int VAR_13;

  VAR_10->tuple.dst.u.tcp.port = FUNC_0(VAR_12);
  VAR_13 = FUNC_1(VAR_10, 0);
  if (VAR_13 == 0)
   break;
  else if (VAR_13 != -VAR_0) {
   VAR_12 = 0;
   break;
  }
 }

 if (VAR_12 == 0) {
  FUNC_2(VAR_5, VAR_10->master, "all ports in use");
  return VAR_3;
 }

 FUNC_6(VAR_11, "%u", VAR_12);
 if (!FUNC_4(VAR_5, VAR_10->master, VAR_6,
          VAR_7, VAR_8, VAR_9,
          VAR_11, FUNC_7(VAR_11))) {
  FUNC_2(VAR_5, VAR_10->master, "cannot mangle packet");
  FUNC_3(VAR_10);
  return VAR_3;
 }
 return VAR_2;
}
