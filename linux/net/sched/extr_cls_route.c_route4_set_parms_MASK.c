
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct route4_head {int * table; } ;
struct TYPE_2__ {void* classid; } ;
struct route4_filter {int handle; int id; int iif; TYPE_1__ res; struct tcf_proto* tp; struct route4_bucket* bkt; int next; int exts; } ;
struct route4_bucket {int * ht; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 unsigned int FUNC_0 (int) ;
 struct route4_bucket* FUNC_1 (int,int ) ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (int ,struct route4_bucket*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct tcf_proto*,TYPE_1__*,unsigned long) ;
 int FUNC_6 (struct net*,struct tcf_proto*,struct nlattr**,struct nlattr*,int *,int,int,struct netlink_ext_ack*) ;
 unsigned int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_8, struct tcf_proto *VAR_9,
       unsigned long VAR_10, struct route4_filter *VAR_11,
       u32 VAR_12, struct route4_head *VAR_13,
       struct nlattr **VAR_14, struct nlattr *VAR_15, int VAR_16,
       bool VAR_17, struct netlink_ext_ack *VAR_18)
{
 u32 VAR_19 = 0, VAR_20 = 0, VAR_21 = 0x8000;
 struct route4_filter *VAR_22;
 unsigned int VAR_23;
 struct route4_bucket *VAR_24;
 int VAR_25;

 VAR_25 = FUNC_6(VAR_8, VAR_9, VAR_14, VAR_15, &VAR_11->exts, VAR_17, 1, VAR_18);
 if (VAR_25 < 0)
  return VAR_25;

 if (VAR_14[VAR_7]) {
  if (VAR_16 && VAR_12 & 0x8000)
   return -VAR_1;
  VAR_20 = FUNC_2(VAR_14[VAR_7]);
  if (VAR_20 > 0xFF)
   return -VAR_1;
  VAR_21 = VAR_20;
 }

 if (VAR_14[VAR_5]) {
  if (VAR_14[VAR_6])
   return -VAR_1;
  VAR_19 = FUNC_2(VAR_14[VAR_5]);
  if (VAR_19 > 0xFF)
   return -VAR_1;
  VAR_21 |= VAR_19 << 16;
 } else if (VAR_14[VAR_6]) {
  VAR_19 = FUNC_2(VAR_14[VAR_6]);
  if (VAR_19 > 0x7FFF)
   return -VAR_1;
  VAR_21 |= (VAR_19 | 0x8000) << 16;
 } else
  VAR_21 |= 0xFFFF << 16;

 if (VAR_12 && VAR_16) {
  VAR_21 |= VAR_12 & 0x7F00;
  if (VAR_21 != VAR_12)
   return -VAR_1;
 }

 VAR_23 = FUNC_7(VAR_21);
 VAR_24 = FUNC_4(VAR_13->table[VAR_23]);
 if (!VAR_24) {
  VAR_24 = FUNC_1(sizeof(struct route4_bucket), VAR_3);
  if (VAR_24 == ((void*)0))
   return -VAR_2;

  FUNC_3(VAR_13->table[VAR_23], VAR_24);
 } else {
  unsigned int VAR_26 = FUNC_0(VAR_21 >> 16);

  for (VAR_22 = FUNC_4(VAR_24->ht[VAR_26]);
       VAR_22;
       VAR_22 = FUNC_4(VAR_22->next))
   if (VAR_22->handle == VAR_11->handle)
    return -VAR_0;
 }

 if (VAR_14[VAR_7])
  VAR_11->id = VAR_20;

 if (VAR_14[VAR_5])
  VAR_11->id = VAR_20 | VAR_19<<16;
 else if (VAR_14[VAR_6])
  VAR_11->iif = VAR_19;

 VAR_11->handle = VAR_21;
 VAR_11->bkt = VAR_24;
 VAR_11->tp = VAR_9;

 if (VAR_14[VAR_4]) {
  VAR_11->res.classid = FUNC_2(VAR_14[VAR_4]);
  FUNC_5(VAR_9, &VAR_11->res, VAR_10);
 }

 return 0;
}
