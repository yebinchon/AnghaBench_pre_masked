
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef unsigned char* LPSTR ;
typedef int* LPCSTR ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (unsigned char*,int) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char*) ;

__attribute__((used)) static UINT FUNC_7(LPCSTR VAR_2, DWORD VAR_3, LPSTR VAR_4)
{
    DWORD VAR_5 = 0;
    int VAR_6 = 0;
    unsigned char VAR_7,VAR_8;
    BOOL VAR_9 = VAR_0;

    while (VAR_5 < VAR_3)
    {
        VAR_8 = VAR_2[VAR_5] & 0xff;
        if (VAR_8 == 10 || VAR_8 == 13)
        {
            if (VAR_9)
            {
                VAR_9 = VAR_0;
                VAR_6 += FUNC_4(VAR_4,VAR_6);
            }
            if (VAR_4)
                VAR_4[VAR_6++] = VAR_8;
            else
                VAR_6++;
        }
        else
        {
            if (FUNC_1(VAR_8))
            {
                VAR_5++;
                if (VAR_5 >= VAR_3)
                    return 0;
                VAR_7 = VAR_2[VAR_5] & 0xff;
                if (FUNC_2(VAR_7))
                {
                    FUNC_6(&VAR_8,&VAR_7);
                    if (!VAR_9)
                    {
                        VAR_9 = VAR_1;
                        VAR_6+=FUNC_3(VAR_4,VAR_6);
                    }
                }

                if (VAR_4)
                {
                    VAR_4[VAR_6++]=VAR_8;
                    VAR_4[VAR_6++]=VAR_7;
                }
                else
                    VAR_6+=2;
            }
            else
            {
                if (FUNC_0(VAR_8))
                {
                    if ((VAR_5+1) >= VAR_3)
                        return 0;
                    VAR_7 = VAR_2[VAR_5+1] & 0xff;
                    VAR_5+=FUNC_5(&VAR_8,&VAR_7);
                    FUNC_6(&VAR_8,&VAR_7);
                    if (!VAR_9)
                    {
                        VAR_9 = VAR_1;
                        VAR_6+=FUNC_3(VAR_4,VAR_6);
                    }
                    if (VAR_4)
                    {
                        VAR_4[VAR_6++]=VAR_8;
                        VAR_4[VAR_6++]=VAR_7;
                    }
                    else
                        VAR_6+=2;
                }
                else
                {
                    if (VAR_9)
                    {
                        VAR_9 = VAR_0;
                        VAR_6 += FUNC_4(VAR_4,VAR_6);
                    }
                    if (VAR_4)
                        VAR_4[VAR_6++]=VAR_8;
                    else
                        VAR_6++;
                }
            }
        }
        VAR_5++;
    }
    if (VAR_9)
        VAR_6 += FUNC_4(VAR_4,VAR_6);
    return VAR_6;
}
