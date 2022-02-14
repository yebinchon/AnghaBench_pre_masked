
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char**,char*) ;

__attribute__((used)) static
void FUNC_2(int VAR_6, char *VAR_7[])
{
       int VAR_8;

       while ((VAR_8 = FUNC_1(VAR_6, VAR_7, "lcx")) != VAR_0) {

              switch (VAR_8){


              case 'l':
                     VAR_4 = VAR_2;
                     break;

              case 'c':
                     VAR_3 = VAR_2;
                     break;

              case 'x':
                     VAR_5 = VAR_1;
                     break;

              default:

                     FUNC_0("Unknown option - run without args to see valid ones.\n");
              }
       }
}
