
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct flow_head {int filters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct flow_head* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct flow_head*) ;

__attribute__((used)) static int FUNC_3(struct tcf_proto *VAR_2)
{
 struct flow_head *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 FUNC_0(&VAR_3->filters);
 FUNC_2(VAR_2->root, VAR_3);
 return 0;
}
