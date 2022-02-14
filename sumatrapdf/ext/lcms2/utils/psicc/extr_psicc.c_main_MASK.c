
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * cmsContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_7(int VAR_5, char *VAR_6[])
{
 int VAR_7;
    cmsContext VAR_8 = ((void*)0);


 FUNC_4(((void*)0), "psicc");

  FUNC_2(VAR_5, VAR_6);

     VAR_7 = (VAR_5 - VAR_4);
  if (VAR_7 != 0 && VAR_7 != 1)
    FUNC_3();

    if (VAR_1 == ((void*)0) && VAR_2 == ((void*)0))
        FUNC_3();

  if (VAR_7 == 0)
   VAR_0 = VAR_3;
  else
   VAR_0 = FUNC_6(VAR_6[VAR_4], "wt");

   if (VAR_1 != ((void*)0))
   FUNC_1(VAR_8);

   if (VAR_2 != ((void*)0))
   FUNC_0(VAR_8);

   if (VAR_7 == 1) {
    FUNC_5(VAR_0);
   }

      return 0;
}
