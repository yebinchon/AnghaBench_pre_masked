
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_5__ {scalar_t__ attgenerated; scalar_t__ attidentity; } ;
struct TYPE_4__ {int missingMode; char generated; int * raw_default; scalar_t__ attnum; } ;
typedef int Relation ;
typedef TYPE_1__ RawColumnDefault ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int LOCKMODE ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int ,int ,int ,int,int,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int ,scalar_t__,int ,int,int) ;
 TYPE_3__* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char const*,...) ;
 scalar_t__ FUNC_11 (int ,char const*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static ObjectAddress
FUNC_14(Relation VAR_8, const char *VAR_9,
     Node *VAR_10, LOCKMODE VAR_11)
{
 TupleDesc VAR_12 = FUNC_2(VAR_8);
 AttrNumber VAR_13;
 ObjectAddress VAR_14;




 VAR_13 = FUNC_11(FUNC_4(VAR_8), VAR_9);
 if (VAR_13 == VAR_5)
  FUNC_7(VAR_4,
    (FUNC_8(VAR_3),
     FUNC_10("column \"%s\" of relation \"%s\" does not exist",
      VAR_9, FUNC_3(VAR_8))));


 if (VAR_13 <= 0)
  FUNC_7(VAR_4,
    (FUNC_8(VAR_1),
     FUNC_10("cannot alter system column \"%s\"",
      VAR_9)));

 if (FUNC_6(VAR_12, VAR_13 - 1)->attidentity)
  FUNC_7(VAR_4,
    (FUNC_8(VAR_2),
     FUNC_10("column \"%s\" of relation \"%s\" is an identity column",
      VAR_9, FUNC_3(VAR_8)),
     VAR_10 ? 0 : FUNC_9("Use ALTER TABLE ... ALTER COLUMN ... DROP IDENTITY instead.")));

 if (FUNC_6(VAR_12, VAR_13 - 1)->attgenerated)
  FUNC_7(VAR_4,
    (FUNC_8(VAR_2),
     FUNC_10("column \"%s\" of relation \"%s\" is a generated column",
      VAR_9, FUNC_3(VAR_8))));
 FUNC_5(FUNC_4(VAR_8), VAR_13, VAR_0, 0,
       VAR_10 == ((void*)0) ? 0 : 1);

 if (VAR_10)
 {

  RawColumnDefault *VAR_15;

  VAR_15 = (RawColumnDefault *) FUNC_13(sizeof(RawColumnDefault));
  VAR_15->attnum = VAR_13;
  VAR_15->raw_default = VAR_10;
  VAR_15->missingMode = 0;
  VAR_15->generated = '\0';





  FUNC_0(VAR_8, FUNC_12(VAR_15), VAR_6,
          0, 1, 0, ((void*)0));
 }

 FUNC_1(VAR_14, VAR_7,
      FUNC_4(VAR_8), VAR_13);
 return VAR_14;
}
