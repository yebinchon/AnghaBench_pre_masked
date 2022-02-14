
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ ntuples; int latestRemovedXid; } ;
typedef TYPE_1__ xl_hash_vacuum_one_page ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_13__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_15__ {int hashm_ntuples; } ;
struct TYPE_14__ {int hasho_flag; } ;
typedef int RelFileNode ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef TYPE_3__* HashPageOpaque ;
typedef TYPE_4__* HashMetaPage ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int *,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int ,int,int *) ;
 int FUNC_11 (TYPE_2__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_14(XLogReaderState *VAR_5)
{
 XLogRecPtr VAR_6 = VAR_5->EndRecPtr;
 xl_hash_vacuum_one_page *VAR_7;
 Buffer VAR_8;
 Buffer VAR_9;
 Page VAR_10;
 XLogRedoAction VAR_11;
 HashPageOpaque VAR_12;

 VAR_7 = (xl_hash_vacuum_one_page *) FUNC_12(VAR_5);
 if (VAR_1)
 {
  RelFileNode VAR_13;

  FUNC_11(VAR_5, 0, &VAR_13, ((void*)0), ((void*)0));
  FUNC_7(VAR_7->latestRemovedXid, VAR_13);
 }

 VAR_11 = FUNC_10(VAR_5, 0, VAR_3, 1, &VAR_8);

 if (VAR_11 == VAR_0)
 {
  VAR_10 = (Page) FUNC_0(VAR_8);

  if (FUNC_13(VAR_5) > VAR_4)
  {
   OffsetNumber *VAR_14;

   VAR_14 = (OffsetNumber *) ((char *) VAR_7 + VAR_4);

   FUNC_5(VAR_10, VAR_14, VAR_7->ntuples);
  }





  VAR_12 = (HashPageOpaque) FUNC_4(VAR_10);
  VAR_12->hasho_flag &= ~VAR_2;

  FUNC_6(VAR_10, VAR_6);
  FUNC_3(VAR_8);
 }
 if (FUNC_1(VAR_8))
  FUNC_8(VAR_8);

 if (FUNC_9(VAR_5, 1, &VAR_9) == VAR_0)
 {
  Page VAR_15;
  HashMetaPage VAR_16;

  VAR_15 = FUNC_0(VAR_9);
  VAR_16 = FUNC_2(VAR_15);

  VAR_16->hashm_ntuples -= VAR_7->ntuples;

  FUNC_6(VAR_15, VAR_6);
  FUNC_3(VAR_9);
 }
 if (FUNC_1(VAR_9))
  FUNC_8(VAR_9);
}
