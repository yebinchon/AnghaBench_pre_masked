
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(int VAR_1, TCHAR *VAR_2[])
{
    FUNC_2(VAR_1);
    FUNC_2(VAR_2);

    if (!FUNC_1(VAR_0))
    {
        FUNC_4(FUNC_3("NotifyBootConfigStatus failed! (Error: %lu)\n"),
                 FUNC_0());
    }

    return 0;
}
