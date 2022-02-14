
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcindex_filter_result {int rwork; int exts; int res; } ;
struct tcindex_filter {int result; int next; } ;
struct tcindex_data {int hash; int rwork; int * h; struct tcindex_filter_result* perfect; } ;
struct tcf_proto {int root; } ;
struct netlink_ext_ack {int dummy; } ;


 int FUNC_0 (struct tcindex_filter_result*) ;
 int FUNC_1 (char*,struct tcf_proto*,struct tcindex_data*) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct tcf_proto*,int *) ;
 int FUNC_6 (struct tcf_proto*,int *,int*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct tcf_proto *VAR_2, bool VAR_3,
       struct netlink_ext_ack *VAR_4)
{
 struct tcindex_data *VAR_5 = FUNC_2(VAR_2->root);
 int VAR_6;

 FUNC_1("tcindex_destroy(tp %p),p %p\n", VAR_2, VAR_5);

 if (VAR_5->perfect) {
  for (VAR_6 = 0; VAR_6 < VAR_5->hash; VAR_6++) {
   struct tcindex_filter_result *VAR_7 = VAR_5->perfect + VAR_6;

   FUNC_5(VAR_2, &VAR_7->res);
   if (FUNC_3(&VAR_7->exts))
    FUNC_4(&VAR_7->rwork,
            VAR_0);
   else
    FUNC_0(VAR_7);
  }
 }

 for (VAR_6 = 0; VAR_5->h && VAR_6 < VAR_5->hash; VAR_6++) {
  struct tcindex_filter *VAR_8, *VAR_9;
  bool VAR_10;

  for (VAR_8 = FUNC_2(VAR_5->h[VAR_6]); VAR_8; VAR_8 = VAR_9) {
   VAR_9 = FUNC_2(VAR_8->next);
   FUNC_6(VAR_2, &VAR_8->result, &VAR_10, VAR_3, ((void*)0));
  }
 }

 FUNC_4(&VAR_5->rwork, VAR_1);
}
