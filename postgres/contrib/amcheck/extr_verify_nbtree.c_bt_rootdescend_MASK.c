
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int bounds_valid; int buf; TYPE_2__* itup_key; int itemsz; int itup; } ;
struct TYPE_11__ {int * scantid; scalar_t__ heapkeyspace; } ;
struct TYPE_10__ {int rel; scalar_t__ rootdescend; scalar_t__ readonly; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int IndexTuple ;
typedef int Buffer ;
typedef TYPE_1__ BtreeCheckState ;
typedef int BTStack ;
typedef TYPE_2__* BTScanInsert ;
typedef TYPE_3__ BTInsertStateData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*,int ,scalar_t__) ;
 int FUNC_8 (int ) ;
 TYPE_2__* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,TYPE_2__*,int *,int ,int *) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_13(BtreeCheckState *VAR_1, IndexTuple VAR_2)
{
 BTScanInsert VAR_3;
 BTStack VAR_4;
 Buffer VAR_5;
 bool VAR_6;

 VAR_3 = FUNC_9(VAR_1->rel, VAR_2);
 FUNC_0(VAR_3->heapkeyspace && VAR_3->scantid != ((void*)0));
 FUNC_0(VAR_1->readonly && VAR_1->rootdescend);
 VAR_6 = 0;
 VAR_4 = FUNC_11(VAR_1->rel, VAR_3, &VAR_5, VAR_0, ((void*)0));

 if (FUNC_2(VAR_5))
 {
  BTInsertStateData VAR_7;
  OffsetNumber VAR_8;
  Page VAR_9;

  VAR_7.itup = VAR_2;
  VAR_7.itemsz = FUNC_4(FUNC_3(VAR_2));
  VAR_7.itup_key = VAR_3;
  VAR_7.bounds_valid = 0;
  VAR_7.buf = VAR_5;


  VAR_8 = FUNC_6(VAR_1->rel, &VAR_7);

  VAR_9 = FUNC_1(VAR_5);
  if (VAR_8 <= FUNC_5(VAR_9) &&
   FUNC_7(VAR_1->rel, VAR_3, VAR_9, VAR_8) == 0)
   VAR_6 = 1;
  FUNC_10(VAR_1->rel, VAR_5);
 }

 FUNC_8(VAR_4);
 FUNC_12(VAR_3);

 return VAR_6;
}
