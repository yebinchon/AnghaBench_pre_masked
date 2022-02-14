
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int roident; } ;
typedef int RepOriginId ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_replication_origin ;
typedef int Datum ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;

RepOriginId
FUNC_8(char *VAR_4, bool VAR_5)
{
 Form_pg_replication_origin VAR_6;
 Oid VAR_7 = VAR_2;
 HeapTuple VAR_8;
 Datum VAR_9;

 VAR_9 = FUNC_0(VAR_4);

 VAR_8 = FUNC_4(VAR_3, VAR_9);
 if (FUNC_2(VAR_8))
 {
  VAR_6 = (Form_pg_replication_origin) FUNC_1(VAR_8);
  VAR_7 = VAR_6->roident;
  FUNC_3(VAR_8);
 }
 else if (!VAR_5)
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_7("replication origin \"%s\" does not exist",
      VAR_4)));

 return VAR_7;
}
