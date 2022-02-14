
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IntuitionBase {int dummy; } ;
typedef int UBYTE ;
typedef scalar_t__ BPTR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct IntuitionBase* VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,long) ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;

void
FUNC_8()
{
    static char VAR_7[] = "intuition.library";




    VAR_0 = 80;
    VAR_3 = 24;




    if (VAR_4 == (BPTR)((void*)0))
    {
 VAR_4 = FUNC_0();
 VAR_5 = FUNC_3();





 if (!FUNC_1(VAR_4))
     VAR_4 = VAR_5;
 else if (!FUNC_1(VAR_5))
     VAR_5 = VAR_4;
    }

    FUNC_7();

    VAR_6 = ((void*)0);

    if ((VAR_2 = (struct IntuitionBase *)
    FUNC_2((UBYTE *)VAR_7, 0L)) == ((void*)0))
    {
 FUNC_5(FUNC_4("cannot open "));
 FUNC_5(VAR_7);
 FUNC_5("!?\n");
 FUNC_6(3);
    }

}
