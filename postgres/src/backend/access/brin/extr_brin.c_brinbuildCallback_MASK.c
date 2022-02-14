
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int natts; } ;
struct TYPE_13__ {TYPE_2__* bt_columns; } ;
struct TYPE_12__ {int bs_currRangeStart; int bs_pagesPerRange; TYPE_2__* bs_bdesc; TYPE_5__* bs_dtuple; } ;
struct TYPE_11__ {TYPE_8__* bd_tupdesc; } ;
struct TYPE_10__ {int attcollation; } ;
typedef int Relation ;
typedef int ItemPointer ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef TYPE_2__ BrinValues ;
typedef TYPE_3__ BrinBuildState ;
typedef int BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (TYPE_8__*,int) ;
 int FUNC_5 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int * FUNC_7 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_8(Relation VAR_2,
      ItemPointer VAR_3,
      Datum *VAR_4,
      bool *VAR_5,
      bool VAR_6,
      void *VAR_7)
{
 BrinBuildState *VAR_8 = (BrinBuildState *) VAR_7;
 BlockNumber VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_3);







 while (VAR_9 > VAR_8->bs_currRangeStart + VAR_8->bs_pagesPerRange - 1)
 {

  FUNC_0((VAR_1,
       "brinbuildCallback: completed a range: %u--%u",
       VAR_8->bs_currRangeStart,
       VAR_8->bs_currRangeStart + VAR_8->bs_pagesPerRange));


  FUNC_6(VAR_8);


  VAR_8->bs_currRangeStart += VAR_8->bs_pagesPerRange;


  FUNC_5(VAR_8->bs_dtuple, VAR_8->bs_bdesc);
 }


 for (VAR_10 = 0; VAR_10 < VAR_8->bs_bdesc->bd_tupdesc->natts; VAR_10++)
 {
  FmgrInfo *VAR_11;
  BrinValues *VAR_12;
  Form_pg_attribute VAR_13 = FUNC_4(VAR_8->bs_bdesc->bd_tupdesc, VAR_10);

  VAR_12 = &VAR_8->bs_dtuple->bt_columns[VAR_10];
  VAR_11 = FUNC_7(VAR_2, VAR_10 + 1,
          VAR_0);




  FUNC_1(VAR_11,
        VAR_13->attcollation,
        FUNC_3(VAR_8->bs_bdesc),
        FUNC_3(VAR_12),
        VAR_4[VAR_10], VAR_5[VAR_10]);
 }
}
