
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ current_buf; int * strategy; } ;
typedef int Relation ;
typedef scalar_t__ ReadBufferMode ;
typedef TYPE_1__* BulkInsertState ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static Buffer
FUNC_5(Relation VAR_4, BlockNumber VAR_5,
    ReadBufferMode VAR_6, BulkInsertState VAR_7)
{
 Buffer VAR_8;


 if (!VAR_7)
  return FUNC_3(VAR_4, VAR_1, VAR_5,
          VAR_6, ((void*)0));


 if (VAR_7->current_buf != VAR_0)
 {
  if (FUNC_1(VAR_7->current_buf) == VAR_5)
  {




   FUNC_0(VAR_6 != VAR_3 &&
       VAR_6 != VAR_2);

   FUNC_2(VAR_7->current_buf);
   return VAR_7->current_buf;
  }

  FUNC_4(VAR_7->current_buf);
  VAR_7->current_buf = VAR_0;
 }


 VAR_8 = FUNC_3(VAR_4, VAR_1, VAR_5,
        VAR_6, VAR_7->strategy);


 FUNC_2(VAR_8);
 VAR_7->current_buf = VAR_8;

 return VAR_8;
}
