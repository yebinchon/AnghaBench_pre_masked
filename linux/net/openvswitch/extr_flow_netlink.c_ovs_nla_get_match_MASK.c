
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct sw_flow_match {TYPE_1__* key; scalar_t__ mask; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_7__ {int tci; } ;
struct TYPE_6__ {int tci; } ;
struct TYPE_8__ {TYPE_3__ cvlan; TYPE_2__ vlan; } ;
struct TYPE_5__ {scalar_t__ tun_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sw_flow_match*,int ,int,int) ;
 int FUNC_1 (struct sw_flow_match*,int ,int ,int) ;
 TYPE_4__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nlattr*) ;
 struct nlattr* FUNC_4 (struct nlattr const*,int ,int ) ;
 int FUNC_5 (struct nlattr*,int) ;
 int FUNC_6 (struct sw_flow_match*,int ,int ,int) ;
 int FUNC_7 (struct nlattr const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net*,struct sw_flow_match*,int ,struct nlattr const**,int,int) ;
 int FUNC_10 (struct nlattr const*,struct nlattr const**,int *,int) ;
 int FUNC_11 (struct nlattr const*,struct nlattr const**,int *,int) ;
 int FUNC_12 (struct sw_flow_match*,int *,struct nlattr const**,int,int) ;
 int VAR_5 ;

int FUNC_13(struct net *VAR_6, struct sw_flow_match *VAR_7,
        const struct nlattr *VAR_8,
        const struct nlattr *VAR_9,
        bool VAR_10)
{
 const struct nlattr *VAR_11[VAR_3 + 1];
 struct nlattr *VAR_12 = ((void*)0);
 u64 VAR_13 = 0;
 u64 VAR_14 = 0;
 int VAR_15;

 VAR_15 = FUNC_11(VAR_8, VAR_11, &VAR_13, VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_12(VAR_7, &VAR_13, VAR_11, 0, VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_9(VAR_6, VAR_7, VAR_13, VAR_11, 0, VAR_10);
 if (VAR_15)
  return VAR_15;

 if (VAR_7->mask) {
  if (!VAR_9) {
   VAR_12 = FUNC_4(VAR_8,
       FUNC_8(FUNC_7(VAR_8)),
       VAR_2);
   if (!VAR_12)
    return -VAR_1;

   FUNC_5(VAR_12, 0xff);




   if (VAR_7->key->tun_proto)
    FUNC_0(VAR_7, VAR_5,
        0xff, 1);

   VAR_9 = VAR_12;
  }

  VAR_15 = FUNC_10(VAR_9, VAR_11, &VAR_14, VAR_10);
  if (VAR_15)
   goto free_newmask;


  FUNC_1(VAR_7, VAR_4.vlan.tci, FUNC_2(0xffff), 1);
  FUNC_1(VAR_7, VAR_4.cvlan.tci, FUNC_2(0xffff), 1);

  VAR_15 = FUNC_12(VAR_7, &VAR_14, VAR_11, 1, VAR_10);
  if (VAR_15)
   goto free_newmask;

  VAR_15 = FUNC_9(VAR_6, VAR_7, VAR_14, VAR_11, 1,
        VAR_10);
  if (VAR_15)
   goto free_newmask;
 }

 if (!FUNC_6(VAR_7, VAR_13, VAR_14, VAR_10))
  VAR_15 = -VAR_0;

free_newmask:
 FUNC_3(VAR_12);
 return VAR_15;
}
