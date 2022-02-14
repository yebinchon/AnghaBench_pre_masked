
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_sourcetext; } ;
typedef TYPE_1__ ParseState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

int
FUNC_2(ParseState *VAR_0, int VAR_1)
{
 int VAR_2;


 if (VAR_1 < 0)
  return 0;

 if (VAR_0 == ((void*)0) || VAR_0->p_sourcetext == ((void*)0))
  return 0;

 VAR_2 = FUNC_1(VAR_0->p_sourcetext, VAR_1) + 1;

 return FUNC_0(VAR_2);
}
