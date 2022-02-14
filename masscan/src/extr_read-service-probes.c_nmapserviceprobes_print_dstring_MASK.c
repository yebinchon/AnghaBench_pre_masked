
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char const*,size_t,int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_0, const char *VAR_1, size_t VAR_2, int VAR_3)
{
    size_t VAR_4;



    if (FUNC_0(VAR_1, VAR_2, VAR_3)) {
        static const char *VAR_5 = "|/\"'#*+-!@$%^&()_=";

        for (VAR_4=0; VAR_5[VAR_4]; VAR_4++) {
            VAR_3 = VAR_5[VAR_4];
            if (!FUNC_0(VAR_1, VAR_2, VAR_3))
                break;
        }
    }


    FUNC_1(VAR_0, "%c", VAR_3);


    for (VAR_4=0; VAR_4<VAR_2; VAR_4++) {
        char VAR_6 = VAR_1[VAR_4];
        FUNC_1(VAR_0, "%c", VAR_6);
    }


    FUNC_1(VAR_0, "%c", VAR_3);

}
