
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_9__ {int atttypid; } ;
struct TYPE_8__ {int atttypid; } ;
struct TYPE_7__ {int natts; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 char* FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int *,int*) ;
 int FUNC_4 (int ,int,TYPE_1__*,int*) ;

char *
FUNC_5(HeapTuple VAR_3, TupleDesc VAR_4, int VAR_5)
{
 Datum VAR_6;
 bool VAR_7;
 Oid VAR_8,
    VAR_9;
 bool VAR_10;

 VAR_2 = 0;

 if (VAR_5 > VAR_4->natts || VAR_5 == 0 ||
  VAR_5 <= VAR_0)
 {
  VAR_2 = VAR_1;
  return ((void*)0);
 }

 VAR_6 = FUNC_4(VAR_3, VAR_5, VAR_4, &VAR_7);
 if (VAR_7)
  return ((void*)0);

 if (VAR_5 > 0)
  VAR_8 = FUNC_2(VAR_4, VAR_5 - 1)->atttypid;
 else
  VAR_8 = (FUNC_1(VAR_5))->atttypid;

 FUNC_3(VAR_8, &VAR_9, &VAR_10);

 return FUNC_0(VAR_9, VAR_6);
}
