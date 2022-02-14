
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int attname; int attnotnull; } ;
struct TYPE_12__ {int ii_NumIndexKeyAttrs; scalar_t__* ii_IndexAttrNumbers; } ;
struct TYPE_11__ {TYPE_1__* rd_rel; } ;
struct TYPE_10__ {scalar_t__ relispartition; } ;
typedef TYPE_2__* Relation ;
typedef int IndexStmt ;
typedef TYPE_3__ IndexInfo ;
typedef int HeapTuple ;
typedef TYPE_4__* Form_pg_attribute ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,char*,scalar_t__,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;

void
FUNC_14(Relation VAR_4,
      IndexInfo *VAR_5,
      bool VAR_6,
      IndexStmt *VAR_7)
{
 int VAR_8;







 if ((VAR_6 || VAR_4->rd_rel->relispartition) &&
  FUNC_13(VAR_4))
 {
  FUNC_10(VAR_3,
    (FUNC_11(VAR_2),
     FUNC_12("multiple primary keys for table \"%s\" are not allowed",
      FUNC_5(VAR_4))));
 }






 for (VAR_8 = 0; VAR_8 < VAR_5->ii_NumIndexKeyAttrs; VAR_8++)
 {
  AttrNumber VAR_9 = VAR_5->ii_IndexAttrNumbers[VAR_8];
  HeapTuple VAR_10;
  Form_pg_attribute VAR_11;

  if (VAR_9 == 0)
   FUNC_10(VAR_3,
     (FUNC_11(VAR_1),
      FUNC_12("primary keys cannot be expressions")));


  if (VAR_9 < 0)
   continue;

  VAR_10 = FUNC_8(VAR_0,
           FUNC_4(FUNC_6(VAR_4)),
           FUNC_2(VAR_9));
  if (!FUNC_1(VAR_10))
   FUNC_9(VAR_3, "cache lookup failed for attribute %d of relation %u",
     VAR_9, FUNC_6(VAR_4));
  VAR_11 = (Form_pg_attribute) FUNC_0(VAR_10);

  if (!VAR_11->attnotnull)
   FUNC_10(VAR_3,
     (FUNC_11(VAR_2),
      FUNC_12("primary key column \"%s\" is not marked NOT NULL",
       FUNC_3(VAR_11->attname))));

  FUNC_7(VAR_10);
 }
}
