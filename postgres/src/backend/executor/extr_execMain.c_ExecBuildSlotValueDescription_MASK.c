
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int * tts_values; scalar_t__* tts_isnull; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_17__ {int atttypid; int attname; scalar_t__ attnum; scalar_t__ attisdropped; } ;
struct TYPE_16__ {char* data; int len; } ;
struct TYPE_15__ {int natts; } ;
typedef TYPE_3__ StringInfoData ;
typedef int Oid ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Bitmapset ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (TYPE_3__*,char) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int *,int*) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (char*,int,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static char *
FUNC_16(Oid VAR_5,
         TupleTableSlot *VAR_6,
         TupleDesc VAR_7,
         Bitmapset *VAR_8,
         int VAR_9)
{
 StringInfoData VAR_10;
 StringInfoData VAR_11;
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 int VAR_14;
 AclResult VAR_15;
 bool VAR_16 = 0;
 bool VAR_17 = 0;






 if (FUNC_8(VAR_5, VAR_3, 1) == VAR_4)
  return ((void*)0);

 FUNC_10(&VAR_10);

 FUNC_5(&VAR_10, '(');
 VAR_15 = FUNC_12(VAR_5, FUNC_0(), VAR_1);
 if (VAR_15 != VAR_0)
 {

  FUNC_10(&VAR_11);
  FUNC_5(&VAR_11, '(');
 }
 else
  VAR_16 = VAR_17 = 1;


 FUNC_14(VAR_6);

 for (VAR_14 = 0; VAR_14 < VAR_7->natts; VAR_14++)
 {
  bool VAR_18 = 0;
  char *VAR_19;
  int VAR_20;
  Form_pg_attribute VAR_21 = FUNC_3(VAR_7, VAR_14);


  if (VAR_21->attisdropped)
   continue;

  if (!VAR_16)
  {






   VAR_15 = FUNC_11(VAR_5, VAR_21->attnum,
             FUNC_0(), VAR_1);
   if (FUNC_7(VAR_21->attnum - VAR_2,
         VAR_8) || VAR_15 == VAR_0)
   {
    VAR_18 = VAR_17 = 1;

    if (VAR_13)
     FUNC_6(&VAR_11, ", ");
    else
     VAR_13 = 1;

    FUNC_6(&VAR_11, FUNC_1(VAR_21->attname));
   }
  }

  if (VAR_16 || VAR_18)
  {
   if (VAR_6->tts_isnull[VAR_14])
    VAR_19 = "null";
   else
   {
    Oid VAR_22;
    bool VAR_23;

    FUNC_9(VAR_21->atttypid,
          &VAR_22, &VAR_23);
    VAR_19 = FUNC_2(VAR_22, VAR_6->tts_values[VAR_14]);
   }

   if (VAR_12)
    FUNC_6(&VAR_10, ", ");
   else
    VAR_12 = 1;


   VAR_20 = FUNC_15(VAR_19);
   if (VAR_20 <= VAR_9)
    FUNC_4(&VAR_10, VAR_19, VAR_20);
   else
   {
    VAR_20 = FUNC_13(VAR_19, VAR_20, VAR_9);
    FUNC_4(&VAR_10, VAR_19, VAR_20);
    FUNC_6(&VAR_10, "...");
   }
  }
 }


 if (!VAR_17)
  return ((void*)0);

 FUNC_5(&VAR_10, ')');

 if (!VAR_16)
 {
  FUNC_6(&VAR_11, ") = ");
  FUNC_4(&VAR_11, VAR_10.data, VAR_10.len);

  return VAR_11.data;
 }

 return VAR_10.data;
}
