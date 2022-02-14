
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_next_resno; scalar_t__ p_resolve_unknowns; } ;
typedef TYPE_1__ ParseState ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int * FUNC_8 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static List *
FUNC_9(ParseState *VAR_4, List *VAR_5)
{
 List *VAR_6;
 int VAR_7;

 if (VAR_5 == VAR_3)
  return VAR_3;






 VAR_7 = VAR_4->p_next_resno;
 VAR_4->p_next_resno = 1;


 VAR_6 = FUNC_8(VAR_4, VAR_5, VAR_2);







 if (VAR_6 == VAR_3)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("RETURNING must have at least one column"),
     FUNC_6(VAR_4,
         FUNC_3(FUNC_4(VAR_5)))));


 FUNC_5(VAR_4, VAR_6);


 if (VAR_4->p_resolve_unknowns)
  FUNC_7(VAR_4, VAR_6);


 VAR_4->p_next_resno = VAR_7;

 return VAR_6;
}
