
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int eval_processed; int * eval_tuptable; int readonly_func; } ;
struct TYPE_10__ {int query; int * plan; } ;
typedef int * Portal ;
typedef int ParamListInfo ;
typedef TYPE_1__ PLpgSQL_expr ;
typedef TYPE_2__ PLpgSQL_execstate ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,long) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int * VAR_7 ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,int ,int) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(PLpgSQL_execstate *VAR_8,
    PLpgSQL_expr *VAR_9, long VAR_10, Portal *VAR_11)
{
 ParamListInfo VAR_12;
 int VAR_13;
 if (VAR_9->plan == ((void*)0))
  FUNC_9(VAR_8, VAR_9,
        VAR_11 == ((void*)0) ? VAR_0 : 0, 1);




 VAR_12 = FUNC_10(VAR_8, VAR_9);




 if (VAR_11 != ((void*)0))
 {
  *VAR_11 = FUNC_1(((void*)0), VAR_9->plan,
              VAR_12,
              VAR_8->readonly_func);
  if (*VAR_11 == ((void*)0))
   FUNC_4(VAR_2, "could not open implicit cursor for query \"%s\": %s",
     VAR_9->query, FUNC_3(VAR_6));
  FUNC_8(VAR_8);
  return VAR_3;
 }




 VAR_13 = FUNC_2(VAR_9->plan, VAR_12,
           VAR_8->readonly_func, VAR_10);
 if (VAR_13 != VAR_4)
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("query \"%s\" is not a SELECT", VAR_9->query)));


 FUNC_0(VAR_8->eval_tuptable == ((void*)0));
 VAR_8->eval_tuptable = VAR_7;
 VAR_8->eval_processed = VAR_5;

 return VAR_13;
}
