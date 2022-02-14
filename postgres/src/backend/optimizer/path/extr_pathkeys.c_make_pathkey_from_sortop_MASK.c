
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
typedef int Index ;
typedef int Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *,scalar_t__*) ;
 int * FUNC_3 (int *,int *,int ,int ,int ,int ,int,int,int ,int *,int) ;

__attribute__((used)) static PathKey *
FUNC_4(PlannerInfo *VAR_2,
       Expr *VAR_3,
       Relids VAR_4,
       Oid VAR_5,
       bool VAR_6,
       Index VAR_7,
       bool VAR_8)
{
 Oid VAR_9,
    VAR_10,
    VAR_11;
 int16 VAR_12;


 if (!FUNC_2(VAR_5,
         &VAR_9, &VAR_10, &VAR_12))
  FUNC_0(VAR_1, "operator %u is not a valid ordering operator",
    VAR_5);


 VAR_11 = FUNC_1((Node *) VAR_3);

 return FUNC_3(VAR_2,
           VAR_3,
           VAR_4,
           VAR_9,
           VAR_10,
           VAR_11,
           (VAR_12 == VAR_0),
           VAR_6,
           VAR_7,
           ((void*)0),
           VAR_8);
}
