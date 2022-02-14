
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_14__ {int attstattarget; scalar_t__ atttypid; scalar_t__ attcollation; void* attrelid; } ;
struct TYPE_13__ {scalar_t__ objectId; int objectSubId; int classId; } ;
struct TYPE_12__ {int natts; } ;
typedef int Relation ;
typedef void* Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef TYPE_3__* Form_pg_attribute ;
typedef TYPE_3__ FormData_pg_attribute ;
typedef int CatalogIndexState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 TYPE_3__* FUNC_4 (TYPE_1__*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(Oid VAR_10,
       TupleDesc VAR_11,
       char VAR_12)
{
 Form_pg_attribute VAR_13;
 int VAR_14;
 Relation VAR_15;
 CatalogIndexState VAR_16;
 int VAR_17 = VAR_11->natts;
 ObjectAddress VAR_18,
    VAR_19;




 VAR_15 = FUNC_9(VAR_0, VAR_7);

 VAR_16 = FUNC_1(VAR_15);





 for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++)
 {
  VAR_13 = FUNC_4(VAR_11, VAR_14);

  VAR_13->attrelid = VAR_10;

  VAR_13->attstattarget = -1;

  FUNC_2(VAR_15, VAR_13, VAR_16);


  VAR_18.classId = VAR_6;
  VAR_18.objectId = VAR_10;
  VAR_18.objectSubId = VAR_14 + 1;
  VAR_19.classId = VAR_9;
  VAR_19.objectId = VAR_13->atttypid;
  VAR_19.objectSubId = 0;
  FUNC_7(&VAR_18, &VAR_19, VAR_3);


  if (FUNC_3(VAR_13->attcollation) &&
   VAR_13->attcollation != VAR_2)
  {
   VAR_19.classId = VAR_1;
   VAR_19.objectId = VAR_13->attcollation;
   VAR_19.objectSubId = 0;
   FUNC_7(&VAR_18, &VAR_19, VAR_3);
  }
 }






 if (VAR_12 != VAR_5 && VAR_12 != VAR_4)
 {
  for (VAR_14 = 0; VAR_14 < (int) FUNC_5(VAR_8); VAR_14++)
  {
   FormData_pg_attribute VAR_20;

   FUNC_6(&VAR_20, VAR_8[VAR_14], sizeof(FormData_pg_attribute));


   VAR_20.attrelid = VAR_10;

   FUNC_2(VAR_15, &VAR_20, VAR_16);
  }
 }




 FUNC_0(VAR_16);

 FUNC_8(VAR_15, VAR_7);
}
