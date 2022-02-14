
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_subscription ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

ObjectAddress
FUNC_12(const char *VAR_6, Oid VAR_7)
{
 Oid VAR_8;
 HeapTuple VAR_9;
 Relation VAR_10;
 ObjectAddress VAR_11;
 Form_pg_subscription VAR_12;

 VAR_10 = FUNC_11(VAR_5, VAR_3);

 VAR_9 = FUNC_5(VAR_4, VAR_2,
         FUNC_1(VAR_6));

 if (!FUNC_3(VAR_9))
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("subscription \"%s\" does not exist", VAR_6)));

 VAR_12 = (Form_pg_subscription) FUNC_2(VAR_9);
 VAR_8 = VAR_12->oid;

 FUNC_0(VAR_10, VAR_9, VAR_7);

 FUNC_4(VAR_11, VAR_5, VAR_8);

 FUNC_9(VAR_9);

 FUNC_10(VAR_10, VAR_3);

 return VAR_11;
}
