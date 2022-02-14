
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int INT ;
typedef void* BOOL ;


 int FUNC_0 (int ,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;

BOOL FUNC_1(int VAR_10, WCHAR *VAR_11[])
{
    INT VAR_12;

    for (VAR_12 = 1; VAR_12 < VAR_10; VAR_12++)
    {
        if (VAR_11[VAR_12][0] == L'-')
        {
            switch (VAR_11[VAR_12][1])
            {
                case L's':
                    VAR_7 = VAR_3;
                    break;
                case L'd':
                    VAR_6 = VAR_3;
                    break;
                case L'c':
                    if (VAR_12 == VAR_10 - 1)
                    {
                        FUNC_0(VAR_2, VAR_1);
                        return VAR_0;
                    }
                    VAR_5 = VAR_3;
                    VAR_8 = VAR_11[++VAR_12];
                    break;
                case L'w':
                    if (VAR_12 == VAR_10 - 1)
                    {
                        FUNC_0(VAR_2, VAR_1);
                        return VAR_0;
                    }
                    VAR_9 = VAR_11[++VAR_12];
                    break;
                case L'a':
                    VAR_4 = VAR_3;
                    break;
                default :
                    FUNC_0(VAR_2, VAR_1);
                    return VAR_0;
            }

        }
        else
        {
            FUNC_0(VAR_2, VAR_1);
            return VAR_0;
        }
    }

    return VAR_3;
}
