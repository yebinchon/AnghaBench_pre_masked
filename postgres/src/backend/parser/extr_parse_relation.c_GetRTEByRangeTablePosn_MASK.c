
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p_rtable; struct TYPE_3__* parentParseState; } ;
typedef int RangeTblEntry ;
typedef TYPE_1__ ParseState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int ) ;

RangeTblEntry *
FUNC_3(ParseState *VAR_0,
        int VAR_1,
        int VAR_2)
{
 while (VAR_2-- > 0)
 {
  VAR_0 = VAR_0->parentParseState;
  FUNC_0(VAR_0 != ((void*)0));
 }
 FUNC_0(VAR_1 > 0 && VAR_1 <= FUNC_1(VAR_0->p_rtable));
 return FUNC_2(VAR_1, VAR_0->p_rtable);
}
