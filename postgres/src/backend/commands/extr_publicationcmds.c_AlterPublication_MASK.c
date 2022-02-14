
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ options; int pubname; } ;
struct TYPE_6__ {int oid; } ;
typedef int Relation ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_publication ;
typedef TYPE_2__ AlterPublicationStmt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

void
FUNC_15(AlterPublicationStmt *VAR_7)
{
 Relation VAR_8;
 HeapTuple VAR_9;
 Form_pg_publication VAR_10;

 VAR_8 = FUNC_14(VAR_5, VAR_6);

 VAR_9 = FUNC_6(VAR_4,
         FUNC_2(VAR_7->pubname));

 if (!FUNC_5(VAR_9))
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_10("publication \"%s\" does not exist",
      VAR_7->pubname)));

 VAR_10 = (Form_pg_publication) FUNC_3(VAR_9);


 if (!FUNC_12(VAR_10->oid, FUNC_4()))
  FUNC_7(VAR_0, VAR_3,
        VAR_7->pubname);

 if (VAR_7->options)
  FUNC_0(VAR_7, VAR_8, VAR_9);
 else
  FUNC_1(VAR_7, VAR_8, VAR_9);


 FUNC_11(VAR_9);
 FUNC_13(VAR_8, VAR_6);
}
