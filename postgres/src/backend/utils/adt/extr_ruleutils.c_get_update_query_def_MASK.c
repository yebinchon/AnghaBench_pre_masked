
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int indentLevel; int buf; } ;
typedef TYPE_3__ deparse_context ;
struct TYPE_25__ {scalar_t__ returningList; TYPE_2__* jointree; int targetList; int rtable; int resultRelation; } ;
struct TYPE_24__ {scalar_t__ rtekind; TYPE_1__* alias; int relid; } ;
struct TYPE_22__ {int * quals; } ;
struct TYPE_21__ {int aliasname; } ;
typedef int StringInfo ;
typedef TYPE_4__ RangeTblEntry ;
typedef TYPE_5__ Query ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*,char*,int ,int ,int) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (int ,char) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_5__*,char*,TYPE_3__*) ;
 int FUNC_8 (int *,TYPE_3__*,int) ;
 int FUNC_9 (scalar_t__,TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_5__*,int ,TYPE_3__*,TYPE_4__*) ;
 int FUNC_11 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int ) ;
 TYPE_4__* FUNC_14 (int ,int ) ;

__attribute__((used)) static void
FUNC_15(Query *VAR_3, deparse_context *VAR_4)
{
 StringInfo VAR_5 = VAR_4->buf;
 RangeTblEntry *VAR_6;


 FUNC_11(VAR_3, VAR_4);




 VAR_6 = FUNC_14(VAR_3->resultRelation, VAR_3->rtable);
 FUNC_0(VAR_6->rtekind == VAR_2);
 if (FUNC_1(VAR_4))
 {
  FUNC_4(VAR_5, ' ');
  VAR_4->indentLevel += VAR_1;
 }
 FUNC_3(VAR_5, "UPDATE %s%s",
      FUNC_12(VAR_6),
      FUNC_6(VAR_6->relid, VAR_0));
 if (VAR_6->alias != ((void*)0))
  FUNC_3(VAR_5, " %s",
       FUNC_13(VAR_6->alias->aliasname));
 FUNC_5(VAR_5, " SET ");


 FUNC_10(VAR_3, VAR_3->targetList, VAR_4, VAR_6);


 FUNC_7(VAR_3, " FROM ", VAR_4);


 if (VAR_3->jointree->quals != ((void*)0))
 {
  FUNC_2(VAR_4, " WHERE ",
        -VAR_1, VAR_1, 1);
  FUNC_8(VAR_3->jointree->quals, VAR_4, 0);
 }


 if (VAR_3->returningList)
 {
  FUNC_2(VAR_4, " RETURNING",
        -VAR_1, VAR_1, 1);
  FUNC_9(VAR_3->returningList, VAR_4, ((void*)0));
 }
}
