
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcindex_filter_result {int exts; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcindex_filter_result*,int ,int) ;
 int FUNC_1 (int *,struct net*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct tcindex_filter_result *VAR_2,
          struct net *VAR_3)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 return FUNC_1(&VAR_2->exts, VAR_3, VAR_0,
        VAR_1);
}
