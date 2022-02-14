
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* combining_lexical_function ) (int const) ;
typedef int WORD ;
typedef int WCHAR ;
typedef int INT ;
typedef int HDC ;
typedef scalar_t__ CHAR ;


 int FUNC_0 (int ,int*,int,int *,int ) ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int *,int*,int,int,int ,int,int *) ;

__attribute__((used)) static void FUNC_4(HDC VAR_0, const WCHAR* VAR_1, INT VAR_2, WORD *VAR_3, INT *VAR_4, INT VAR_5, WORD *VAR_6, combining_lexical_function VAR_7)
{
    CHAR *VAR_8;
    int VAR_9,VAR_10;
    WCHAR VAR_11 = 0x25cc;
    WORD VAR_12;

    VAR_8 = FUNC_1(VAR_2);


    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
       VAR_8[VAR_9] = VAR_7(VAR_1[VAR_9]);

    FUNC_0(VAR_0, &VAR_11, 1, &VAR_12, 0);
    for (VAR_9 = 1, VAR_10=1; VAR_9 < VAR_2 - 1; VAR_9++, VAR_10++)
    {
        if (VAR_8[VAR_9] != 0 && VAR_8[VAR_9+VAR_5]==VAR_8[VAR_9])
        {
            FUNC_3(VAR_3, VAR_4, VAR_2, VAR_5, VAR_12, VAR_10, VAR_6);
            VAR_10++;
        }
    }

    FUNC_2(VAR_8);
}
