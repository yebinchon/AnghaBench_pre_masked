
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct access_res {int gothandle; int lasterr; scalar_t__ ignore; } ;
typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int * VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*,int,int,int,int) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_7(LPCSTR VAR_5, const struct access_res *VAR_6, DWORD VAR_7)
{
    int VAR_8, VAR_9, VAR_10 = 0;

    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++)
    {
        for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++)
        {
            DWORD VAR_11;
            HANDLE VAR_12;

            if (VAR_6[VAR_10].ignore)
                continue;

            FUNC_4(0xdeadbeef);
            VAR_12 = FUNC_2(VAR_5, VAR_3[VAR_8], VAR_4[VAR_9], ((void*)0), VAR_2,
                                VAR_0, 0);
            VAR_11 = FUNC_3();

            FUNC_6((VAR_12 != VAR_1) == VAR_6[VAR_10].gothandle,
               "(%d, handle, %d): Expected %d, got %d\n",
               VAR_7, VAR_10, VAR_6[VAR_10].gothandle,
               (VAR_12 != VAR_1));

            FUNC_6(VAR_11 == VAR_6[VAR_10].lasterr ||
               FUNC_5(VAR_11 == 0xdeadbeef) ,
               "(%d, lasterr, %d): Expected %d, got %d\n",
               VAR_7, VAR_10, VAR_6[VAR_10].lasterr, VAR_11);

            FUNC_1(VAR_12);
            VAR_10++;
        }
    }
}
