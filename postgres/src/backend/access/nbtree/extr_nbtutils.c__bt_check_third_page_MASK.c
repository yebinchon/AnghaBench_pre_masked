
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_tid; } ;
typedef scalar_t__ Size ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_1__* IndexTuple ;
typedef scalar_t__ BTPageOpaque ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,scalar_t__,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ,int ,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_15 (int ,int ) ;

void
FUNC_16(Relation VAR_4, Relation VAR_5, bool VAR_6,
      Page VAR_7, IndexTuple VAR_8)
{
 Size VAR_9;
 BTPageOpaque VAR_10;

 VAR_9 = FUNC_5(FUNC_2(VAR_8));


 if (VAR_9 <= FUNC_0(VAR_7))
  return;






 if (!VAR_6 && VAR_9 <= FUNC_1(VAR_7))
  return;





 VAR_10 = (BTPageOpaque) FUNC_7(VAR_7);
 if (!FUNC_6(VAR_10))
  FUNC_9(VAR_3, "cannot insert oversized tuple of size %zu on internal page of index \"%s\"",
    VAR_9, FUNC_8(VAR_4));

 FUNC_10(VAR_3,
   (FUNC_11(VAR_2),
    FUNC_14("index row size %zu exceeds btree version %u maximum %zu for index \"%s\"",
     VAR_9,
     VAR_6 ? VAR_1 : VAR_0,
     VAR_6 ? FUNC_0(VAR_7) :
     FUNC_1(VAR_7),
     FUNC_8(VAR_4)),
    FUNC_12("Index row references tuple (%u,%u) in relation \"%s\".",
        FUNC_3(&VAR_8->t_tid),
        FUNC_4(&VAR_8->t_tid),
        FUNC_8(VAR_5)),
    FUNC_13("Values larger than 1/3 of a buffer page cannot be indexed.\n"
      "Consider a function index of an MD5 hash of the value, "
      "or use full text indexing."),
    FUNC_15(VAR_5, FUNC_8(VAR_4))));
}
