
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int dev; } ;
struct rs_msg {int opt; } ;
struct neighbour {int dummy; } ;
struct ndisc_options {scalar_t__ nd_opts_src_lladdr; } ;
struct TYPE_3__ {int forwarding; } ;
struct inet6_dev {TYPE_1__ cnf; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {struct in6_addr saddr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inet6_dev* FUNC_1 (int ) ;
 struct neighbour* FUNC_2 (int *,struct in6_addr const*,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct in6_addr const*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int VAR_6 ;
 int * FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int ,unsigned long,struct ndisc_options*) ;
 int FUNC_7 (int ,struct neighbour*,int *,int ,int,int ,struct ndisc_options*) ;
 int FUNC_8 (struct neighbour*) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct sk_buff *VAR_8)
{
 struct rs_msg *VAR_9 = (struct rs_msg *)FUNC_9(VAR_8);
 unsigned long VAR_10 = VAR_8->len - sizeof(*VAR_9);
 struct neighbour *VAR_11;
 struct inet6_dev *VAR_12;
 const struct in6_addr *VAR_13 = &FUNC_4(VAR_8)->saddr;
 struct ndisc_options VAR_14;
 u8 *VAR_15 = ((void*)0);

 if (VAR_8->len < sizeof(*VAR_9))
  return;

 VAR_12 = FUNC_1(VAR_8->dev);
 if (!VAR_12) {
  FUNC_0(1, VAR_5, "RS: can't find in6 device\n");
  return;
 }


 if (!VAR_12->cnf.forwarding)
  goto out;





 if (FUNC_3(VAR_13))
  goto out;


 if (!FUNC_6(VAR_8->dev, VAR_9->opt, VAR_10, &VAR_14)) {
  FUNC_0(2, VAR_7, "NS: invalid ND option, ignored\n");
  goto out;
 }

 if (VAR_14.nd_opts_src_lladdr) {
  VAR_15 = FUNC_5(VAR_14.nd_opts_src_lladdr,
          VAR_8->dev);
  if (!VAR_15)
   goto out;
 }

 VAR_11 = FUNC_2(&VAR_6, VAR_13, VAR_8->dev, 1);
 if (VAR_11) {
  FUNC_7(VAR_8->dev, VAR_11, VAR_15, VAR_4,
        VAR_3|
        VAR_1|
        VAR_2,
        VAR_0, &VAR_14);
  FUNC_8(VAR_11);
 }
out:
 return;
}
