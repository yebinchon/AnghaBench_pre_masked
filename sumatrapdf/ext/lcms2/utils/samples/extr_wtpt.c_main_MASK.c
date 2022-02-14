
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * cmsHPROFILE ;
typedef int cmsCIEXYZ ;


 int FUNC_0 (int,char**) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int * FUNC_6 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_7(int VAR_2, char *VAR_3[])
{
       int VAR_4;

       FUNC_2("wtpt");

       FUNC_0(VAR_2, VAR_3);

       VAR_4 = (VAR_2 - VAR_1);

       if (VAR_4 != 1)
              FUNC_1();

       else {
              cmsCIEXYZ* VAR_5;
              cmsHPROFILE VAR_6 = FUNC_5(VAR_3[VAR_1], "r");
              if (VAR_6 == ((void*)0)) return 1;

              VAR_5 = FUNC_6(VAR_6, VAR_0);
              FUNC_3(VAR_5);
              FUNC_4(VAR_6);
       }

       return 0;
}
