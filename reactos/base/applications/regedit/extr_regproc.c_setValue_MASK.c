
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwData ;
typedef char WCHAR ;
typedef int * LPBYTE ;
typedef scalar_t__ LONG ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*,int ,scalar_t__,int *,scalar_t__) ;
 int * FUNC_6 (char*,scalar_t__*) ;
 int FUNC_7 (char*,scalar_t__*) ;
 int VAR_9 ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (char**,scalar_t__*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 int VAR_10 ;

__attribute__((used)) static LONG FUNC_13(WCHAR* VAR_11, WCHAR* VAR_12, BOOL VAR_13)
{
    LONG VAR_14;
    DWORD VAR_15, VAR_16;
    LPBYTE VAR_17;
    DWORD VAR_18, VAR_19;
    WCHAR VAR_20[] = {'-',0};

    if ( (VAR_11 == ((void*)0)) || (VAR_12 == ((void*)0)) )
        return VAR_2;

    if (FUNC_11(VAR_12, VAR_20) == 0)
    {
        VAR_14=FUNC_4(VAR_9,VAR_11);
        return (VAR_14 == VAR_0 ? VAR_3 : VAR_14);
    }


    VAR_15 = FUNC_10(&VAR_12, &VAR_16);

    if (VAR_16 == VAR_8)
    {
        FUNC_3(VAR_12);




        VAR_19 = FUNC_12(VAR_12);
        if(VAR_12[VAR_19-1] != '"')
            return VAR_1;
        if (VAR_19>0 && VAR_12[VAR_19-1]=='"')
        {
            VAR_19--;
            VAR_12[VAR_19]='\0';
        }
        VAR_17 = (BYTE*) VAR_12;
        VAR_19++;
        VAR_19 = VAR_19 * sizeof(WCHAR);
    }
    else if (VAR_16 == VAR_5)
    {
        if (!FUNC_7(VAR_12, &VAR_18))
            return VAR_1;
        VAR_17 = (BYTE*)&VAR_18;
        VAR_19 = sizeof(VAR_18);
    }
    else if (VAR_16 == VAR_4)
    {
        VAR_17 = FUNC_6(VAR_12, &VAR_19);
        if (!VAR_17)
            return VAR_1;

        if((VAR_15 == VAR_7 || VAR_15 == VAR_6) && !VAR_13)
        {
            LPBYTE VAR_21 = VAR_17;
            VAR_17 = (LPBYTE)FUNC_1((char*)VAR_17, VAR_19, &VAR_19);
            VAR_19 *= sizeof(WCHAR);
            FUNC_2(FUNC_0(), 0, VAR_21);
        }
    }
    else
    {
        FUNC_8(VAR_10,"%d: ERROR, unknown data format\n", FUNC_9());
        return VAR_1;
    }

    VAR_14 = FUNC_5(
               VAR_9,
               VAR_11,
               0,
               VAR_15,
               VAR_17,
               VAR_19);
    if (VAR_16 == VAR_4)
        FUNC_2(FUNC_0(), 0, VAR_17);
    return VAR_14;
}
