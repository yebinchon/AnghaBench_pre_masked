
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rhlist; } ;
struct rhltable {TYPE_1__ ht; } ;
struct rhashtable_params {int dummy; } ;


 int FUNC_0 (TYPE_1__*,struct rhashtable_params const*) ;

int FUNC_1(struct rhltable *VAR_0, const struct rhashtable_params *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->ht, VAR_1);
 VAR_0->ht.rhlist = 1;
 return VAR_2;
}
