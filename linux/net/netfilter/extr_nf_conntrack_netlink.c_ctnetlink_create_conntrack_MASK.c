
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_helper {int (* from_nlattr ) (struct nlattr*,struct nf_conn*) ;} ;
struct nf_conn_tstamp {int start; } ;
struct nf_conn_help {int helper; } ;
struct nf_conn {struct nf_conn* master; int status; int proto; scalar_t__ timeout; } ;
struct net {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct nf_conn* FUNC_0 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (int ,struct nf_conntrack_helper*) ;
 struct nf_conntrack_helper* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct nf_conn*,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_7 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_8 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_9 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_10 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_11 (struct nlattr const* const,char**,struct nlattr**) ;
 int FUNC_12 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ,int *) ;
 int FUNC_13 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int ,int) ;
 struct nf_conn_tstamp* FUNC_16 (struct nf_conn*) ;
 struct nf_conn* FUNC_17 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple*,struct nf_conntrack_tuple*,int ) ;
 struct nf_conntrack_tuple_hash* FUNC_18 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple*) ;
 int FUNC_19 (struct nf_conn*) ;
 int FUNC_20 (struct nf_conn*) ;
 int FUNC_21 (struct nf_conn*,int ) ;
 int FUNC_22 (struct nf_conn*,int ,int ,int ) ;
 struct nf_conn_help* FUNC_23 (struct nf_conn*,int ) ;
 int FUNC_24 (struct nf_conn*) ;
 int FUNC_25 (struct nf_conn*) ;
 int FUNC_26 (struct nf_conn*) ;
 int FUNC_27 (struct nf_conn*,int ) ;
 struct nf_conn* FUNC_28 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_29 (struct nf_conn*) ;
 int FUNC_30 (struct nf_conn*) ;
 scalar_t__ VAR_19 ;
 int FUNC_31 (struct nlattr const* const) ;
 scalar_t__ FUNC_32 (int ) ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 scalar_t__ FUNC_35 (char*,char*) ;
 int FUNC_36 (struct nlattr*,struct nf_conn*) ;

__attribute__((used)) static struct nf_conn *
FUNC_37(struct net *VAR_20,
      const struct nf_conntrack_zone *VAR_21,
      const struct nlattr * const VAR_22[],
      struct nf_conntrack_tuple *VAR_23,
      struct nf_conntrack_tuple *VAR_24,
      u8 VAR_25)
{
 struct nf_conn *VAR_26;
 int VAR_27 = -VAR_10;
 struct nf_conntrack_helper *VAR_28;
 struct nf_conn_tstamp *VAR_29;
 u64 VAR_30;

 VAR_26 = FUNC_17(VAR_20, VAR_21, VAR_23, VAR_24, VAR_14);
 if (FUNC_1(VAR_26))
  return FUNC_0(-VAR_12);

 if (!VAR_22[VAR_7])
  goto err1;

 VAR_30 = (u64)FUNC_32(FUNC_31(VAR_22[VAR_7])) * VAR_15;
 if (VAR_30 > VAR_16)
  VAR_30 = VAR_16;
 VAR_26->timeout = (u32)VAR_30 + VAR_19;

 FUNC_33();
  if (VAR_22[VAR_0]) {
  char *VAR_31 = ((void*)0);
  struct nlattr *VAR_32 = ((void*)0);

  VAR_27 = FUNC_11(VAR_22[VAR_0], &VAR_31, &VAR_32);
   if (VAR_27 < 0)
   goto err2;

  VAR_28 = FUNC_3(VAR_31, FUNC_24(VAR_26),
          FUNC_26(VAR_26));
  if (VAR_28 == ((void*)0)) {
   FUNC_34();
   VAR_27 = -VAR_13;
   goto err1;
  } else {
   struct nf_conn_help *VAR_33;

   VAR_33 = FUNC_23(VAR_26, VAR_14);
   if (VAR_33 == ((void*)0)) {
    VAR_27 = -VAR_12;
    goto err2;
   }

   if (VAR_28->from_nlattr)
    VAR_28->from_nlattr(VAR_32, VAR_26);


   FUNC_2(VAR_33->helper, VAR_28);
  }
 } else {

  VAR_27 = FUNC_4(VAR_26, ((void*)0), VAR_14);
  if (VAR_27 < 0)
   goto err2;
 }

 VAR_27 = FUNC_13(VAR_26, VAR_22);
 if (VAR_27 < 0)
  goto err2;

 FUNC_21(VAR_26, VAR_14);
 FUNC_27(VAR_26, VAR_14);
 FUNC_22(VAR_26, 0, 0, VAR_14);
 FUNC_25(VAR_26);
 FUNC_29(VAR_26);
 FUNC_30(VAR_26);


 VAR_26->status |= VAR_17;

 if (VAR_22[VAR_5]) {
  VAR_27 = FUNC_9(VAR_26, VAR_22);
  if (VAR_27 < 0)
   goto err2;
 }

 if (VAR_22[VAR_3] || VAR_22[VAR_4]) {
  VAR_27 = FUNC_8(VAR_26, VAR_22);
  if (VAR_27 < 0)
   goto err2;
 }

 FUNC_15(&VAR_26->proto, 0, sizeof(VAR_26->proto));
 if (VAR_22[VAR_2]) {
  VAR_27 = FUNC_7(VAR_26, VAR_22);
  if (VAR_27 < 0)
   goto err2;
 }

 if (VAR_22[VAR_6]) {
  VAR_27 = FUNC_10(VAR_26, VAR_22);
  if (VAR_27 < 0)
   goto err2;
 }







 if (VAR_22[VAR_8]) {
  struct nf_conntrack_tuple VAR_34;
  struct nf_conntrack_tuple_hash *VAR_35;
  struct nf_conn *VAR_36;

  VAR_27 = FUNC_12(VAR_22, &VAR_34, VAR_8,
         VAR_25, ((void*)0));
  if (VAR_27 < 0)
   goto err2;

  VAR_35 = FUNC_18(VAR_20, VAR_21, &VAR_34);
  if (VAR_35 == ((void*)0)) {
   VAR_27 = -VAR_11;
   goto err2;
  }
  VAR_36 = FUNC_28(VAR_35);
  FUNC_5(VAR_18, &VAR_26->status);
  VAR_26->master = VAR_36;
 }
 VAR_29 = FUNC_16(VAR_26);
 if (VAR_29)
  VAR_29->start = FUNC_14();

 VAR_27 = FUNC_20(VAR_26);
 if (VAR_27 < 0)
  goto err2;

 FUNC_34();

 return VAR_26;

err2:
 FUNC_34();
err1:
 FUNC_19(VAR_26);
 return FUNC_0(VAR_27);
}
