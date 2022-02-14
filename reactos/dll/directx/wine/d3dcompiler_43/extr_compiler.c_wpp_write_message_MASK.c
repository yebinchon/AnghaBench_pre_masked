
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __ms_va_list ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 char* FUNC_3 (int ,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_4 (char*,int,char const*,int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(const char *VAR_4, __ms_va_list VAR_5)
{
    char* VAR_6;
    int VAR_7, VAR_8;

    if(VAR_2 == 0)
    {
        VAR_1 = FUNC_2(FUNC_1(), 0, VAR_0);
        if(VAR_1 == ((void*)0))
            return;

        VAR_2 = VAR_0;
    }

    while(1)
    {
        VAR_7 = FUNC_4(VAR_1 + VAR_3,
                       VAR_2 - VAR_3, VAR_4, VAR_5);

        if (VAR_7 < 0 ||
            VAR_7 >= VAR_2 - VAR_3) {

            VAR_8 = VAR_2 * 2;
            VAR_6 = FUNC_3(FUNC_1(), 0, VAR_1, VAR_8);
            if(VAR_6 == ((void*)0))
            {
                FUNC_0("Error reallocating memory for parser messages\n");
                return;
            }
            VAR_1 = VAR_6;
            VAR_2 = VAR_8;
        }
        else
        {
            VAR_3 += VAR_7;
            return;
        }
    }
}
