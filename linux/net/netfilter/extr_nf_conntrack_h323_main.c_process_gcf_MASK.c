
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_expect {int tuple; int helper; } ;
struct nf_conn {TYPE_5__* tuplehash; int status; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int addr ;
typedef scalar_t__ __be16 ;
struct TYPE_13__ {int rasAddress; } ;
struct TYPE_8__ {scalar_t__ port; } ;
struct TYPE_9__ {TYPE_1__ udp; } ;
struct TYPE_10__ {int u3; TYPE_2__ u; } ;
struct TYPE_11__ {TYPE_3__ src; } ;
struct TYPE_12__ {TYPE_4__ tuple; } ;
typedef TYPE_6__ GatekeeperConfirm ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nf_conn*,unsigned char*,int *,union nf_inet_addr*,scalar_t__*) ;
 int FUNC_2 (union nf_inet_addr*,int *,int) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 struct nf_conntrack_expect* FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (struct nf_conntrack_expect*,int ,int ,int *,union nf_inet_addr*,int ,int *,scalar_t__*) ;
 int FUNC_6 (struct nf_conntrack_expect*) ;
 scalar_t__ FUNC_7 (struct nf_conntrack_expect*,int ) ;
 int FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_4, struct nf_conn *VAR_5,
         enum ip_conntrack_info VAR_6,
         unsigned int VAR_7,
         unsigned char **VAR_8, GatekeeperConfirm *VAR_9)
{
 int VAR_10 = FUNC_0(VAR_6);
 int VAR_11 = 0;
 __be16 VAR_12;
 union nf_inet_addr VAR_13;
 struct nf_conntrack_expect *VAR_14;

 FUNC_9("nf_ct_ras: GCF\n");

 if (!FUNC_1(VAR_5, *VAR_8, &VAR_9->rasAddress, &VAR_13, &VAR_12))
  return 0;


 if (!FUNC_2(&VAR_13, &VAR_5->tuplehash[VAR_10].tuple.src.u3, sizeof(VAR_13)) &&
     VAR_12 == VAR_5->tuplehash[VAR_10].tuple.src.u.udp.port)
  return 0;


 if (FUNC_10(VAR_1, &VAR_5->status))
  return 0;


 if ((VAR_14 = FUNC_4(VAR_5)) == ((void*)0))
  return -1;
 FUNC_5(VAR_14, VAR_2, FUNC_8(VAR_5),
     &VAR_5->tuplehash[!VAR_10].tuple.src.u3, &VAR_13,
     VAR_0, ((void*)0), &VAR_12);
 VAR_14->helper = VAR_3;

 if (FUNC_7(VAR_14, 0) == 0) {
  FUNC_9("nf_ct_ras: expect RAS ");
  FUNC_3(&VAR_14->tuple);
 } else
  VAR_11 = -1;

 FUNC_6(VAR_14);

 return VAR_11;
}
