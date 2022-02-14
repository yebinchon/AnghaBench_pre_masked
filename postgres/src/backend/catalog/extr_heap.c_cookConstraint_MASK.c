
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int p_rtable; } ;
typedef TYPE_1__ ParseState ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (TYPE_1__*,int *,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static Node *
FUNC_7(ParseState *VAR_3,
      Node *VAR_4,
      char *VAR_5)
{
 Node *VAR_6;




 VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_2);




 VAR_6 = FUNC_1(VAR_3, VAR_6, "CHECK");




 FUNC_0(VAR_3, VAR_6);





 if (FUNC_5(VAR_3->p_rtable) != 1)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("only table \"%s\" can be referenced in check constraint",
      VAR_5)));

 return VAR_6;
}
