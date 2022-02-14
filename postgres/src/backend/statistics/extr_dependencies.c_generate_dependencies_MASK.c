
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int k; } ;
typedef TYPE_1__* DependencyGenerator ;
typedef int AttrNumber ;


 int FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(DependencyGenerator VAR_0)
{
 AttrNumber *VAR_1 = (AttrNumber *) FUNC_1(sizeof(AttrNumber) * VAR_0->k);

 FUNC_0(VAR_0, 0, 0, VAR_1);

 FUNC_2(VAR_1);
}
