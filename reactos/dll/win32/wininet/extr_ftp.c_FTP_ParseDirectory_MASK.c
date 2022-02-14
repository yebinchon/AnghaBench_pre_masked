
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ftp_session_t ;
typedef int * LPFILEPROPERTIESW ;
typedef int* LPDWORD ;
typedef int LPCWSTR ;
typedef int INT ;
typedef int FILEPROPERTIESW ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int) ;

__attribute__((used)) static BOOL FUNC_7(ftp_session_t *VAR_3, INT VAR_4, LPCWSTR VAR_5,
    LPFILEPROPERTIESW *VAR_6, LPDWORD VAR_7)
{
    BOOL VAR_8 = VAR_2;
    INT VAR_9 = 500;
    INT VAR_10 = -1;

    FUNC_2("\n");


    *VAR_6 = FUNC_3(sizeof(FILEPROPERTIESW)*(VAR_9));
    if (!*VAR_6)
        return VAR_1;

    do {
        if (VAR_10+1 >= VAR_9)
        {
            LPFILEPROPERTIESW VAR_11;

            VAR_9 *= 2;
            VAR_11 = FUNC_6(*VAR_6, sizeof(FILEPROPERTIESW)*VAR_9);
            if (((void*)0) == VAR_11)
            {
                VAR_8 = VAR_1;
                break;
            }

            *VAR_6 = VAR_11;
        }
        VAR_10++;
    } while (FUNC_0(VAR_4, VAR_5, &(*VAR_6)[VAR_10]));

    if (VAR_8 && VAR_10)
    {
        if (VAR_10 < VAR_9 - 1)
        {
            LPFILEPROPERTIESW VAR_12;

            VAR_12 = FUNC_5(*VAR_6, sizeof(FILEPROPERTIESW)*VAR_10);
            if (((void*)0) != VAR_12)
                *VAR_6 = VAR_12;
        }
        *VAR_7 = VAR_10;
    }
    else
    {
        FUNC_4(*VAR_6);
        FUNC_1(VAR_0);
        VAR_8 = VAR_1;
    }

    return VAR_8;
}
