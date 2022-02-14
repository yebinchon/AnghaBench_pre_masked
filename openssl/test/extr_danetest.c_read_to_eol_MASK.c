
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(BIO *VAR_0)
{
    static char VAR_1[1024];
    int VAR_2;

    if (!FUNC_0(VAR_0, VAR_1, sizeof(VAR_1)))
        return ((void*)0);

    VAR_2 = FUNC_4(VAR_1);
    if (VAR_1[VAR_2 - 1] != '\n') {
        if (VAR_2 + 1 == sizeof(VAR_1))
            FUNC_1("input too long");
        else
            FUNC_1("EOF before newline");
        return ((void*)0);
    }


    while (VAR_2 > 0 && FUNC_3(FUNC_2(VAR_1[VAR_2 - 1])))
        VAR_1[--VAR_2] = '\0';

    return VAR_1;
}
