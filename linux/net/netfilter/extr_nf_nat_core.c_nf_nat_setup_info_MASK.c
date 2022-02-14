
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_nat_range2 {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int status; int nat_bysource; TYPE_1__* tuplehash; } ;
struct net {int dummy; } ;
typedef int spinlock_t ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
struct TYPE_2__ {struct nf_conntrack_tuple tuple; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*,struct nf_nat_range2 const*,struct nf_conn*,int) ;
 unsigned int FUNC_2 (struct net*,struct nf_conntrack_tuple*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct nf_conn*,struct nf_conntrack_tuple*) ;
 int FUNC_5 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*) ;
 scalar_t__ FUNC_6 (struct nf_conn*) ;
 struct net* FUNC_7 (struct nf_conn*) ;
 int FUNC_8 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*) ;
 int * VAR_11 ;
 int FUNC_9 (struct nf_conn*,int) ;
 int * VAR_12 ;
 scalar_t__ FUNC_10 (struct nf_conn*) ;
 int FUNC_11 (struct nf_conn*) ;
 int FUNC_12 (struct nf_conn*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

unsigned int
FUNC_15(struct nf_conn *VAR_13,
    const struct nf_nat_range2 *VAR_14,
    enum nf_nat_manip_type VAR_15)
{
 struct net *VAR_16 = FUNC_7(VAR_13);
 struct nf_conntrack_tuple VAR_17, VAR_18;


 if (FUNC_6(VAR_13))
  return VAR_7;

 FUNC_0(VAR_15 != VAR_10 &&
  VAR_15 != VAR_9);

 if (FUNC_0(FUNC_9(VAR_13, VAR_15)))
  return VAR_8;






 FUNC_5(&VAR_17,
      &VAR_13->tuplehash[VAR_6].tuple);

 FUNC_1(&VAR_18, &VAR_17, VAR_14, VAR_13, VAR_15);

 if (!FUNC_8(&VAR_18, &VAR_17)) {
  struct nf_conntrack_tuple VAR_19;


  FUNC_5(&VAR_19, &VAR_18);
  FUNC_4(VAR_13, &VAR_19);


  if (VAR_15 == VAR_10)
   VAR_13->status |= VAR_3;
  else
   VAR_13->status |= VAR_1;

  if (FUNC_10(VAR_13) && !FUNC_11(VAR_13))
   if (!FUNC_12(VAR_13))
    return VAR_8;
 }

 if (VAR_15 == VAR_10) {
  unsigned int VAR_20;
  spinlock_t *VAR_21;

  VAR_20 = FUNC_2(VAR_16,
          &VAR_13->tuplehash[VAR_5].tuple);
  VAR_21 = &VAR_12[VAR_20 % VAR_0];
  FUNC_13(VAR_21);
  FUNC_3(&VAR_13->nat_bysource,
       &VAR_11[VAR_20]);
  FUNC_14(VAR_21);
 }


 if (VAR_15 == VAR_9)
  VAR_13->status |= VAR_2;
 else
  VAR_13->status |= VAR_4;

 return VAR_7;
}
