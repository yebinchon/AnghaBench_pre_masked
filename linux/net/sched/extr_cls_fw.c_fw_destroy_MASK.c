
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct netlink_ext_ack {int dummy; } ;
struct fw_head {int * ht; } ;
struct fw_filter {int rwork; int exts; int res; int next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (struct fw_filter*) ;
 int VAR_1 ;
 int FUNC_2 (struct fw_head*,int ) ;
 int VAR_2 ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct tcf_proto*,int *) ;

__attribute__((used)) static void FUNC_7(struct tcf_proto *VAR_3, bool VAR_4,
         struct netlink_ext_ack *VAR_5)
{
 struct fw_head *VAR_6 = FUNC_3(VAR_3->root);
 struct fw_filter *VAR_7;
 int VAR_8;

 if (VAR_6 == ((void*)0))
  return;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  while ((VAR_7 = FUNC_3(VAR_6->ht[VAR_8])) != ((void*)0)) {
   FUNC_0(VAR_6->ht[VAR_8],
      FUNC_3(VAR_7->next));
   FUNC_6(VAR_3, &VAR_7->res);
   if (FUNC_4(&VAR_7->exts))
    FUNC_5(&VAR_7->rwork, VAR_1);
   else
    FUNC_1(VAR_7);
  }
 }
 FUNC_2(VAR_6, VAR_2);
}
