
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__* values; } ;
struct TYPE_15__ {scalar_t__ indrelid; scalar_t__ indexrelid; TYPE_1__ indkey; } ;
struct TYPE_14__ {int * rd_opcintype; TYPE_4__* rd_index; } ;
struct TYPE_13__ {char* data; } ;
typedef TYPE_2__ StringInfoData ;
typedef TYPE_3__* Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_4__* Form_pg_index ;
typedef int Datum ;
typedef scalar_t__ AttrNumber ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (TYPE_2__*,char) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (int ,scalar_t__*,int*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (scalar_t__,int) ;

char *
FUNC_14(Relation VAR_5,
         Datum *VAR_6, bool *VAR_7)
{
 StringInfoData VAR_8;
 Form_pg_index VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 Oid VAR_13 = FUNC_4(VAR_5);
 Oid VAR_14;
 AclResult VAR_15;

 VAR_10 = FUNC_2(VAR_5);
 VAR_9 = VAR_5->rd_index;
 VAR_14 = VAR_9->indrelid;
 FUNC_0(VAR_13 == VAR_9->indexrelid);


 if (FUNC_8(VAR_14, VAR_3, 1) == VAR_4)
  return ((void*)0);


 VAR_15 = FUNC_12(VAR_14, FUNC_1(), VAR_1);
 if (VAR_15 != VAR_0)
 {




  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
  {
   AttrNumber VAR_16 = VAR_9->indkey.values[VAR_12];







   if (VAR_16 == VAR_2 ||
    FUNC_11(VAR_14, VAR_16, FUNC_1(),
           VAR_1) != VAR_0)
   {

    return ((void*)0);
   }
  }
 }

 FUNC_10(&VAR_8);
 FUNC_5(&VAR_8, "(%s)=(",
      FUNC_13(VAR_13, 1));

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
 {
  char *VAR_17;

  if (VAR_7[VAR_11])
   VAR_17 = "null";
  else
  {
   Oid VAR_18;
   bool VAR_19;
   FUNC_9(VAR_5->rd_opcintype[VAR_11],
         &VAR_18, &VAR_19);
   VAR_17 = FUNC_3(VAR_18, VAR_6[VAR_11]);
  }

  if (VAR_11 > 0)
   FUNC_7(&VAR_8, ", ");
  FUNC_7(&VAR_8, VAR_17);
 }

 FUNC_6(&VAR_8, ')');

 return VAR_8.data;
}
