
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcindex_data {int mask; int fall_through; int hash; } ;
struct tcf_proto {int root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tcindex_data* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,struct tcf_proto*) ;
 int FUNC_2 (int ,struct tcindex_data*) ;

__attribute__((used)) static int FUNC_3(struct tcf_proto *VAR_3)
{
 struct tcindex_data *VAR_4;

 FUNC_1("tcindex_init(tp %p)\n", VAR_3);
 VAR_4 = FUNC_0(sizeof(struct tcindex_data), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->mask = 0xffff;
 VAR_4->hash = VAR_0;
 VAR_4->fall_through = 1;

 FUNC_2(VAR_3->root, VAR_4);
 return 0;
}
