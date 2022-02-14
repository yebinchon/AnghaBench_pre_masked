
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int objectId; } ;
struct TYPE_6__ {int oid; } ;
typedef scalar_t__ Relation ;
typedef TYPE_1__ Publication ;
typedef TYPE_2__ ObjectAddress ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,char*) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__,int ) ;
 scalar_t__ FUNC_14 (int ,int ,int) ;
 char* FUNC_15 (int ) ;

__attribute__((used)) static ObjectAddress
FUNC_16(List *VAR_7,
           Relation *VAR_8, bool VAR_9)
{
 ObjectAddress VAR_10;
 Relation VAR_11;
 List *VAR_12;
 char *VAR_13;
 Publication *VAR_14;

 FUNC_2(VAR_10, VAR_6, VAR_4);

 VAR_12 = FUNC_10(VAR_7);
 VAR_11 = FUNC_14(FUNC_12(VAR_12),
          VAR_0, VAR_9);
 if (!VAR_11)
  return VAR_10;


 VAR_13 = FUNC_15(FUNC_11(VAR_7));


 VAR_14 = FUNC_0(VAR_13, VAR_9);
 if (!VAR_14)
 {
  FUNC_13(VAR_11, VAR_0);
  return VAR_10;
 }


 VAR_10.objectId =
  FUNC_1(VAR_5, VAR_1,
      FUNC_3(FUNC_6(VAR_11)),
      FUNC_3(VAR_14->oid));
 if (!FUNC_4(VAR_10.objectId))
 {
  if (!VAR_9)
   FUNC_7(VAR_3,
     (FUNC_8(VAR_2),
      FUNC_9("publication relation \"%s\" in publication \"%s\" does not exist",
       FUNC_5(VAR_11), VAR_13)));
  FUNC_13(VAR_11, VAR_0);
  return VAR_10;
 }

 *VAR_8 = VAR_11;
 return VAR_10;
}
