
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u32 ;
struct TYPE_7__ {int proto; int daddr; } ;
struct TYPE_8__ {int family; int saddr; TYPE_2__ id; int reqid; int mode; scalar_t__ seq; } ;
struct xfrm_userspi_info {int max; int min; TYPE_3__ info; } ;
struct TYPE_6__ {int daddr; } ;
struct xfrm_state {TYPE_1__ id; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct TYPE_9__ {int nlsk; } ;
struct net {TYPE_4__ xfrm; } ;
struct TYPE_10__ {int portid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_5__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 size_t VAR_1 ;
 int FUNC_3 (struct nlattr*) ;
 struct xfrm_userspi_info* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (int ,struct sk_buff*,int ) ;
 struct net* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (struct xfrm_state*,int ,int ) ;
 struct xfrm_state* FUNC_10 (struct net*,struct xfrm_mark*,int ,int ,int ,int ,int *,int *,int,int) ;
 struct xfrm_state* FUNC_11 (struct net*,int ,scalar_t__) ;
 int FUNC_12 (struct nlattr**,struct xfrm_mark*) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,struct xfrm_state*,int ) ;
 int FUNC_14 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
  struct nlattr **VAR_4)
{
 struct net *VAR_5 = FUNC_6(VAR_2->sk);
 struct xfrm_state *VAR_6;
 struct xfrm_userspi_info *VAR_7;
 struct sk_buff *VAR_8;
 xfrm_address_t *VAR_9;
 int VAR_10;
 int VAR_11;
 u32 VAR_12;
 struct xfrm_mark VAR_13;
 u32 VAR_14 = 0;

 VAR_7 = FUNC_4(VAR_3);
 VAR_11 = FUNC_7(VAR_7->info.id.proto, VAR_7->min, VAR_7->max);
 if (VAR_11)
  goto out_noput;

 VAR_10 = VAR_7->info.family;
 VAR_9 = &VAR_7->info.id.daddr;

 VAR_6 = ((void*)0);

 VAR_12 = FUNC_12(VAR_4, &VAR_13);

 if (VAR_4[VAR_1])
  VAR_14 = FUNC_3(VAR_4[VAR_1]);

 if (VAR_7->info.seq) {
  VAR_6 = FUNC_11(VAR_5, VAR_12, VAR_7->info.seq);
  if (VAR_6 && !FUNC_8(&VAR_6->id.daddr, VAR_9, VAR_10)) {
   FUNC_14(VAR_6);
   VAR_6 = ((void*)0);
  }
 }

 if (!VAR_6)
  VAR_6 = FUNC_10(VAR_5, &VAR_13, VAR_7->info.mode, VAR_7->info.reqid,
      VAR_14, VAR_7->info.id.proto, VAR_9,
      &VAR_7->info.saddr, 1,
      VAR_10);
 VAR_11 = -VAR_0;
 if (VAR_6 == ((void*)0))
  goto out_noput;

 VAR_11 = FUNC_9(VAR_6, VAR_7->min, VAR_7->max);
 if (VAR_11)
  goto out;

 VAR_8 = FUNC_13(VAR_2, VAR_6, VAR_3->nlmsg_seq);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_2(VAR_8);
  goto out;
 }

 VAR_11 = FUNC_5(VAR_5->xfrm.nlsk, VAR_8, FUNC_1(VAR_2).portid);

out:
 FUNC_14(VAR_6);
out_noput:
 return VAR_11;
}
