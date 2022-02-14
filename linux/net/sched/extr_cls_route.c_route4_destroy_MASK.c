
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct route4_head {int * table; int * ht; } ;
struct route4_filter {int exts; int res; int next; } ;
struct route4_bucket {int * table; int * ht; } ;
struct netlink_ext_ack {int dummy; } ;


 int FUNC_0 (int ,struct route4_filter*) ;
 int FUNC_1 (struct route4_filter*) ;
 int FUNC_2 (struct route4_head*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct route4_filter*) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct tcf_proto*,int *) ;

__attribute__((used)) static void FUNC_7(struct tcf_proto *VAR_1, bool VAR_2,
      struct netlink_ext_ack *VAR_3)
{
 struct route4_head *VAR_4 = FUNC_4(VAR_1->root);
 int VAR_5, VAR_6;

 if (VAR_4 == ((void*)0))
  return;

 for (VAR_5 = 0; VAR_5 <= 256; VAR_5++) {
  struct route4_bucket *VAR_7;

  VAR_7 = FUNC_4(VAR_4->table[VAR_5]);
  if (VAR_7) {
   for (VAR_6 = 0; VAR_6 <= 32; VAR_6++) {
    struct route4_filter *VAR_8;

    while ((VAR_8 = FUNC_4(VAR_7->ht[VAR_6])) != ((void*)0)) {
     struct route4_filter *VAR_9;

     VAR_9 = FUNC_4(VAR_8->next);
     FUNC_0(VAR_7->ht[VAR_6], VAR_9);
     FUNC_6(VAR_1, &VAR_8->res);
     if (FUNC_5(&VAR_8->exts))
      FUNC_3(VAR_8);
     else
      FUNC_1(VAR_8);
    }
   }
   FUNC_0(VAR_4->table[VAR_5], ((void*)0));
   FUNC_2(VAR_7, VAR_0);
  }
 }
 FUNC_2(VAR_4, VAR_0);
}
