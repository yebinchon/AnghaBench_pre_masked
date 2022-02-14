
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hashm_magic; scalar_t__ hashm_version; } ;
struct TYPE_4__ {int hasho_flag; } ;
typedef int Relation ;
typedef int Page ;
typedef int HashPageOpaqueData ;
typedef TYPE_1__* HashPageOpaque ;
typedef TYPE_2__* HashMetaPage ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,...) ;

void
FUNC_12(Relation VAR_5, Buffer VAR_6, int VAR_7)
{
 Page VAR_8 = FUNC_1(VAR_6);







 if (FUNC_6(VAR_8))
  FUNC_8(VAR_1,
    (FUNC_9(VAR_0),
     FUNC_11("index \"%s\" contains unexpected zero page at block %u",
      FUNC_7(VAR_5),
      FUNC_0(VAR_6)),
     FUNC_10("Please REINDEX it.")));




 if (FUNC_5(VAR_8) != FUNC_3(sizeof(HashPageOpaqueData)))
  FUNC_8(VAR_1,
    (FUNC_9(VAR_0),
     FUNC_11("index \"%s\" contains corrupted page at block %u",
      FUNC_7(VAR_5),
      FUNC_0(VAR_6)),
     FUNC_10("Please REINDEX it.")));

 if (VAR_7)
 {
  HashPageOpaque VAR_9 = (HashPageOpaque) FUNC_4(VAR_8);

  if ((VAR_9->hasho_flag & VAR_7) == 0)
   FUNC_8(VAR_1,
     (FUNC_9(VAR_0),
      FUNC_11("index \"%s\" contains corrupted page at block %u",
       FUNC_7(VAR_5),
       FUNC_0(VAR_6)),
      FUNC_10("Please REINDEX it.")));
 }




 if (VAR_7 == VAR_4)
 {
  HashMetaPage VAR_10 = FUNC_2(VAR_8);

  if (VAR_10->hashm_magic != VAR_2)
   FUNC_8(VAR_1,
     (FUNC_9(VAR_0),
      FUNC_11("index \"%s\" is not a hash index",
       FUNC_7(VAR_5))));

  if (VAR_10->hashm_version != VAR_3)
   FUNC_8(VAR_1,
     (FUNC_9(VAR_0),
      FUNC_11("index \"%s\" has wrong hash version",
       FUNC_7(VAR_5)),
      FUNC_10("Please REINDEX it.")));
 }
}
