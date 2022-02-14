
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ntodelete; int latestRemovedXid; } ;
typedef TYPE_1__ gistxlogDelete ;
typedef int XLogRecPtr ;
struct TYPE_9__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int RelFileNode ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int *,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ,int *) ;
 int FUNC_10 (TYPE_2__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_13(XLogReaderState *VAR_3)
{
 XLogRecPtr VAR_4 = VAR_3->EndRecPtr;
 gistxlogDelete *VAR_5 = (gistxlogDelete *) FUNC_11(VAR_3);
 Buffer VAR_6;
 Page VAR_7;
 if (VAR_1)
 {
  RelFileNode VAR_8;

  FUNC_10(VAR_3, 0, &VAR_8, ((void*)0), ((void*)0));

  FUNC_7(VAR_5->latestRemovedXid, VAR_8);
 }

 if (FUNC_9(VAR_3, 0, &VAR_6) == VAR_0)
 {
  VAR_7 = (Page) FUNC_0(VAR_6);

  if (FUNC_12(VAR_3) > VAR_2)
  {
   OffsetNumber *VAR_9;

   VAR_9 = (OffsetNumber *) ((char *) VAR_5 + VAR_2);

   FUNC_5(VAR_7, VAR_9, VAR_5->ntodelete);
  }

  FUNC_2(VAR_7);
  FUNC_3(VAR_7);

  FUNC_6(VAR_7, VAR_4);
  FUNC_4(VAR_6);
 }

 if (FUNC_1(VAR_6))
  FUNC_8(VAR_6);
}
