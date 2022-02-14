
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {int doff; } ;
struct sk_buff {unsigned int len; } ;
struct sane_request {scalar_t__ RPC_code; } ;
struct sane_reply_net_start {scalar_t__ status; scalar_t__ zero; int port; } ;
struct nf_ct_sane_master {scalar_t__ state; } ;
struct TYPE_6__ {int u3; } ;
struct TYPE_5__ {int u3; } ;
struct nf_conntrack_tuple {TYPE_3__ dst; TYPE_2__ src; } ;
struct nf_conntrack_expect {int tuple; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int _tcph ;
struct TYPE_4__ {struct nf_conntrack_tuple tuple; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct nf_conntrack_expect* FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (struct nf_conntrack_expect*,int ,int ,int *,int *,int ,int *,int *) ;
 int FUNC_6 (struct nf_conntrack_expect*) ;
 scalar_t__ FUNC_7 (struct nf_conntrack_expect*,int ) ;
 int FUNC_8 (struct sk_buff*,struct nf_conn*,char*) ;
 int FUNC_9 (struct nf_conn*) ;
 int VAR_11 ;
 struct nf_ct_sane_master* FUNC_10 (struct nf_conn*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,...) ;
 struct tcphdr* VAR_12 ;
 void* FUNC_13 (struct sk_buff*,unsigned int,unsigned int,struct tcphdr*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_13,
  unsigned int VAR_14,
  struct nf_conn *VAR_15,
  enum ip_conntrack_info VAR_16)
{
 unsigned int VAR_17, VAR_18;
 const struct tcphdr *VAR_19;
 struct tcphdr VAR_20;
 void *VAR_21;
 int VAR_22 = VAR_4;
 int VAR_23 = FUNC_1(VAR_16);
 struct nf_ct_sane_master *VAR_24 = FUNC_10(VAR_15);
 struct nf_conntrack_expect *VAR_25;
 struct nf_conntrack_tuple *VAR_26;
 struct sane_request *VAR_27;
 struct sane_reply_net_start *VAR_28;


 if (VAR_16 != VAR_2 &&
     VAR_16 != VAR_3)
  return VAR_4;


 VAR_19 = FUNC_13(VAR_13, VAR_14, sizeof(VAR_20), &VAR_20);
 if (VAR_19 == ((void*)0))
  return VAR_4;


 VAR_17 = VAR_14 + VAR_19->doff * 4;
 if (VAR_17 >= VAR_13->len)
  return VAR_4;

 VAR_18 = VAR_13->len - VAR_17;

 FUNC_14(&VAR_11);
 VAR_21 = FUNC_13(VAR_13, VAR_17, VAR_18, VAR_12);
 FUNC_0(VAR_21 == ((void*)0));

 if (VAR_23 == VAR_1) {
  if (VAR_18 != sizeof(struct sane_request))
   goto out;

  VAR_27 = VAR_21;
  if (VAR_27->RPC_code != FUNC_2(VAR_7)) {

   VAR_24->state = VAR_8;
   goto out;
  }


  VAR_24->state = VAR_9;
  goto out;
 }


 if (VAR_24->state != VAR_9)
  goto out;


 VAR_24->state = VAR_8;

 if (VAR_18 < sizeof(struct sane_reply_net_start)) {
  FUNC_12("NET_START reply too short\n");
  goto out;
 }

 VAR_28 = VAR_21;
 if (VAR_28->status != FUNC_2(VAR_10)) {

  FUNC_12("unsuccessful SANE_STATUS = %u\n",
    FUNC_11(VAR_28->status));
  goto out;
 }


 if (VAR_28->zero != 0)
  goto out;

 VAR_25 = FUNC_4(VAR_15);
 if (VAR_25 == ((void*)0)) {
  FUNC_8(VAR_13, VAR_15, "cannot alloc expectation");
  VAR_22 = VAR_6;
  goto out;
 }

 VAR_26 = &VAR_15->tuplehash[VAR_1].tuple;
 FUNC_5(VAR_25, VAR_5, FUNC_9(VAR_15),
     &VAR_26->src.u3, &VAR_26->dst.u3,
     VAR_0, ((void*)0), &VAR_28->port);

 FUNC_12("expect: ");
 FUNC_3(&VAR_25->tuple);


 if (FUNC_7(VAR_25, 0) != 0) {
  FUNC_8(VAR_13, VAR_15, "cannot add expectation");
  VAR_22 = VAR_6;
 }

 FUNC_6(VAR_25);

out:
 FUNC_15(&VAR_11);
 return VAR_22;
}
