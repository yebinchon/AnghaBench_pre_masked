
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef unsigned char* LPSTR ;
typedef unsigned char* LPCSTR ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*) ;

__attribute__((used)) static UINT FUNC_1(LPCSTR VAR_2, DWORD VAR_3, LPSTR VAR_4)
{
    DWORD VAR_5 = 0;
    int VAR_6 = 0;
    unsigned char VAR_7,VAR_8;
    BOOL VAR_9 = VAR_0;

    while (VAR_5 < VAR_3)
    {
        VAR_8 = VAR_2[VAR_5];
        if (VAR_8 == 0x1b )
        {
            VAR_5++;
            if (VAR_5 >= VAR_3)
                return 0;
            VAR_7 = VAR_2[VAR_5];
            if (VAR_7 == '$' || VAR_7 =='(')
                VAR_5++;
            if (VAR_7 == 'K' || VAR_7 =='$')
                VAR_9 = VAR_1;
            else
                VAR_9 = VAR_0;
        }
        else
        {
            if (VAR_9)
            {
                VAR_5++;
                if (VAR_5 >= VAR_3)
                    return 0;
                VAR_7 = VAR_2[VAR_5];
                FUNC_0(&VAR_8,&VAR_7);
                VAR_4[VAR_6++]=VAR_8;
                VAR_4[VAR_6++]=VAR_7;
            }
            else
            {
                VAR_4[VAR_6++] = VAR_8;
            }
        }
        VAR_5++;
    }
    return VAR_6;
}
