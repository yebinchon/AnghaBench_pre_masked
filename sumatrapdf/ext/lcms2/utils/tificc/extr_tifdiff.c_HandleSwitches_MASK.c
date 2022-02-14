
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,char**,char*) ;
 void* VAR_5 ;

__attribute__((used)) static
void FUNC_3(int VAR_6, char *VAR_7[])
{
       int VAR_8;

       while ((VAR_8=FUNC_2(VAR_6,VAR_7,"o:O:hHvVg:G:")) != VAR_1) {

       switch (VAR_8) {


       case 'v':
       case 'V':
            VAR_4 = VAR_2;
            break;

       case 'o':
       case 'O':
           VAR_3 = VAR_5;
           break;


        case 'H':
        case 'h':
            FUNC_1();
            break;

        case 'g':
        case 'G':
            VAR_0 = VAR_5;
            break;

  default:

       FUNC_0("Unknown option - run without args to see valid ones");
    }
    }
}
