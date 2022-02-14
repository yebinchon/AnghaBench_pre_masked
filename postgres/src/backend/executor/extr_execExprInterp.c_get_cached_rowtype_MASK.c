
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {scalar_t__ tdtypeid; scalar_t__ tdtypmod; } ;
typedef scalar_t__ Oid ;
typedef int ExprContext ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static TupleDesc
FUNC_4(Oid VAR_1, int32 VAR_2,
       TupleDesc *VAR_3, ExprContext *VAR_4)
{
 TupleDesc VAR_5 = *VAR_3;


 if (VAR_5 == ((void*)0) ||
  VAR_1 != VAR_5->tdtypeid ||
  VAR_2 != VAR_5->tdtypmod)
 {
  VAR_5 = FUNC_3(VAR_1, VAR_2);

  if (*VAR_3)
  {

   FUNC_2(*VAR_3);
  }
  else
  {

   FUNC_1(VAR_4,
          VAR_0,
          FUNC_0(VAR_3));
  }
  *VAR_3 = VAR_5;
 }
 return VAR_5;
}
