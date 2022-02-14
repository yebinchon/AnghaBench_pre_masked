
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ,char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 int VAR_2 ;
 char* FUNC_9 (char*,char) ;

__attribute__((used)) static void FUNC_10(WCHAR* VAR_3, BOOL VAR_4)
{




    if (VAR_3 == ((void*)0)) {
        FUNC_3();
        return;
    }

    if ( VAR_3[0] == '[')
    {
        WCHAR* VAR_5;
        FUNC_3();


        VAR_3++;
        VAR_5 = FUNC_9(VAR_3, ']');
        if (VAR_5)
            *VAR_5='\0';


        if ( VAR_3[0] == '-')
        {
            FUNC_4(VAR_3 + 1);
        } else if ( FUNC_7(VAR_3) != VAR_0 )
        {
            char* VAR_6 = FUNC_0(VAR_3);
            FUNC_5(VAR_2,"%d: setValue failed to open key %s\n",
                    FUNC_6(), VAR_6);
            FUNC_2(FUNC_1(), 0, VAR_6);
        }
    } else if( VAR_1 &&
               (( VAR_3[0] == '@') ||
                ( VAR_3[0] == '\"')))
    {
        FUNC_8(VAR_3, VAR_4);
    } else
    {



        FUNC_3();
    }
}
