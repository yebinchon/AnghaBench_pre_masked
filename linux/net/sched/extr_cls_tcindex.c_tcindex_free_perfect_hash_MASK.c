
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcindex_data {int hash; TYPE_1__* perfect; } ;
struct TYPE_2__ {int exts; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tcindex_data *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->hash; VAR_1++)
  FUNC_1(&VAR_0->perfect[VAR_1].exts);
 FUNC_0(VAR_0->perfect);
}
