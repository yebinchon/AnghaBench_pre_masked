
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * TupleDesc ;
struct TYPE_7__ {scalar_t__ reliddesc; int * tupdesc; } ;
struct TYPE_6__ {int * rd_att; } ;
typedef TYPE_1__* Relation ;
typedef TYPE_2__* EphemeralNamedRelationMetadata ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (scalar_t__,int ) ;

TupleDesc
FUNC_3(EphemeralNamedRelationMetadata VAR_2)
{
 TupleDesc VAR_3;


 FUNC_0((VAR_2->reliddesc == VAR_0) != (VAR_2->tupdesc == ((void*)0)));

 if (VAR_2->tupdesc != ((void*)0))
  VAR_3 = VAR_2->tupdesc;
 else
 {
  Relation VAR_4;

  VAR_4 = FUNC_2(VAR_2->reliddesc, VAR_1);
  VAR_3 = VAR_4->rd_att;
  FUNC_1(VAR_4, VAR_1);
 }

 return VAR_3;
}
