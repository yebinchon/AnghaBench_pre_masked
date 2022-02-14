
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {int location; } ;
typedef TYPE_1__ Var ;
typedef int RangeTblEntry ;
typedef int ParseState ;
typedef int Oid ;


 int FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int *,int,int *,int *,int *) ;
 TYPE_1__* FUNC_2 (int,int,int ,int ,int ,int) ;

Var *
FUNC_3(ParseState *VAR_0, RangeTblEntry *VAR_1, int VAR_2, int VAR_3)
{
 Var *VAR_4;
 int VAR_5,
    VAR_6;
 Oid VAR_7;
 int32 VAR_8;
 Oid VAR_9;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_6);
 FUNC_1(VAR_1, VAR_2, &VAR_7, &VAR_8, &VAR_9);
 VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_7, VAR_8, VAR_9, VAR_6);
 VAR_4->location = VAR_3;
 return VAR_4;
}
