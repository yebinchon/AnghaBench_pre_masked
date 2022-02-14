
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_varlevel; int min_agglevel; scalar_t__ sublevels_up; int * pstate; } ;
typedef TYPE_1__ check_agg_arguments_context ;
typedef int ParseState ;
typedef int Node ;
typedef int List ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,void*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int
FUNC_8(ParseState *VAR_3,
     List *VAR_4,
     List *VAR_5,
     Expr *VAR_6)
{
 int VAR_7;
 check_agg_arguments_context VAR_8;

 VAR_8.pstate = VAR_3;
 VAR_8.min_varlevel = -1;
 VAR_8.min_agglevel = -1;
 VAR_8.sublevels_up = 0;

 (void) FUNC_4((Node *) VAR_5,
          VAR_2,
          (void *) &VAR_8);

 (void) FUNC_4((Node *) VAR_6,
          VAR_2,
          (void *) &VAR_8);





 if (VAR_8.min_varlevel < 0)
 {
  if (VAR_8.min_agglevel < 0)
   VAR_7 = 0;
  else
   VAR_7 = VAR_8.min_agglevel;
 }
 else if (VAR_8.min_agglevel < 0)
  VAR_7 = VAR_8.min_varlevel;
 else
  VAR_7 = FUNC_0(VAR_8.min_varlevel, VAR_8.min_agglevel);




 if (VAR_7 == VAR_8.min_agglevel)
 {
  int VAR_9;

  VAR_9 = FUNC_5((Node *) VAR_5, VAR_7);
  if (VAR_9 < 0)
   VAR_9 = FUNC_5((Node *) VAR_6, VAR_7);
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("aggregate function calls cannot be nested"),
     FUNC_7(VAR_3, VAR_9)));
 }
 if (VAR_4)
 {
  VAR_8.min_varlevel = -1;
  VAR_8.min_agglevel = -1;
  (void) FUNC_4((Node *) VAR_4,
           VAR_2,
           (void *) &VAR_8);
  if (VAR_8.min_varlevel >= 0 && VAR_8.min_varlevel < VAR_7)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("outer-level aggregate cannot contain a lower-level variable in its direct arguments"),
      FUNC_7(VAR_3,
          FUNC_6((Node *) VAR_4,
               VAR_8.min_varlevel))));
  if (VAR_8.min_agglevel >= 0 && VAR_8.min_agglevel <= VAR_7)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("aggregate function calls cannot be nested"),
      FUNC_7(VAR_3,
          FUNC_5((Node *) VAR_4,
               VAR_8.min_agglevel))));
 }
 return VAR_7;
}
