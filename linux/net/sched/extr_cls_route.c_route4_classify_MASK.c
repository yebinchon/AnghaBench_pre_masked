
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct tcf_result {int dummy; } ;
struct tcf_proto {int root; } ;
struct sk_buff {int dummy; } ;
struct route4_head {int * table; TYPE_1__* fastmap; } ;
struct route4_filter {size_t id; int iif; int next; struct tcf_result res; } ;
struct route4_bucket {int * ht; } ;
struct dst_entry {size_t tclassid; } ;
struct TYPE_2__ {size_t id; int iif; struct route4_filter* filter; } ;


 int FUNC_0 () ;
 struct route4_filter* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 void* FUNC_2 (int ) ;
 size_t FUNC_3 (size_t,int) ;
 size_t FUNC_4 (size_t) ;
 size_t FUNC_5 (int) ;
 size_t FUNC_6 (size_t) ;
 size_t FUNC_7 () ;
 int FUNC_8 (struct route4_head*,size_t,int,struct route4_filter*) ;
 struct dst_entry* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_2, const struct tcf_proto *VAR_3,
      struct tcf_result *VAR_4)
{
 struct route4_head *VAR_5 = FUNC_2(VAR_3->root);
 struct dst_entry *VAR_6;
 struct route4_bucket *VAR_7;
 struct route4_filter *VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_6 = FUNC_9(VAR_2);
 if (!VAR_6)
  goto failure;

 VAR_9 = VAR_6->tclassid;

 VAR_11 = FUNC_1(VAR_2);

 VAR_10 = FUNC_3(VAR_9, VAR_11);

 FUNC_10(&VAR_1);
 if (VAR_9 == VAR_5->fastmap[VAR_10].id &&
     VAR_11 == VAR_5->fastmap[VAR_10].iif &&
     (VAR_8 = VAR_5->fastmap[VAR_10].filter) != ((void*)0)) {
  if (VAR_8 == VAR_0) {
   FUNC_11(&VAR_1);
   goto failure;
  }

  *VAR_4 = VAR_8->res;
  FUNC_11(&VAR_1);
  return 0;
 }
 FUNC_11(&VAR_1);

 VAR_10 = FUNC_6(VAR_9);

restart:
 VAR_7 = FUNC_2(VAR_5->table[VAR_10]);
 if (VAR_7) {
  for (VAR_8 = FUNC_2(VAR_7->ht[FUNC_4(VAR_9)]);
       VAR_8;
       VAR_8 = FUNC_2(VAR_8->next))
   if (VAR_8->id == VAR_9)
    FUNC_0();

  for (VAR_8 = FUNC_2(VAR_7->ht[FUNC_5(VAR_11)]);
       VAR_8;
       VAR_8 = FUNC_2(VAR_8->next))
   if (VAR_8->iif == VAR_11)
    FUNC_0();

  for (VAR_8 = FUNC_2(VAR_7->ht[FUNC_7()]);
       VAR_8;
       VAR_8 = FUNC_2(VAR_8->next))
   FUNC_0();
 }
 if (VAR_10 < 256) {
  VAR_10 = 256;
  VAR_9 &= ~0xFFFF;
  goto restart;
 }

 if (!VAR_12)
  FUNC_8(VAR_5, VAR_9, VAR_11, VAR_0);
failure:
 return -1;
}
