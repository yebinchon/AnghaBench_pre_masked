
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int p_rtable; TYPE_2__* p_target_rangetblentry; int * p_target_relation; } ;
struct TYPE_15__ {int requiredPerms; } ;
struct TYPE_14__ {int alias; int relname; int * schemaname; } ;
typedef TYPE_1__ RangeVar ;
typedef TYPE_2__ RangeTblEntry ;
typedef TYPE_3__ ParseState ;
typedef int AclMode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int,int,int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *,int ,int ,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (TYPE_3__*,TYPE_1__*,int ) ;
 TYPE_2__* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int *,int ) ;

int
FUNC_11(ParseState *VAR_4, RangeVar *VAR_5,
      bool VAR_6, bool VAR_7, AclMode VAR_8)
{
 RangeTblEntry *VAR_9;
 int VAR_10;





 if (VAR_5->schemaname == ((void*)0) &&
  FUNC_9(VAR_4, VAR_5->relname))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("relation \"%s\" cannot be the target of a modifying statement",
      VAR_5->relname)));


 if (VAR_4->p_target_relation != ((void*)0))
  FUNC_10(VAR_4->p_target_relation, VAR_2);
 VAR_4->p_target_relation = FUNC_7(VAR_4, VAR_5,
            VAR_3);




 VAR_9 = FUNC_2(VAR_4, VAR_4->p_target_relation,
          VAR_3,
          VAR_5->alias, VAR_6, 0);
 VAR_4->p_target_rangetblentry = VAR_9;


 VAR_10 = FUNC_6(VAR_4->p_rtable);
 FUNC_0(VAR_9 == FUNC_8(VAR_10, VAR_4->p_rtable));
 VAR_9->requiredPerms = VAR_8;
 if (VAR_7)
  FUNC_1(VAR_4, VAR_9, 1, 1, 1);

 return VAR_10;
}
