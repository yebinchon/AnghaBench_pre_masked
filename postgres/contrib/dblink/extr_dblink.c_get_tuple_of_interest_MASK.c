
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_18__ {int attname; scalar_t__ attisdropped; } ;
struct TYPE_17__ {TYPE_1__* rd_att; } ;
struct TYPE_16__ {int * vals; } ;
struct TYPE_15__ {int data; } ;
struct TYPE_14__ {int natts; } ;
typedef TYPE_2__ StringInfoData ;
typedef TYPE_3__ SPITupleTable ;
typedef TYPE_4__* Relation ;
typedef int * HeapTuple ;
typedef TYPE_5__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_5__* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_2__*,char*,char*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ) ;
 char* FUNC_15 (int ) ;
 char* FUNC_16 (char*) ;

__attribute__((used)) static HeapTuple
FUNC_17(Relation VAR_5, int *VAR_6, int VAR_7, char **VAR_8)
{
 char *VAR_9;
 TupleDesc VAR_10;
 int VAR_11;
 StringInfoData VAR_12;
 int VAR_13;
 HeapTuple VAR_14;
 int VAR_15;




 if ((VAR_13 = FUNC_1()) < 0)

  FUNC_8(VAR_1, "SPI connect failure - returned %d", VAR_13);

 FUNC_13(&VAR_12);


 VAR_9 = FUNC_12(VAR_5);

 VAR_10 = VAR_5->rd_att;
 VAR_11 = VAR_10->natts;
 FUNC_7(&VAR_12, "SELECT ");

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++)
 {
  Form_pg_attribute VAR_16 = FUNC_5(VAR_10, VAR_15);

  if (VAR_15 > 0)
   FUNC_7(&VAR_12, ", ");

  if (VAR_16->attisdropped)
   FUNC_7(&VAR_12, "NULL");
  else
   FUNC_7(&VAR_12,
           FUNC_15(FUNC_0(VAR_16->attname)));
 }

 FUNC_6(&VAR_12, " FROM %s WHERE ", VAR_9);

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
 {
  int VAR_17 = VAR_6[VAR_15];
  Form_pg_attribute VAR_18 = FUNC_5(VAR_10, VAR_17);

  if (VAR_15 > 0)
   FUNC_7(&VAR_12, " AND ");

  FUNC_7(&VAR_12,
          FUNC_15(FUNC_0(VAR_18->attname)));

  if (VAR_8[VAR_15] != ((void*)0))
   FUNC_6(&VAR_12, " = %s",
        FUNC_16(VAR_8[VAR_15]));
  else
   FUNC_7(&VAR_12, " IS NULL");
 }




 VAR_13 = FUNC_3(VAR_12.data, 0);
 FUNC_14(VAR_12.data);




 if ((VAR_13 == VAR_2) && (VAR_3 > 1))
  FUNC_9(VAR_1,
    (FUNC_10(VAR_0),
     FUNC_11("source criteria matched more than one record")));

 else if (VAR_13 == VAR_2 && VAR_3 == 1)
 {
  SPITupleTable *VAR_19 = VAR_4;

  VAR_14 = FUNC_2(VAR_19->vals[0]);
  FUNC_4();

  return VAR_14;
 }
 else
 {



  FUNC_4();

  return ((void*)0);
 }




 return ((void*)0);
}
