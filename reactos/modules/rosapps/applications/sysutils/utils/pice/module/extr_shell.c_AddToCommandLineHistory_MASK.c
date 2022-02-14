
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef int LPSTR ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 size_t VAR_0 ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 char** VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

void FUNC_6(LPSTR VAR_5)
{
    ULONG VAR_6;

    FUNC_1();
    FUNC_0((0,"AddToCommandLineHistory(%s)\n",VAR_5));

    if(FUNC_5(VAR_5))
    {
        for(VAR_6=0;VAR_6<VAR_0;VAR_6++)
        {
            if(FUNC_3(&VAR_1[VAR_6][1],VAR_5) == 0)
            {
                FUNC_0((0,"AddToCommandLineHistory(): command line already exists\n"));
                FUNC_2();
                return;
            }
        }
        VAR_1[VAR_3][0]=':';
        FUNC_4(&VAR_1[VAR_3][1],VAR_5);
        VAR_2 = VAR_3 = (VAR_3 +1)%VAR_0;
        if(VAR_3 == VAR_4)
        {
            VAR_4 = (VAR_4+1)%VAR_0;
        }
    }

    FUNC_2();
}
