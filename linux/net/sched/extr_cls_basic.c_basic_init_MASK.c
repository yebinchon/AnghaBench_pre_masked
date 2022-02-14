
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct basic_head {int handle_idr; int flist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct basic_head* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct basic_head*) ;

__attribute__((used)) static int FUNC_4(struct tcf_proto *VAR_2)
{
 struct basic_head *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 FUNC_0(&VAR_3->flist);
 FUNC_1(&VAR_3->handle_idr);
 FUNC_3(VAR_2->root, VAR_3);
 return 0;
}
