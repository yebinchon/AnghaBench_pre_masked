
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {int atttypid; } ;
struct TYPE_7__ {int atttypid; } ;
struct TYPE_6__ {int natts; } ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;

Oid
FUNC_2(TupleDesc VAR_4, int VAR_5)
{
 VAR_3 = 0;

 if (VAR_5 > VAR_4->natts || VAR_5 == 0 ||
  VAR_5 <= VAR_0)
 {
  VAR_3 = VAR_2;
  return VAR_1;
 }

 if (VAR_5 > 0)
  return FUNC_1(VAR_4, VAR_5 - 1)->atttypid;
 else
  return (FUNC_0(VAR_5))->atttypid;
}
