
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct route4_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct route4_head* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,struct route4_head*) ;

__attribute__((used)) static int FUNC_2(struct tcf_proto *VAR_2)
{
 struct route4_head *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct route4_head), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_2->root, VAR_3);
 return 0;
}
