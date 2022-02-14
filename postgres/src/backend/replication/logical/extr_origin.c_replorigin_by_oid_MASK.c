
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int roname; } ;
typedef scalar_t__ RepOriginId ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_replication_origin ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,scalar_t__) ;
 char* FUNC_10 (int *) ;

bool
FUNC_11(RepOriginId VAR_5, bool VAR_6, char **VAR_7)
{
 HeapTuple VAR_8;
 Form_pg_replication_origin VAR_9;

 FUNC_0(FUNC_4((Oid) VAR_5));
 FUNC_0(VAR_5 != VAR_3);
 FUNC_0(VAR_5 != VAR_0);

 VAR_8 = FUNC_6(VAR_4,
       FUNC_3((Oid) VAR_5));

 if (FUNC_2(VAR_8))
 {
  VAR_9 = (Form_pg_replication_origin) FUNC_1(VAR_8);
  *VAR_7 = FUNC_10(&VAR_9->roname);
  FUNC_5(VAR_8);

  return 1;
 }
 else
 {
  *VAR_7 = ((void*)0);

  if (!VAR_6)
   FUNC_7(VAR_2,
     (FUNC_8(VAR_1),
      FUNC_9("replication origin with OID %u does not exist",
       VAR_5)));

  return 0;
 }
}
