
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCKET ;
typedef size_t INT ;
typedef scalar_t__ CHAR ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static BOOL
FUNC_1(SOCKET VAR_6)
{
    CHAR VAR_7[VAR_3];
    CHAR VAR_8[VAR_2];
    INT VAR_9;
    INT VAR_10;
    INT VAR_11;


    for (VAR_9 = 0, VAR_11 = VAR_1; VAR_11 <= VAR_0; VAR_9++, VAR_11++)
        VAR_7[VAR_9] = (CHAR)VAR_11;

    VAR_10 = 0;
    while (!VAR_5)
    {

        if (VAR_10 == VAR_3)
            VAR_10 = 0;


        VAR_9 = VAR_10;
        for (VAR_11=0; VAR_11 < VAR_2 - 2; VAR_11++)
        {
            VAR_8[VAR_11] = VAR_7[VAR_9];


            if (VAR_7[VAR_9] == VAR_7[VAR_3 - 1])
                VAR_9 = 0;
            else
                VAR_9++;
        }
        VAR_8[VAR_2 - 2] = '\r';
        VAR_8[VAR_2 - 1] = '\n';

        if (!FUNC_0(VAR_6, VAR_8))
            break;


        VAR_10++;
    }

    return VAR_4;
}
