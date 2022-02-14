
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HKEY ;
typedef int COLORREF ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int *,scalar_t__) ;
 int * VAR_4 ;
 int FUNC_7 (char*,char*,int,int,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9 (HKEY VAR_6)
{
    char VAR_7[13];
    HKEY VAR_8;
    int VAR_9;

    if (FUNC_5( VAR_6, VAR_5,
                         0, 0, 0, VAR_1,
                         0, &VAR_8, 0 ) == VAR_0)
    {
        for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
        {
            COLORREF VAR_10 = FUNC_3 (VAR_9);

            FUNC_7 (VAR_7, "%d %d %d",
                FUNC_2 (VAR_10), FUNC_1 (VAR_10), FUNC_0 (VAR_10));

            FUNC_6 (VAR_8, VAR_4[VAR_9], 0, VAR_3,
                (BYTE*)VAR_7, FUNC_8 (VAR_7)+1);
        }
        FUNC_4 (VAR_8);
    }
}
