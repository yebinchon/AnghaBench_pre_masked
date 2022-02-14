
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nNodes; unsigned int prefixSize; unsigned int size; } ;
struct TYPE_7__ {int attPrefixType; } ;
typedef TYPE_1__ SpGistState ;
typedef int SpGistNodeTuple ;
typedef TYPE_2__* SpGistInnerTuple ;
typedef int Size ;
typedef int ItemIdData ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_7 ;
 unsigned int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*,int ,scalar_t__) ;
 int FUNC_10 (int ,int *,int ) ;
 scalar_t__ FUNC_11 (unsigned int) ;

SpGistInnerTuple
FUNC_12(SpGistState *VAR_8, bool VAR_9, Datum VAR_10,
      int VAR_11, SpGistNodeTuple *VAR_12)
{
 SpGistInnerTuple VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 int VAR_16;
 char *VAR_17;


 if (VAR_9)
  VAR_15 = FUNC_3(&VAR_8->attPrefixType, VAR_10);
 else
  VAR_15 = 0;

 VAR_14 = VAR_3 + VAR_15;


 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++)
  VAR_14 += FUNC_0(VAR_12[VAR_16]);





 if (VAR_14 < VAR_2)
  VAR_14 = VAR_2;




 if (VAR_14 > VAR_7 - sizeof(ItemIdData))
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_8("SP-GiST inner tuple size %zu exceeds maximum %zu",
      (Size) VAR_14,
      VAR_7 - sizeof(ItemIdData)),
     FUNC_7("Values larger than a buffer page cannot be indexed.")));





 if (VAR_14 > VAR_6 ||
  VAR_15 > VAR_5 ||
  VAR_11 > VAR_4)
  FUNC_4(VAR_1, "SPGiST inner tuple header field is too small");


 VAR_13 = (SpGistInnerTuple) FUNC_11(VAR_14);

 VAR_13->nNodes = VAR_11;
 VAR_13->prefixSize = VAR_15;
 VAR_13->size = VAR_14;

 if (VAR_9)
  FUNC_10(FUNC_1(VAR_13), &VAR_8->attPrefixType, VAR_10);

 VAR_17 = (char *) FUNC_2(VAR_13);

 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++)
 {
  SpGistNodeTuple VAR_18 = VAR_12[VAR_16];

  FUNC_9(VAR_17, VAR_18, FUNC_0(VAR_18));
  VAR_17 += FUNC_0(VAR_18);
 }

 return VAR_13;
}
