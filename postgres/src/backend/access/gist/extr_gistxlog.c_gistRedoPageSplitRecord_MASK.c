
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {int npage; scalar_t__ markfollowright; int orignsn; scalar_t__ origrlink; scalar_t__ origleaf; } ;
typedef TYPE_1__ gistxlogPageSplit ;
typedef int XLogRecPtr ;
struct TYPE_13__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_11__ {scalar_t__ rightlink; } ;
typedef int Size ;
typedef scalar_t__ Page ;
typedef int IndexTuple ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_10__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 char* FUNC_11 (TYPE_2__*,int,int *) ;
 int FUNC_12 (TYPE_2__*,int,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int ) ;
 int * FUNC_15 (char*,int ,int*) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (scalar_t__,int *,int,int ) ;

__attribute__((used)) static void
FUNC_18(XLogReaderState *VAR_5)
{
 XLogRecPtr VAR_6 = VAR_5->EndRecPtr;
 gistxlogPageSplit *VAR_7 = (gistxlogPageSplit *) FUNC_13(VAR_5);
 Buffer VAR_8 = VAR_4;
 Buffer VAR_9;
 Page VAR_10;
 int VAR_11;
 bool VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_7->npage; VAR_11++)
 {
  int VAR_13;
  char *VAR_14;
  Size VAR_15;
  int VAR_16;
  BlockNumber VAR_17;
  IndexTuple *VAR_18;

  FUNC_12(VAR_5, VAR_11 + 1, ((void*)0), ((void*)0), &VAR_17);
  if (VAR_17 == VAR_2)
  {
   FUNC_0(VAR_11 == 0);
   VAR_12 = 1;
  }

  VAR_9 = FUNC_10(VAR_5, VAR_11 + 1);
  VAR_10 = (Page) FUNC_1(VAR_9);
  VAR_14 = FUNC_11(VAR_5, VAR_11 + 1, &VAR_15);

  VAR_18 = FUNC_15(VAR_14, VAR_15, &VAR_16);


  if (VAR_7->origleaf && VAR_17 != VAR_2)
   VAR_13 = VAR_0;
  else
   VAR_13 = 0;
  FUNC_2(VAR_9, VAR_13);


  FUNC_17(VAR_10, VAR_18, VAR_16, VAR_1);

  if (VAR_17 == VAR_2)
  {
   FUNC_5(VAR_10)->rightlink = VAR_3;
   FUNC_6(VAR_10, VAR_7->orignsn);
   FUNC_3(VAR_10);
  }
  else
  {
   if (VAR_11 < VAR_7->npage - 1)
   {
    BlockNumber VAR_19;

    FUNC_12(VAR_5, VAR_11 + 2, ((void*)0), ((void*)0), &VAR_19);
    FUNC_5(VAR_10)->rightlink = VAR_19;
   }
   else
    FUNC_5(VAR_10)->rightlink = VAR_7->origrlink;
   FUNC_6(VAR_10, VAR_7->orignsn);
   if (VAR_11 < VAR_7->npage - 1 && !VAR_12 &&
    VAR_7->markfollowright)
    FUNC_4(VAR_10);
   else
    FUNC_3(VAR_10);
  }

  FUNC_8(VAR_10, VAR_6);
  FUNC_7(VAR_9);

  if (VAR_11 == 0)
   VAR_8 = VAR_9;
  else
   FUNC_9(VAR_9);
 }


 if (FUNC_14(VAR_5, 0))
  FUNC_16(VAR_5, 0);


 FUNC_9(VAR_8);
}
