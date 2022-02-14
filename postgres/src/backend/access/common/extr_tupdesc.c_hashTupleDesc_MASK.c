
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_6__ {int atttypid; } ;
struct TYPE_5__ {int natts; int tdtypeid; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int) ;

uint32
FUNC_3(TupleDesc VAR_0)
{
 uint32 VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(0, FUNC_2(VAR_0->natts));
 VAR_1 = FUNC_1(VAR_1, FUNC_2(VAR_0->tdtypeid));
 for (VAR_2 = 0; VAR_2 < VAR_0->natts; ++VAR_2)
  VAR_1 = FUNC_1(VAR_1, FUNC_2(FUNC_0(VAR_0, VAR_2)->atttypid));

 return VAR_1;
}
