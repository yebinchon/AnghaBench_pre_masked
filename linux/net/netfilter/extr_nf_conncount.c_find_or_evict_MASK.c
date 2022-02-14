
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conncount_tuple {unsigned long jiffies32; int cpu; int tuple; int zone; } ;
struct nf_conncount_list {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_conntrack_tuple_hash const* FUNC_0 (int ) ;
 int FUNC_1 (struct nf_conncount_list*,struct nf_conncount_tuple*) ;
 scalar_t__ VAR_2 ;
 struct nf_conntrack_tuple_hash* FUNC_2 (struct net*,int *,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static const struct nf_conntrack_tuple_hash *
FUNC_4(struct net *VAR_3, struct nf_conncount_list *VAR_4,
       struct nf_conncount_tuple *VAR_5)
{
 const struct nf_conntrack_tuple_hash *VAR_6;
 unsigned long VAR_7, VAR_8;
 int VAR_9 = FUNC_3();
 u32 VAR_10;

 VAR_6 = FUNC_2(VAR_3, &VAR_5->zone, &VAR_5->tuple);
 if (VAR_6)
  return VAR_6;
 VAR_8 = VAR_5->jiffies32;
 VAR_7 = (u32)VAR_2;






 VAR_10 = VAR_7 - VAR_8;
 if (VAR_5->cpu == VAR_9 || VAR_10 >= 2) {
  FUNC_1(VAR_4, VAR_5);
  return FUNC_0(-VAR_1);
 }

 return FUNC_0(-VAR_0);
}
