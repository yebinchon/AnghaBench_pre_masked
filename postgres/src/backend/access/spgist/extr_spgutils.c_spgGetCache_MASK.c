
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_17__ {scalar_t__ leafType; scalar_t__ prefixType; scalar_t__ labelType; scalar_t__ attType; } ;
typedef TYPE_1__ spgConfigIn ;
struct TYPE_21__ {scalar_t__ atttypid; } ;
struct TYPE_20__ {int * rd_amcache; int * rd_indcollation; TYPE_10__* rd_att; int rd_indexcxt; } ;
struct TYPE_19__ {int lastUsedPages; TYPE_1__ config; int attLabelType; int attPrefixType; int attType; int attLeafType; } ;
struct TYPE_18__ {scalar_t__ magicNumber; int lastUsedPages; } ;
struct TYPE_16__ {int natts; } ;
typedef TYPE_2__ SpGistMetaPageData ;
typedef TYPE_3__ SpGistCache ;
typedef TYPE_4__* Relation ;
typedef scalar_t__ Oid ;
typedef int FmgrInfo ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_9 (int ) ;
 TYPE_9__* FUNC_10 (TYPE_10__*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *,scalar_t__) ;
 scalar_t__ FUNC_17 (TYPE_4__*,int,int ) ;
 int * FUNC_18 (TYPE_4__*,int,int ) ;

SpGistCache *
FUNC_19(Relation VAR_7)
{
 SpGistCache *VAR_8;

 if (VAR_7->rd_amcache == ((void*)0))
 {
  Oid VAR_9;
  spgConfigIn VAR_10;
  FmgrInfo *VAR_11;
  Buffer VAR_12;
  SpGistMetaPageData *VAR_13;

  VAR_8 = FUNC_4(VAR_7->rd_indexcxt,
            sizeof(SpGistCache));


  FUNC_0(VAR_7->rd_att->natts == 1);






  VAR_9 = FUNC_10(VAR_7->rd_att, 0)->atttypid;


  VAR_10.attType = VAR_9;

  VAR_11 = FUNC_18(VAR_7, 1, VAR_4);
  FUNC_2(VAR_11,
        VAR_7->rd_indcollation[0],
        FUNC_6(&VAR_10),
        FUNC_6(&VAR_8->config));


  FUNC_16(&VAR_8->attType, VAR_9);

  if (FUNC_5(VAR_8->config.leafType) &&
   VAR_8->config.leafType != VAR_9)
  {
   if (!FUNC_5(FUNC_17(VAR_7, 1, VAR_3)))
    FUNC_13(VAR_2,
      (FUNC_14(VAR_1),
       FUNC_15("compress method must be defined when leaf type is different from input type")));

   FUNC_16(&VAR_8->attLeafType, VAR_8->config.leafType);
  }
  else
  {
   VAR_8->attLeafType = VAR_8->attType;
  }

  FUNC_16(&VAR_8->attPrefixType, VAR_8->config.prefixType);
  FUNC_16(&VAR_8->attLabelType, VAR_8->config.labelType);


  VAR_12 = FUNC_7(VAR_7, VAR_6);
  FUNC_3(VAR_12, VAR_0);

  VAR_13 = FUNC_9(FUNC_1(VAR_12));

  if (VAR_13->magicNumber != VAR_5)
   FUNC_12(VAR_2, "index \"%s\" is not an SP-GiST index",
     FUNC_8(VAR_7));

  VAR_8->lastUsedPages = VAR_13->lastUsedPages;

  FUNC_11(VAR_12);

  VAR_7->rd_amcache = (void *) VAR_8;
 }
 else
 {

  VAR_8 = (SpGistCache *) VAR_7->rd_amcache;
 }

 return VAR_8;
}
