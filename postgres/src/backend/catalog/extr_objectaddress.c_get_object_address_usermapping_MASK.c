
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int serverid; } ;
struct TYPE_10__ {int oid; } ;
struct TYPE_9__ {int oid; } ;
struct TYPE_8__ {int objectId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_user_mapping ;
typedef TYPE_3__* Form_pg_authid ;
typedef TYPE_4__ ForeignServer ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 char* FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (char*,char*) ;

__attribute__((used)) static ObjectAddress
FUNC_16(List *VAR_6, bool VAR_7)
{
 ObjectAddress VAR_8;
 Oid VAR_9;
 char *VAR_10;
 char *VAR_11;
 ForeignServer *VAR_12;
 HeapTuple VAR_13;

 FUNC_4(VAR_8, VAR_5, VAR_3);


 VAR_10 = FUNC_14(FUNC_12(VAR_6));
 VAR_11 = FUNC_14(FUNC_13(VAR_6));


 if (FUNC_15(VAR_10, "public") == 0)
  VAR_9 = VAR_3;
 else
 {
  VAR_13 = FUNC_7(VAR_0,
        FUNC_0(VAR_10));
  if (!FUNC_3(VAR_13))
  {
   if (!VAR_7)
    FUNC_9(VAR_2,
      (FUNC_10(VAR_1),
       FUNC_11("user mapping for user \"%s\" on server \"%s\" does not exist",
        VAR_10, VAR_11)));
   return VAR_8;
  }
  VAR_9 = ((Form_pg_authid) FUNC_1(VAR_13))->oid;
  FUNC_6(VAR_13);
 }


 VAR_12 = FUNC_2(VAR_11, 1);
 if (!VAR_12)
 {
  if (!VAR_7)
   FUNC_9(VAR_2,
     (FUNC_10(VAR_1),
      FUNC_11("server \"%s\" does not exist", VAR_11)));
  return VAR_8;
 }
 VAR_13 = FUNC_8(VAR_4,
       FUNC_5(VAR_9),
       FUNC_5(VAR_12->serverid));
 if (!FUNC_3(VAR_13))
 {
  if (!VAR_7)
   FUNC_9(VAR_2,
     (FUNC_10(VAR_1),
      FUNC_11("user mapping for user \"%s\" on server \"%s\" does not exist",
       VAR_10, VAR_11)));
  return VAR_8;
 }

 VAR_8.objectId = ((Form_pg_user_mapping) FUNC_1(VAR_13))->oid;

 FUNC_6(VAR_13);

 return VAR_8;
}
