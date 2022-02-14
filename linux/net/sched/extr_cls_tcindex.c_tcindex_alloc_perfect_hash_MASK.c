
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcindex_filter_result {int dummy; } ;
struct tcindex_data {int hash; TYPE_1__* perfect; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int exts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *,struct net*,int ,int ) ;
 int FUNC_2 (struct tcindex_data*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_4, struct tcindex_data *VAR_5)
{
 int VAR_6, VAR_7 = 0;

 VAR_5->perfect = FUNC_0(VAR_5->hash, sizeof(struct tcindex_filter_result),
         VAR_1);
 if (!VAR_5->perfect)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5->hash; VAR_6++) {
  VAR_7 = FUNC_1(&VAR_5->perfect[VAR_6].exts, VAR_4,
        VAR_2, VAR_3);
  if (VAR_7 < 0)
   goto errout;
 }

 return 0;

errout:
 FUNC_2(VAR_5);
 return VAR_7;
}
