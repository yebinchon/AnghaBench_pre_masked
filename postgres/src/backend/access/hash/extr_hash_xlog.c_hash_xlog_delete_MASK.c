
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ clear_dead_marking; scalar_t__ is_primary_bucket_page; } ;
typedef TYPE_1__ xl_hash_delete ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_11__ {int hasho_flag; } ;
typedef scalar_t__ Size ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef TYPE_3__* HashPageOpaque ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int *,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int,int ,int,int *) ;
 char* FUNC_9 (TYPE_2__*,int,scalar_t__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(XLogReaderState *VAR_4)
{
 XLogRecPtr VAR_5 = VAR_4->EndRecPtr;
 xl_hash_delete *VAR_6 = (xl_hash_delete *) FUNC_10(VAR_4);
 Buffer VAR_7 = VAR_1;
 Buffer VAR_8;
 Page VAR_9;
 XLogRedoAction VAR_10;
 if (VAR_6->is_primary_bucket_page)
  VAR_10 = FUNC_8(VAR_4, 1, VAR_3, 1, &VAR_8);
 else
 {




  (void) FUNC_8(VAR_4, 0, VAR_3, 1, &VAR_7);

  VAR_10 = FUNC_7(VAR_4, 1, &VAR_8);
 }


 if (VAR_10 == VAR_0)
 {
  char *VAR_11;
  Size VAR_12;

  VAR_11 = FUNC_9(VAR_4, 1, &VAR_12);

  VAR_9 = (Page) FUNC_0(VAR_8);

  if (VAR_12 > 0)
  {
   OffsetNumber *VAR_13;
   OffsetNumber *VAR_14;

   VAR_13 = (OffsetNumber *) VAR_11;
   VAR_14 = (OffsetNumber *) ((char *) VAR_11 + VAR_12);

   if ((VAR_14 - VAR_13) > 0)
    FUNC_4(VAR_9, VAR_13, VAR_14 - VAR_13);
  }






  if (VAR_6->clear_dead_marking)
  {
   HashPageOpaque VAR_15;

   VAR_15 = (HashPageOpaque) FUNC_3(VAR_9);
   VAR_15->hasho_flag &= ~VAR_2;
  }

  FUNC_5(VAR_9, VAR_5);
  FUNC_2(VAR_8);
 }
 if (FUNC_1(VAR_8))
  FUNC_6(VAR_8);

 if (FUNC_1(VAR_7))
  FUNC_6(VAR_7);
}
