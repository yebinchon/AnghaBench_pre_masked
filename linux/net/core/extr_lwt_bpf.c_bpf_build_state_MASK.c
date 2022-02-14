
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct lwtunnel_state {scalar_t__ headroom; int flags; int type; } ;
struct bpf_lwt {unsigned int family; int xmit; int out; int in; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_0 (struct lwtunnel_state*) ;
 struct bpf_lwt* FUNC_1 (struct lwtunnel_state*) ;
 int VAR_19 ;
 int FUNC_2 (struct nlattr*,int *,int ) ;
 int FUNC_3 (struct lwtunnel_state*) ;
 struct lwtunnel_state* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_7(struct nlattr *VAR_20,
      unsigned int VAR_21, const void *VAR_22,
      struct lwtunnel_state **VAR_23,
      struct netlink_ext_ack *VAR_24)
{
 struct nlattr *VAR_25[VAR_14 + 1];
 struct lwtunnel_state *VAR_26;
 struct bpf_lwt *VAR_27;
 int VAR_28;

 if (VAR_21 != VAR_0 && VAR_21 != VAR_1)
  return -VAR_5;

 VAR_28 = FUNC_6(VAR_25, VAR_14, VAR_20, VAR_19,
       VAR_24);
 if (VAR_28 < 0)
  return VAR_28;

 if (!VAR_25[VAR_13] && !VAR_25[VAR_16] && !VAR_25[VAR_17])
  return -VAR_6;

 VAR_26 = FUNC_4(sizeof(*VAR_27));
 if (!VAR_26)
  return -VAR_7;

 VAR_26->type = VAR_9;
 VAR_27 = FUNC_1(VAR_26);

 if (VAR_25[VAR_13]) {
  VAR_26->flags |= VAR_10;
  VAR_28 = FUNC_2(VAR_25[VAR_13], &VAR_27->in,
         VAR_2);
  if (VAR_28 < 0)
   goto errout;
 }

 if (VAR_25[VAR_16]) {
  VAR_26->flags |= VAR_11;
  VAR_28 = FUNC_2(VAR_25[VAR_16], &VAR_27->out,
         VAR_3);
  if (VAR_28 < 0)
   goto errout;
 }

 if (VAR_25[VAR_17]) {
  VAR_26->flags |= VAR_12;
  VAR_28 = FUNC_2(VAR_25[VAR_17], &VAR_27->xmit,
         VAR_4);
  if (VAR_28 < 0)
   goto errout;
 }

 if (VAR_25[VAR_18]) {
  u32 VAR_29 = FUNC_5(VAR_25[VAR_18]);

  if (VAR_29 > VAR_15) {
   VAR_28 = -VAR_8;
   goto errout;
  }

  VAR_26->headroom = VAR_29;
 }

 VAR_27->family = VAR_21;
 *VAR_23 = VAR_26;

 return 0;

errout:
 FUNC_0(VAR_26);
 FUNC_3(VAR_26);
 return VAR_28;
}
