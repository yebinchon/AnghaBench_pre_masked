
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ ginxlogInsert ;
typedef int XLogRecPtr ;
struct TYPE_9__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Size ;
typedef int Page ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef int BlockIdData ;
typedef int BlockId ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int *) ;
 char* FUNC_9 (TYPE_2__*,int ,int *) ;
 char* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (int ,int,int ,char*) ;
 int FUNC_13 (int ,int,int ,char*) ;

__attribute__((used)) static void
FUNC_14(XLogReaderState *VAR_4)
{
 XLogRecPtr VAR_5 = VAR_4->EndRecPtr;
 ginxlogInsert *VAR_6 = (ginxlogInsert *) FUNC_10(VAR_4);
 Buffer VAR_7;



 BlockNumber VAR_8 = VAR_3;
 bool VAR_9 = (VAR_6->flags & VAR_2) != 0;





 if (!VAR_9)
 {
  char *VAR_10 = FUNC_10(VAR_4) + sizeof(ginxlogInsert);




  VAR_10 += sizeof(BlockIdData);
  VAR_8 = FUNC_1((BlockId) VAR_10);
  VAR_10 += sizeof(BlockIdData);

  FUNC_11(VAR_4, 1);
 }

 if (FUNC_8(VAR_4, 0, &VAR_7) == VAR_0)
 {
  Page VAR_11 = FUNC_2(VAR_7);
  Size VAR_12;
  char *VAR_13 = FUNC_9(VAR_4, 0, &VAR_12);


  if (VAR_6->flags & VAR_1)
  {
   FUNC_0(FUNC_4(VAR_11));
   FUNC_12(VAR_7, VAR_9, VAR_8, VAR_13);
  }
  else
  {
   FUNC_0(!FUNC_4(VAR_11));
   FUNC_13(VAR_7, VAR_9, VAR_8, VAR_13);
  }

  FUNC_6(VAR_11, VAR_5);
  FUNC_5(VAR_7);
 }
 if (FUNC_3(VAR_7))
  FUNC_7(VAR_7);
}
