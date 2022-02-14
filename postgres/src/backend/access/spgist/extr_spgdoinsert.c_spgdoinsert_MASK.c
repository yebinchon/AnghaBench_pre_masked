
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_76__ TYPE_9__ ;
typedef struct TYPE_75__ TYPE_8__ ;
typedef struct TYPE_74__ TYPE_6__ ;
typedef struct TYPE_73__ TYPE_5__ ;
typedef struct TYPE_72__ TYPE_57__ ;
typedef struct TYPE_71__ TYPE_4__ ;
typedef struct TYPE_70__ TYPE_3__ ;
typedef struct TYPE_69__ TYPE_2__ ;
typedef struct TYPE_68__ TYPE_1__ ;
typedef struct TYPE_67__ TYPE_12__ ;
typedef struct TYPE_66__ TYPE_11__ ;
typedef struct TYPE_65__ TYPE_10__ ;


struct TYPE_69__ {int nodeLabel; int nodeN; } ;
struct TYPE_68__ {int nodeN; int levelAdd; void* restDatum; } ;
struct TYPE_70__ {TYPE_2__ addNode; TYPE_1__ matchNode; } ;
struct TYPE_74__ {int level; int hasPrefix; int nNodes; int resultType; TYPE_3__ result; int * nodeLabels; int prefixDatum; scalar_t__ allTheSame; void* leafDatum; void* datum; } ;
typedef TYPE_6__ spgChooseOut ;
typedef TYPE_6__ spgChooseIn ;
typedef int out ;
struct TYPE_76__ {int size; } ;
struct TYPE_72__ {scalar_t__ type; } ;
struct TYPE_73__ {int longValuesOK; } ;
struct TYPE_71__ {scalar_t__ type; int attlen; } ;
struct TYPE_75__ {TYPE_57__ attLeafType; TYPE_5__ config; TYPE_4__ attType; } ;
struct TYPE_67__ {int * rd_indcollation; } ;
struct TYPE_66__ {scalar_t__ blkno; scalar_t__ buffer; int node; int offnum; int * page; } ;
struct TYPE_65__ {scalar_t__ prefixSize; int nNodes; scalar_t__ allTheSame; } ;
typedef TYPE_8__ SpGistState ;
typedef TYPE_9__* SpGistLeafTuple ;
typedef TYPE_10__* SpGistInnerTuple ;
typedef TYPE_11__ SPPageDesc ;
typedef TYPE_12__* Relation ;
typedef int ItemPointer ;
typedef int ItemIdData ;
typedef int FmgrInfo ;
typedef void* Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_5 (int *,int ,void*) ;
 int FUNC_6 (int *,int ,void*,void*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_6__* FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 void* FUNC_13 (TYPE_6__*) ;
 void* FUNC_14 (TYPE_12__*,scalar_t__) ;
 int FUNC_15 (TYPE_12__*) ;
 int FUNC_16 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_17 (TYPE_10__*,TYPE_8__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_18 (TYPE_12__*,int,int ,int*) ;
 int FUNC_19 (TYPE_57__*,void*) ;
 int FUNC_20 (int *,int) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (TYPE_12__*,scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (TYPE_12__*,TYPE_8__*,TYPE_9__*,TYPE_11__*,TYPE_11__*,int,int) ;
 int FUNC_26 (TYPE_12__*,TYPE_8__*,TYPE_11__*,int*) ;
 scalar_t__ FUNC_27 (TYPE_12__*,TYPE_8__*,TYPE_11__*,TYPE_11__*,TYPE_9__*,int,int,int) ;
 int FUNC_28 (int ,char*,...) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (char*) ;
 int FUNC_32 (char*,int,int,int ) ;
 int FUNC_33 (TYPE_12__*,int,int ) ;
 int * FUNC_34 (TYPE_12__*,int,int ) ;
 int FUNC_35 (TYPE_6__*,int ,int) ;
 int FUNC_36 (TYPE_12__*,TYPE_8__*,TYPE_11__*,TYPE_11__*,TYPE_9__*,int) ;
 int FUNC_37 (TYPE_9__*) ;
 int FUNC_38 () ;

 int FUNC_39 (TYPE_12__*,TYPE_8__*,TYPE_10__*,TYPE_11__*,TYPE_11__*,int ,int ) ;
 int * FUNC_40 (TYPE_8__*,TYPE_10__*) ;
 TYPE_9__* FUNC_41 (TYPE_8__*,int ,void*,int) ;

 int FUNC_42 (TYPE_12__*,TYPE_8__*,TYPE_10__*,TYPE_11__*,TYPE_11__*,int) ;
 int FUNC_43 (TYPE_12__*,TYPE_8__*,TYPE_10__*,TYPE_11__*,TYPE_6__*) ;


bool
FUNC_44(Relation VAR_16, SpGistState *VAR_17,
   ItemPointer VAR_18, Datum VAR_19, bool VAR_20)
{
 int VAR_21 = 0;
 Datum VAR_22;
 int VAR_23;
 SPPageDesc VAR_24,
    VAR_25;
 FmgrInfo *VAR_26 = ((void*)0);





 if (!VAR_20)
  VAR_26 = FUNC_34(VAR_16, 1, VAR_11);
 if (!VAR_20)
 {
  if (FUNC_9(FUNC_33(VAR_16, 1, VAR_12)))
  {
   FmgrInfo *VAR_27 = ((void*)0);

   VAR_27 = FUNC_34(VAR_16, 1, VAR_12);
   VAR_22 = FUNC_5(VAR_27,
            VAR_16->rd_indcollation[0],
            VAR_19);
  }
  else
  {
   FUNC_0(VAR_17->attLeafType.type == VAR_17->attType.type);

   if (VAR_17->attType.attlen == -1)
    VAR_22 = FUNC_13(FUNC_10(VAR_19));
   else
    VAR_22 = VAR_19;
  }
 }
 else
  VAR_22 = (Datum) 0;







 if (!VAR_20)
  VAR_23 = VAR_10 + sizeof(ItemIdData) +
   FUNC_19(&VAR_17->attLeafType, VAR_22);
 else
  VAR_23 = VAR_9 + sizeof(ItemIdData);

 if (VAR_23 > VAR_14 && !VAR_17->config.longValuesOK)
  FUNC_29(VAR_2,
    (FUNC_30(VAR_1),
     FUNC_32("index row size %zu exceeds maximum %zu for index \"%s\"",
      VAR_23 - sizeof(ItemIdData),
      VAR_14 - sizeof(ItemIdData),
      FUNC_15(VAR_16)),
     FUNC_31("Values larger than a buffer page cannot be indexed.")));


 VAR_24.blkno = VAR_20 ? VAR_13 : VAR_15;
 VAR_24.buffer = VAR_7;
 VAR_24.page = ((void*)0);
 VAR_24.offnum = VAR_3;
 VAR_24.node = -1;


 VAR_25.blkno = VAR_6;
 VAR_25.buffer = VAR_7;
 VAR_25.page = ((void*)0);
 VAR_25.offnum = VAR_8;
 VAR_25.node = -1;

 for (;;)
 {
  bool VAR_28 = 0;






  FUNC_3();

  if (VAR_24.blkno == VAR_6)
  {






   VAR_24.buffer =
    FUNC_18(VAR_16,
        VAR_4 | (VAR_20 ? VAR_5 : 0),
        FUNC_8(VAR_23, VAR_14),
        &VAR_28);
   VAR_24.blkno = FUNC_1(VAR_24.buffer);
  }
  else if (VAR_25.buffer == VAR_7)
  {

   VAR_24.buffer = FUNC_14(VAR_16, VAR_24.blkno);
   FUNC_7(VAR_24.buffer, VAR_0);
  }
  else if (VAR_24.blkno != VAR_25.blkno)
  {

   VAR_24.buffer = FUNC_14(VAR_16, VAR_24.blkno);
   if (!FUNC_4(VAR_24.buffer))
   {
    FUNC_16(VAR_24.buffer);
    FUNC_24(VAR_25.buffer);
    return 0;
   }
  }
  else
  {

   VAR_24.buffer = VAR_25.buffer;
  }
  VAR_24.page = FUNC_2(VAR_24.buffer);


  if (VAR_20 ? !FUNC_22(VAR_24.page) :
   FUNC_22(VAR_24.page))
   FUNC_28(VAR_2, "SPGiST index page %u has wrong nulls flag",
     VAR_24.blkno);

  if (FUNC_21(VAR_24.page))
  {
   SpGistLeafTuple VAR_29;
   int VAR_30,
      VAR_31;

   VAR_29 = FUNC_41(VAR_17, VAR_18, VAR_22, VAR_20);
   if (VAR_29->size + sizeof(ItemIdData) <=
    FUNC_20(VAR_24.page, 1))
   {

    FUNC_25(VAR_16, VAR_17, VAR_29,
        &VAR_24, &VAR_25, VAR_20, VAR_28);
    break;
   }
   else if ((VAR_31 =
       FUNC_26(VAR_16, VAR_17, &VAR_24,
             &VAR_30)) < VAR_14 / 2 &&
      VAR_30 < 64 &&
      VAR_29->size + sizeof(ItemIdData) + VAR_31 <= VAR_14)
   {




    FUNC_0(!VAR_28);
    FUNC_36(VAR_16, VAR_17, &VAR_24, &VAR_25, VAR_29, VAR_20);
    break;
   }
   else
   {

    if (FUNC_27(VAR_16, VAR_17, &VAR_24, &VAR_25,
        VAR_29, VAR_21, VAR_20, VAR_28))
     break;


    FUNC_37(VAR_29);




    FUNC_0(!FUNC_21(VAR_24.page));
    goto process_inner_tuple;
   }
  }
  else
  {




   SpGistInnerTuple VAR_32;
   spgChooseIn VAR_33;
   spgChooseOut VAR_34;







 process_inner_tuple:
   FUNC_3();

   VAR_32 = (SpGistInnerTuple) FUNC_11(VAR_24.page,
              FUNC_12(VAR_24.page, VAR_24.offnum));

   VAR_33.datum = VAR_19;
   VAR_33.leafDatum = VAR_22;
   VAR_33.level = VAR_21;
   VAR_33.allTheSame = VAR_32->allTheSame;
   VAR_33.hasPrefix = (VAR_32->prefixSize > 0);
   VAR_33.prefixDatum = FUNC_17(VAR_32, VAR_17);
   VAR_33.nNodes = VAR_32->nNodes;
   VAR_33.nodeLabels = FUNC_40(VAR_17, VAR_32);

   FUNC_35(&VAR_34, 0, sizeof(VAR_34));

   if (!VAR_20)
   {

    FUNC_6(VAR_26,
          VAR_16->rd_indcollation[0],
          FUNC_13(&VAR_33),
          FUNC_13(&VAR_34));
   }
   else
   {

    VAR_34.resultType = 129;
   }

   if (VAR_32->allTheSame)
   {





    if (VAR_34.resultType == 130)
     FUNC_28(VAR_2, "cannot add a node to an allTheSame inner tuple");
    else if (VAR_34.resultType == 129)
     VAR_34.result.matchNode.nodeN = FUNC_38() % VAR_32->nNodes;
   }

   switch (VAR_34.resultType)
   {
    case 129:

     FUNC_42(VAR_16, VAR_17, VAR_32,
            &VAR_24, &VAR_25,
            VAR_34.result.matchNode.nodeN);

     VAR_21 += VAR_34.result.matchNode.levelAdd;

     if (!VAR_20)
     {
      VAR_22 = VAR_34.result.matchNode.restDatum;
      VAR_23 = VAR_10 + sizeof(ItemIdData) +
       FUNC_19(&VAR_17->attLeafType, VAR_22);
     }
     break;
    case 130:

     if (VAR_33.nodeLabels == ((void*)0))
      FUNC_28(VAR_2, "cannot add a node to an inner tuple without node labels");

     FUNC_39(VAR_16, VAR_17, VAR_32,
          &VAR_24, &VAR_25,
          VAR_34.result.addNode.nodeN,
          VAR_34.result.addNode.nodeLabel);





     goto process_inner_tuple;
     break;
    case 128:

     FUNC_43(VAR_16, VAR_17, VAR_32,
            &VAR_24, &VAR_34);


     goto process_inner_tuple;
     break;
    default:
     FUNC_28(VAR_2, "unrecognized SPGiST choose result: %d",
       (int) VAR_34.resultType);
     break;
   }
  }
 }





 if (VAR_24.buffer != VAR_7)
 {
  FUNC_23(VAR_16, VAR_24.buffer);
  FUNC_24(VAR_24.buffer);
 }
 if (VAR_25.buffer != VAR_7 &&
  VAR_25.buffer != VAR_24.buffer)
 {
  FUNC_23(VAR_16, VAR_25.buffer);
  FUNC_24(VAR_25.buffer);
 }

 return 1;
}
