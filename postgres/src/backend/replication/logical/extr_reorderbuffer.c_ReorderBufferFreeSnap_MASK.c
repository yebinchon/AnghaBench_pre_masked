
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ copied; } ;
typedef TYPE_1__* Snapshot ;
typedef int ReorderBuffer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(ReorderBuffer *VAR_0, Snapshot VAR_1)
{
 if (VAR_1->copied)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
