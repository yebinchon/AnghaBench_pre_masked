
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int PARSED_COMMAND ;
typedef int * LPTSTR ;
typedef int INT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *,int) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static INT FUNC_5(PARSED_COMMAND *VAR_0, LPTSTR VAR_1, TCHAR *VAR_2)
{
    enum { START, STEP, END };
    INT VAR_3[3] = { 0, 0, 0 };
    INT VAR_4;
    INT VAR_5 = 0;

    TCHAR *VAR_6, *VAR_7 = VAR_1;
    for (VAR_4 = 0; VAR_4 < 3 && FUNC_1(&VAR_6, &VAR_7); VAR_4++)
        VAR_3[VAR_4] = FUNC_4(VAR_6, ((void*)0), 0);

    VAR_4 = VAR_3[START];
    while (!FUNC_0(VAR_0) &&
           (VAR_3[STEP] >= 0 ? (VAR_4 <= VAR_3[END]) : (VAR_4 >= VAR_3[END])))
    {
        FUNC_3(VAR_4, VAR_2, 10);
        VAR_5 = FUNC_2(VAR_0);
        VAR_4 += VAR_3[STEP];
    }
    return VAR_5;
}
