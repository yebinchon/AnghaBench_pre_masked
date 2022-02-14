
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Relation ;
typedef int PartitionKey ;
typedef int Oid ;
typedef int Datum ;
typedef scalar_t__ AttrNumber ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,char) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int *,int*) ;
 scalar_t__ FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (char*,int,int) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static char *
FUNC_19(Relation VAR_5,
          Datum *VAR_6,
          bool *VAR_7,
          int VAR_8)
{
 StringInfoData VAR_9;
 PartitionKey VAR_10 = FUNC_2(VAR_5);
 int VAR_11 = FUNC_12(VAR_10);
 int VAR_12;
 Oid VAR_13 = FUNC_3(VAR_5);
 AclResult VAR_14;

 if (FUNC_8(VAR_13, VAR_3, 1) == VAR_4)
  return ((void*)0);


 VAR_14 = FUNC_15(VAR_13, FUNC_0(), VAR_1);
 if (VAR_14 != VAR_0)
 {




  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  {
   AttrNumber VAR_15 = FUNC_10(VAR_10, VAR_12);






   if (VAR_15 == VAR_2 ||
    FUNC_14(VAR_13, VAR_15, FUNC_0(),
           VAR_1) != VAR_0)
    return ((void*)0);
  }
 }

 FUNC_13(&VAR_9);
 FUNC_5(&VAR_9, "(%s) = (",
      FUNC_16(VAR_13, 1));

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
 {
  char *VAR_16;
  int VAR_17;

  if (VAR_7[VAR_12])
   VAR_16 = "null";
  else
  {
   Oid VAR_18;
   bool VAR_19;

   FUNC_9(FUNC_11(VAR_10, VAR_12),
         &VAR_18, &VAR_19);
   VAR_16 = FUNC_1(VAR_18, VAR_6[VAR_12]);
  }

  if (VAR_12 > 0)
   FUNC_7(&VAR_9, ", ");


  VAR_17 = FUNC_18(VAR_16);
  if (VAR_17 <= VAR_8)
   FUNC_4(&VAR_9, VAR_16, VAR_17);
  else
  {
   VAR_17 = FUNC_17(VAR_16, VAR_17, VAR_8);
   FUNC_4(&VAR_9, VAR_16, VAR_17);
   FUNC_7(&VAR_9, "...");
  }
 }

 FUNC_6(&VAR_9, ')');

 return VAR_9.data;
}
