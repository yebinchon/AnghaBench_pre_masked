
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * oldbat; int exename; void* oldexe; int batname; } ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 char* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 char* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_7(int VAR_5)
{
    int VAR_6;


    FUNC_2(VAR_3);
    FUNC_2("\\");

    for (VAR_6 = 1; VAR_6 < VAR_0; ++VAR_6)
    {
 VAR_4[VAR_6].oldbat = FUNC_4(VAR_4[VAR_6].batname);
 if (!VAR_5)
     VAR_4[VAR_6].oldexe = FUNC_4(VAR_4[VAR_6].exename);

 if (VAR_1 == ((void*)0) && VAR_4[VAR_6].oldbat != ((void*)0))
 {
     VAR_1 = FUNC_0(FUNC_6(VAR_4[VAR_6].oldbat) + 1);
     FUNC_5(VAR_1, VAR_4[VAR_6].oldbat);
     FUNC_3(VAR_1);
 }
 if (VAR_5 && VAR_4[VAR_6].oldbat != ((void*)0))
 {
     FUNC_1(VAR_4[VAR_6].oldbat);
     VAR_4[VAR_6].oldbat = ((void*)0);
 }
    }

    FUNC_2(VAR_2);
}
