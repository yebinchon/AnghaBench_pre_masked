
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int quals; } ;
struct TYPE_6__ {int * p_namespace; } ;
typedef TYPE_1__ ParseState ;
typedef int Node ;
typedef int List ;
typedef TYPE_2__ JoinExpr ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int * FUNC_1 (TYPE_1__*,int ,int ,char*) ;

__attribute__((used)) static Node *
FUNC_2(ParseState *VAR_1, JoinExpr *VAR_2, List *VAR_3)
{
 Node *VAR_4;
 List *VAR_5;
 FUNC_0(VAR_3, 0, 1);

 VAR_5 = VAR_1->p_namespace;
 VAR_1->p_namespace = VAR_3;

 VAR_4 = FUNC_1(VAR_1, VAR_2->quals,
          VAR_0, "JOIN/ON");

 VAR_1->p_namespace = VAR_5;

 return VAR_4;
}
