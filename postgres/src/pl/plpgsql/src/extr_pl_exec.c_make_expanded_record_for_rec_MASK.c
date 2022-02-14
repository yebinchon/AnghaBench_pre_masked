
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ TupleDesc ;
struct TYPE_14__ {scalar_t__ er_decltypeid; } ;
struct TYPE_13__ {scalar_t__ rectypeid; } ;
typedef TYPE_1__ PLpgSQL_rec ;
typedef int PLpgSQL_execstate ;
typedef int MemoryContext ;
typedef TYPE_2__ ExpandedRecordHeader ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (scalar_t__,int ) ;
 TYPE_2__* FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static ExpandedRecordHeader *
FUNC_7(PLpgSQL_execstate *VAR_1,
        PLpgSQL_rec *VAR_2,
        TupleDesc VAR_3,
        ExpandedRecordHeader *VAR_4)
{
 ExpandedRecordHeader *VAR_5;
 MemoryContext VAR_6 = FUNC_2(VAR_1);

 if (VAR_2->rectypeid != VAR_0)
 {



  FUNC_6(VAR_2);





  if (VAR_4 && VAR_2->rectypeid == VAR_4->er_decltypeid)
   VAR_5 = FUNC_3(VAR_4,
               VAR_6);
  else
   VAR_5 = FUNC_5(VAR_2->rectypeid, -1,
               VAR_6);
 }
 else
 {





  if (VAR_4 && !FUNC_0(VAR_4))
   VAR_5 = FUNC_3(VAR_4,
               VAR_6);
  else
  {
   if (!VAR_3)
    VAR_3 = FUNC_1(VAR_4);
   VAR_5 = FUNC_4(VAR_3,
                VAR_6);
  }
 }

 return VAR_5;
}
