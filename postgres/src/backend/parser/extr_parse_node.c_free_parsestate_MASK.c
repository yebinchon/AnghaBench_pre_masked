
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_next_resno; int * p_target_relation; } ;
typedef TYPE_1__ ParseState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(ParseState *VAR_4)
{





 if (VAR_4->p_next_resno - 1 > VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("target lists can have at most %d entries",
      VAR_2)));

 if (VAR_4->p_target_relation != ((void*)0))
  FUNC_4(VAR_4->p_target_relation, VAR_3);

 FUNC_3(VAR_4);
}
