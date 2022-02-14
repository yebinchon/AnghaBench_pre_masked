
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct neigh_table {scalar_t__ family; int gc_thresh1; int gc_thresh2; int gc_thresh3; int gc_interval; int lock; int id; } ;
struct neigh_parms {int reachable_time; } ;
struct ndtmsg {scalar_t__ ndtm_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;





 size_t VAR_18 ;

 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct neigh_parms*,int ) ;
 int FUNC_1 (struct neigh_parms*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (int ) ;
 int VAR_26 ;
 int FUNC_3 (int ,struct neigh_parms*) ;
 int VAR_27 ;
 struct neigh_parms* FUNC_4 (struct neigh_table*,struct net*,int) ;
 int FUNC_5 (int ) ;
 struct neigh_table** VAR_28 ;
 int FUNC_6 (struct net*,int *) ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct nlattr**,int,struct nlattr*,int ,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_10 (struct nlattr*,int ) ;
 struct ndtmsg* FUNC_11 (struct nlmsghdr*) ;
 int FUNC_12 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 struct net* FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_31, struct nlmsghdr *VAR_32,
   struct netlink_ext_ack *VAR_33)
{
 struct net *VAR_34 = FUNC_13(VAR_31->sk);
 struct neigh_table *VAR_35;
 struct ndtmsg *VAR_36;
 struct nlattr *VAR_37[VAR_12+1];
 bool VAR_38 = 0;
 int VAR_39, VAR_40;

 VAR_39 = FUNC_12(VAR_32, sizeof(*VAR_36), VAR_37, VAR_12,
         VAR_29, VAR_33);
 if (VAR_39 < 0)
  goto errout;

 if (VAR_37[VAR_13] == ((void*)0)) {
  VAR_39 = -VAR_4;
  goto errout;
 }

 VAR_36 = FUNC_11(VAR_32);

 for (VAR_40 = 0; VAR_40 < VAR_20; VAR_40++) {
  VAR_35 = VAR_28[VAR_40];
  if (!VAR_35)
   continue;
  if (VAR_36->ndtm_family && VAR_35->family != VAR_36->ndtm_family)
   continue;
  if (FUNC_10(VAR_37[VAR_13], VAR_35->id) == 0) {
   VAR_38 = 1;
   break;
  }
 }

 if (!VAR_38)
  return -VAR_5;





 FUNC_14(&VAR_35->lock);

 if (VAR_37[VAR_14]) {
  struct nlattr *VAR_41[VAR_19+1];
  struct neigh_parms *VAR_42;
  int VAR_43, VAR_44 = 0;

  VAR_39 = FUNC_9(VAR_41, VAR_19,
        VAR_37[VAR_14],
        VAR_30, VAR_33);
  if (VAR_39 < 0)
   goto errout_tbl_lock;

  if (VAR_41[VAR_18])
   VAR_44 = FUNC_8(VAR_41[VAR_18]);

  VAR_42 = FUNC_4(VAR_35, VAR_34, VAR_44);
  if (VAR_42 == ((void*)0)) {
   VAR_39 = -VAR_5;
   goto errout_tbl_lock;
  }

  for (VAR_43 = 1; VAR_43 <= VAR_19; VAR_43++) {
   if (VAR_41[VAR_43] == ((void*)0))
    continue;

   switch (VAR_43) {
   case 131:
    FUNC_1(VAR_42, VAR_24,
           FUNC_8(VAR_41[VAR_43]) *
           FUNC_2(VAR_6));
    break;
   case 130:
    FUNC_1(VAR_42, VAR_24,
           FUNC_8(VAR_41[VAR_43]));
    break;
   case 132:
    FUNC_1(VAR_42, VAR_23,
           FUNC_8(VAR_41[VAR_43]));
    break;
   case 140:
    FUNC_1(VAR_42, VAR_1,
           FUNC_8(VAR_41[VAR_43]));
    break;
   case 128:
    FUNC_1(VAR_42, VAR_26,
           FUNC_8(VAR_41[VAR_43]));
    break;
   case 135:
    FUNC_1(VAR_42, VAR_9,
           FUNC_8(VAR_41[VAR_43]));
    break;
   case 134:
    FUNC_1(VAR_42, VAR_10,
           FUNC_8(VAR_41[VAR_43]));
    break;
   case 139:
    FUNC_1(VAR_42, VAR_2,
           FUNC_7(VAR_41[VAR_43]));




    VAR_42->reachable_time =
     FUNC_5(FUNC_0(VAR_42, VAR_2));
    break;
   case 137:
    FUNC_1(VAR_42, VAR_7,
           FUNC_7(VAR_41[VAR_43]));
    break;
   case 138:
    FUNC_1(VAR_42, VAR_3,
           FUNC_7(VAR_41[VAR_43]));
    FUNC_3(VAR_21, VAR_42);
    break;
   case 129:
    FUNC_1(VAR_42, VAR_25,
           FUNC_7(VAR_41[VAR_43]));
    break;
   case 141:
    FUNC_1(VAR_42, VAR_0,
           FUNC_7(VAR_41[VAR_43]));
    break;
   case 133:
    FUNC_1(VAR_42, VAR_22,
           FUNC_7(VAR_41[VAR_43]));
    break;
   case 136:
    FUNC_1(VAR_42, VAR_8,
           FUNC_7(VAR_41[VAR_43]));
    break;
   }
  }
 }

 VAR_39 = -VAR_5;
 if ((VAR_37[VAR_15] || VAR_37[VAR_16] ||
      VAR_37[VAR_17] || VAR_37[VAR_11]) &&
     !FUNC_6(VAR_34, &VAR_27))
  goto errout_tbl_lock;

 if (VAR_37[VAR_15])
  VAR_35->gc_thresh1 = FUNC_8(VAR_37[VAR_15]);

 if (VAR_37[VAR_16])
  VAR_35->gc_thresh2 = FUNC_8(VAR_37[VAR_16]);

 if (VAR_37[VAR_17])
  VAR_35->gc_thresh3 = FUNC_8(VAR_37[VAR_17]);

 if (VAR_37[VAR_11])
  VAR_35->gc_interval = FUNC_7(VAR_37[VAR_11]);

 VAR_39 = 0;

errout_tbl_lock:
 FUNC_15(&VAR_35->lock);
errout:
 return VAR_39;
}
