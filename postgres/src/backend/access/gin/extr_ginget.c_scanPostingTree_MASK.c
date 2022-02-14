
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int buffer; } ;
struct TYPE_7__ {int predictNumberResult; int matchBitmap; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_1__* GinScanEntry ;
typedef TYPE_2__ GinBtreeStack ;
typedef int GinBtreeData ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_6__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(Relation VAR_2, GinScanEntry VAR_3,
    BlockNumber VAR_4, Snapshot VAR_5)
{
 GinBtreeData VAR_6;
 GinBtreeStack *VAR_7;
 Buffer VAR_8;
 Page VAR_9;


 VAR_7 = FUNC_7(&VAR_6, VAR_2, VAR_4, VAR_5);
 VAR_8 = VAR_7->buffer;

 FUNC_4(VAR_8);

 FUNC_6(VAR_7);




 for (;;)
 {
  VAR_9 = FUNC_0(VAR_8);
  if ((FUNC_2(VAR_9)->flags & VAR_0) == 0)
  {
   int VAR_10 = FUNC_1(VAR_9, VAR_3->matchBitmap);

   VAR_3->predictNumberResult += VAR_10;
  }

  if (FUNC_3(VAR_9))
   break;

  VAR_8 = FUNC_8(VAR_8, VAR_2, VAR_1);
 }

 FUNC_5(VAR_8);
}
