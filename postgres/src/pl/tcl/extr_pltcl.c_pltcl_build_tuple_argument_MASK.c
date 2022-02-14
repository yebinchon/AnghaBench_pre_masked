
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
typedef int Tcl_Obj ;
struct TYPE_8__ {int atttypid; int attname; scalar_t__ attgenerated; scalar_t__ attisdropped; } ;
struct TYPE_7__ {int natts; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int FUNC_7 (int ,int *,int*) ;
 int FUNC_8 (int ,int,TYPE_1__*,int*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static Tcl_Obj *
FUNC_10(HeapTuple VAR_2, TupleDesc VAR_3, bool VAR_4)
{
 Tcl_Obj *VAR_5 = FUNC_3();
 int VAR_6;
 char *VAR_7;
 Datum VAR_8;
 bool VAR_9;
 char *VAR_10;
 Oid VAR_11;
 bool VAR_12;

 for (VAR_6 = 0; VAR_6 < VAR_3->natts; VAR_6++)
 {
  Form_pg_attribute VAR_13 = FUNC_5(VAR_3, VAR_6);


  if (VAR_13->attisdropped)
   continue;

  if (VAR_13->attgenerated)
  {

   if (!VAR_4)
    continue;
  }




  VAR_10 = FUNC_0(VAR_13->attname);




  VAR_8 = FUNC_8(VAR_2, VAR_6 + 1, VAR_3, &VAR_9);
  if (!VAR_9)
  {
   FUNC_7(VAR_13->atttypid,
         &VAR_11, &VAR_12);
   VAR_7 = FUNC_1(VAR_11, VAR_8);
   VAR_0;
   FUNC_2(((void*)0), VAR_5,
          FUNC_4(FUNC_6(VAR_10), -1));
   VAR_1;
   VAR_0;
   FUNC_2(((void*)0), VAR_5,
          FUNC_4(FUNC_6(VAR_7), -1));
   VAR_1;
   FUNC_9(VAR_7);
  }
 }

 return VAR_5;
}
