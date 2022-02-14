
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct access_res {int gothandle; int lasterr; scalar_t__ ignore; } ;
typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_5(LPCSTR VAR_7, const struct access_res *VAR_8, DWORD VAR_9)
{
    DWORD VAR_10 = 0, VAR_11 = 0;
    DWORD VAR_12;
    HANDLE VAR_13;
    int VAR_14, VAR_15, VAR_16 = 0;

    for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
    {
        if (VAR_14 == 0) VAR_10 = 0;
        if (VAR_14 == 1) VAR_10 = VAR_3;
        if (VAR_14 == 2) VAR_10 = VAR_4;
        if (VAR_14 == 3) VAR_10 = VAR_3 | VAR_4;

        for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
        {
            if (VAR_8[VAR_16].ignore)
                continue;

            if (VAR_15 == 0) VAR_11 = 0;
            if (VAR_15 == 1) VAR_11 = VAR_1;
            if (VAR_15 == 2) VAR_11 = VAR_2;
            if (VAR_15 == 3) VAR_11 = VAR_1 | VAR_2;

            FUNC_3(0xdeadbeef);
            VAR_13 = FUNC_1(VAR_7, VAR_10, VAR_11, ((void*)0), VAR_6,
                                VAR_0, 0);
            VAR_12 = FUNC_2();

            FUNC_4((VAR_13 != VAR_5) == VAR_8[VAR_16].gothandle,
               "(%d, handle, %d): Expected %d, got %d\n",
               VAR_9, VAR_16, VAR_8[VAR_16].gothandle,
               (VAR_13 != VAR_5));

            FUNC_4(VAR_12 == VAR_8[VAR_16].lasterr, "(%d, lasterr, %d): Expected %d, got %d\n",
               VAR_9, VAR_16, VAR_8[VAR_16].lasterr, VAR_12);

            FUNC_0(VAR_13);
            VAR_16++;
        }
    }
}
