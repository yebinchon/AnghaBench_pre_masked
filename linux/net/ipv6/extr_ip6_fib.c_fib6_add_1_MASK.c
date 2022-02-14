
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct in6_addr {int dummy; } ;
struct rt6key {struct in6_addr addr; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {scalar_t__ fib6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_table {int tb6_lock; } ;
struct fib6_node {int fn_bit; int fn_flags; int left; int right; int parent; int leaf; } ;
struct fib6_info {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct fib6_node* FUNC_0 (int ) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (int ,struct fib6_node*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct in6_addr*,struct in6_addr*,int) ;
 scalar_t__ FUNC_5 (struct in6_addr*,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct fib6_info*) ;
 int FUNC_8 (struct in6_addr*,struct in6_addr*,int) ;
 int FUNC_9 (int *) ;
 struct fib6_node* FUNC_10 (struct net*) ;
 int FUNC_11 (struct net*,struct fib6_node*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,struct fib6_node*) ;
 void* FUNC_15 (int ,int ) ;

__attribute__((used)) static struct fib6_node *FUNC_16(struct net *VAR_4,
        struct fib6_table *VAR_5,
        struct fib6_node *VAR_6,
        struct in6_addr *VAR_7, int VAR_8,
        int VAR_9, int VAR_10,
        int VAR_11,
        struct netlink_ext_ack *VAR_12)
{
 struct fib6_node *VAR_13, *VAR_14, *VAR_15;
 struct fib6_node *VAR_16 = ((void*)0);
 struct rt6key *VAR_17;
 int VAR_18;
 __be32 VAR_19 = 0;

 FUNC_3("fib6_add_1\n");



 VAR_13 = VAR_6;

 do {
  struct fib6_info *VAR_20 = FUNC_15(VAR_13->leaf,
         FUNC_9(&VAR_5->tb6_lock));
  VAR_17 = (struct rt6key *)((u8 *)VAR_20 + VAR_9);




  if (VAR_8 < VAR_13->fn_bit ||
      !FUNC_8(&VAR_17->addr, VAR_7, VAR_13->fn_bit)) {
   if (!VAR_10) {
    if (VAR_11) {
     FUNC_1(VAR_12,
             "Can not replace route - no match found");
     FUNC_12("Can't replace route, no match found\n");
     return FUNC_0(-VAR_0);
    }
    FUNC_12("NLM_F_CREATE should be set when creating new route\n");
   }
   goto insert_above;
  }





  if (VAR_8 == VAR_13->fn_bit) {

   if (!(VAR_13->fn_flags & VAR_2)) {
    FUNC_2(VAR_13->leaf, ((void*)0));
    FUNC_7(VAR_20);

   } else if (VAR_13->fn_flags & VAR_3 &&
       FUNC_13(VAR_13->leaf) ==
       VAR_4->ipv6.fib6_null_entry) {
    FUNC_2(VAR_13->leaf, ((void*)0));
   }

   return VAR_13;
  }






  VAR_19 = FUNC_5(VAR_7, VAR_13->fn_bit);
  VAR_16 = VAR_13;
  VAR_13 = VAR_19 ?
       FUNC_15(VAR_13->right,
     FUNC_9(&VAR_5->tb6_lock)) :
       FUNC_15(VAR_13->left,
     FUNC_9(&VAR_5->tb6_lock));
 } while (VAR_13);

 if (!VAR_10) {
  if (VAR_11) {
   FUNC_1(VAR_12,
           "Can not replace route - no match found");
   FUNC_12("Can't replace route, no match found\n");
   return FUNC_0(-VAR_0);
  }
  FUNC_12("NLM_F_CREATE should be set when creating new route\n");
 }





 VAR_15 = FUNC_10(VAR_4);

 if (!VAR_15)
  return FUNC_0(-VAR_1);
 VAR_15->fn_bit = VAR_8;
 FUNC_2(VAR_15->parent, VAR_16);

 if (VAR_19)
  FUNC_14(VAR_16->right, VAR_15);
 else
  FUNC_14(VAR_16->left, VAR_15);

 return VAR_15;


insert_above:
 VAR_16 = FUNC_15(VAR_13->parent,
           FUNC_9(&VAR_5->tb6_lock));







 VAR_18 = FUNC_4(VAR_7, &VAR_17->addr, sizeof(*VAR_7));






 if (VAR_8 > VAR_18) {
  VAR_14 = FUNC_10(VAR_4);
  VAR_15 = FUNC_10(VAR_4);

  if (!VAR_14 || !VAR_15) {
   if (VAR_14)
    FUNC_11(VAR_4, VAR_14);
   if (VAR_15)
    FUNC_11(VAR_4, VAR_15);
   return FUNC_0(-VAR_1);
  }
  VAR_14->fn_bit = VAR_18;

  FUNC_2(VAR_14->parent, VAR_16);
  VAR_14->leaf = VAR_13->leaf;
  FUNC_6(FUNC_15(VAR_14->leaf,
    FUNC_9(&VAR_5->tb6_lock)));


  if (VAR_19)
   FUNC_14(VAR_16->right, VAR_14);
  else
   FUNC_14(VAR_16->left, VAR_14);

  VAR_15->fn_bit = VAR_8;

  FUNC_2(VAR_15->parent, VAR_14);
  FUNC_14(VAR_13->parent, VAR_14);

  if (FUNC_5(VAR_7, VAR_18)) {
   FUNC_14(VAR_14->right, VAR_15);
   FUNC_14(VAR_14->left, VAR_13);
  } else {
   FUNC_14(VAR_14->left, VAR_15);
   FUNC_14(VAR_14->right, VAR_13);
  }
 } else {







  VAR_15 = FUNC_10(VAR_4);

  if (!VAR_15)
   return FUNC_0(-VAR_1);

  VAR_15->fn_bit = VAR_8;

  FUNC_2(VAR_15->parent, VAR_16);

  if (FUNC_5(&VAR_17->addr, VAR_8))
   FUNC_2(VAR_15->right, VAR_13);
  else
   FUNC_2(VAR_15->left, VAR_13);

  FUNC_14(VAR_13->parent, VAR_15);

  if (VAR_19)
   FUNC_14(VAR_16->right, VAR_15);
  else
   FUNC_14(VAR_16->left, VAR_15);
 }
 return VAR_15;
}
