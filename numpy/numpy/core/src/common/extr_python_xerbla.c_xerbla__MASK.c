
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int format ;
typedef int buf ;
typedef int PyGILState_STATE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char const*,int,char*,int ) ;

int FUNC_4(char *VAR_1, integer *VAR_2)
{
        static const char VAR_3[] = "On entry to %.*s" " parameter number %d had an illegal value";

        char VAR_4[sizeof(VAR_3) + 6 + 4];

        int VAR_5 = 0;




        while( VAR_5<6 && VAR_1[VAR_5]!='\0' )
                VAR_5++;
        while( VAR_5 && VAR_1[VAR_5-1]==' ' )
                VAR_5--;



        FUNC_3(VAR_4, sizeof(VAR_4), VAR_3, VAR_5, VAR_1, *VAR_2);
        FUNC_0(VAR_0, VAR_4);




        return 0;
}
