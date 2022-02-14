
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8 ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_7__ {int max_block_id; int EndRecPtr; } ;
typedef TYPE_1__ XLogReaderState ;
struct TYPE_8__ {scalar_t__ pd_lower; scalar_t__ pd_upper; } ;
typedef int Size ;
typedef TYPE_2__* PageHeader ;
typedef scalar_t__ Page ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,size_t,int *) ;
 char* FUNC_7 (TYPE_1__*,size_t,int *) ;
 int FUNC_8 (TYPE_1__*,size_t) ;
 int FUNC_9 (scalar_t__,char*,int ) ;
 int FUNC_10 (scalar_t__,int ,scalar_t__) ;

void
FUNC_11(XLogReaderState *VAR_3)
{
 XLogRecPtr VAR_4 = VAR_3->EndRecPtr;
 Buffer VAR_5[VAR_2];
 uint8 VAR_6;


 FUNC_0(VAR_3->max_block_id < VAR_2);


 for (VAR_6 = 0; VAR_6 <= VAR_3->max_block_id; VAR_6++)
 {
  XLogRedoAction VAR_7;

  if (!FUNC_8(VAR_3, VAR_6))
  {
   VAR_5[VAR_6] = VAR_1;
   continue;
  }

  VAR_7 = FUNC_6(VAR_3, VAR_6, &VAR_5[VAR_6]);


  if (VAR_7 == VAR_0)
  {
   Page VAR_8;
   PageHeader VAR_9;
   char *VAR_10;
   Size VAR_11;

   VAR_8 = FUNC_1(VAR_5[VAR_6]);
   VAR_10 = FUNC_7(VAR_3, VAR_6, &VAR_11);
   FUNC_9(VAR_8, VAR_10, VAR_11);







   VAR_9 = (PageHeader) VAR_8;
   FUNC_10(VAR_8 + VAR_9->pd_lower, 0,
       VAR_9->pd_upper - VAR_9->pd_lower);

   FUNC_4(VAR_8, VAR_4);
   FUNC_3(VAR_5[VAR_6]);
  }
 }


 for (VAR_6 = 0; VAR_6 <= VAR_3->max_block_id; VAR_6++)
 {
  if (FUNC_2(VAR_5[VAR_6]))
   FUNC_5(VAR_5[VAR_6]);
 }
}
