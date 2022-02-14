
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_4__ {int tdtypmod; int tdtypeid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(TupleDesc VAR_1)
{
 FUNC_0(VAR_0,
   "TupleDesc reference leak: TupleDesc %p (%u,%d) still referenced",
   VAR_1, VAR_1->tdtypeid, VAR_1->tdtypmod);
}
