
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int oid; int pubowner; int pubname; scalar_t__ puballtables; } ;
struct TYPE_6__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_publication ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17(Relation VAR_9, HeapTuple VAR_10, Oid VAR_11)
{
 Form_pg_publication VAR_12;

 VAR_12 = (Form_pg_publication) FUNC_1(VAR_10);

 if (VAR_12->pubowner == VAR_11)
  return;

 if (!FUNC_15())
 {
  AclResult VAR_13;


  if (!FUNC_14(VAR_12->oid, FUNC_2()))
   FUNC_5(VAR_0, VAR_7,
         FUNC_4(VAR_12->pubname));


  FUNC_7(FUNC_2(), VAR_11);


  VAR_13 = FUNC_13(VAR_5, VAR_11, VAR_2);
  if (VAR_13 != VAR_1)
   FUNC_5(VAR_13, VAR_6,
         FUNC_12(VAR_5));

  if (VAR_12->puballtables && !FUNC_16(VAR_11))
   FUNC_8(VAR_4,
     (FUNC_9(VAR_3),
      FUNC_11("permission denied to change owner of publication \"%s\"",
       FUNC_4(VAR_12->pubname)),
      FUNC_10("The owner of a FOR ALL TABLES publication must be a superuser.")));
 }

 VAR_12->pubowner = VAR_11;
 FUNC_0(VAR_9, &VAR_10->t_self, VAR_10);


 FUNC_6(VAR_8,
       VAR_12->oid,
       VAR_11);

 FUNC_3(VAR_8,
         VAR_12->oid, 0);
}
