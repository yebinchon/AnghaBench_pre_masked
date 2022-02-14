
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TuplesortInstrumentation ;
struct TYPE_5__ {int num_workers; } ;
struct TYPE_4__ {TYPE_2__* shared_info; } ;
typedef TYPE_1__ SortState ;
typedef scalar_t__ Size ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(SortState *VAR_3)
{
 Size VAR_4;
 VAR_0 *VAR_1;

 if (VAR_3->shared_info == ((void*)0))
  return;

 VAR_4 = FUNC_1(VAR_0, VAR_2)
  + VAR_3->shared_info->num_workers * sizeof(TuplesortInstrumentation);
 VAR_1 = FUNC_2(VAR_4);
 FUNC_0(VAR_1, VAR_3->shared_info, VAR_4);
 VAR_3->shared_info = VAR_1;
}
