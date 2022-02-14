
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16 ;
typedef int Relids ;
typedef int PlannerInfo ;
typedef int PathKey ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *,scalar_t__*) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int ,int ,int ,int ,int,int,int ,int ,int) ;

List *
FUNC_5(PlannerInfo *VAR_3,
       Expr *VAR_4,
       Relids VAR_5,
       Oid VAR_6,
       Relids VAR_7,
       bool VAR_8)
{
 List *VAR_9;
 Oid VAR_10,
    VAR_11;
 int16 VAR_12;
 PathKey *VAR_13;


 if (!FUNC_2(VAR_6,
         &VAR_10, &VAR_11, &VAR_12))
  FUNC_0(VAR_1, "operator %u is not a valid ordering operator",
    VAR_6);

 VAR_13 = FUNC_4(VAR_3,
            VAR_4,
            VAR_5,
            VAR_10,
            VAR_11,
            FUNC_1((Node *) VAR_4),
            (VAR_12 == VAR_0),
            (VAR_12 == VAR_0),
            0,
            VAR_7,
            VAR_8);

 if (VAR_13)
  VAR_9 = FUNC_3(VAR_13);
 else
  VAR_9 = VAR_2;

 return VAR_9;
}
