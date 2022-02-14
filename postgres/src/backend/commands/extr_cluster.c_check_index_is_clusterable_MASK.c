
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* rd_index; int rd_indextuple; TYPE_1__* rd_indam; } ;
struct TYPE_10__ {scalar_t__ indrelid; int indisvalid; } ;
struct TYPE_9__ {int amclusterable; } ;
typedef TYPE_3__* Relation ;
typedef int Oid ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_7 (int ,int ) ;

void
FUNC_8(Relation VAR_5, Oid VAR_6, bool VAR_7, LOCKMODE VAR_8)
{
 Relation VAR_9;

 VAR_9 = FUNC_7(VAR_6, VAR_8);




 if (VAR_9->rd_index == ((void*)0) ||
  VAR_9->rd_index->indrelid != FUNC_1(VAR_5))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_2),
     FUNC_4("\"%s\" is not an index for table \"%s\"",
      FUNC_0(VAR_9),
      FUNC_0(VAR_5))));


 if (!VAR_9->rd_indam->amclusterable)
  FUNC_2(VAR_3,
    (FUNC_3(VAR_1),
     FUNC_4("cannot cluster on index \"%s\" because access method does not support clustering",
      FUNC_0(VAR_9))));







 if (!FUNC_5(VAR_9->rd_indextuple, VAR_0, ((void*)0)))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_1),
     FUNC_4("cannot cluster on partial index \"%s\"",
      FUNC_0(VAR_9))));
 if (!VAR_9->rd_index->indisvalid)
  FUNC_2(VAR_3,
    (FUNC_3(VAR_1),
     FUNC_4("cannot cluster on invalid index \"%s\"",
      FUNC_0(VAR_9))));


 FUNC_6(VAR_9, VAR_4);
}
