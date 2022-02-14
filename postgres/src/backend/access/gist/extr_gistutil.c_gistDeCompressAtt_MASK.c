
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int leafTupdesc; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int IndexTuple ;
typedef TYPE_1__ GISTSTATE ;
typedef int GISTENTRY ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int *,int ,int ,int ,int ,int,int) ;
 int FUNC_2 (int ,int,int ,int*) ;

void
FUNC_3(GISTSTATE *VAR_0, Relation VAR_1, IndexTuple VAR_2, Page VAR_3,
      OffsetNumber VAR_4, GISTENTRY *VAR_5, bool *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
 {
  Datum VAR_8;

  VAR_8 = FUNC_2(VAR_2, VAR_7 + 1, VAR_0->leafTupdesc, &VAR_6[VAR_7]);
  FUNC_1(VAR_0, VAR_7, &VAR_5[VAR_7],
        VAR_8, VAR_1, VAR_3, VAR_4,
        0, VAR_6[VAR_7]);
 }
}
