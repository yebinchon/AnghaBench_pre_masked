
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*,unsigned int,int *) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,size_t) ;

__attribute__((used)) static char *
FUNC_3(FILE *VAR_0, unsigned *VAR_1, char *VAR_2, size_t VAR_3)
{
    if (VAR_2[0] != '\0')
        return VAR_2;

    for (;;) {
        char *VAR_4;

        VAR_4 = FUNC_0(VAR_2, (unsigned)VAR_3, VAR_0);
        if (VAR_4 == ((void*)0)) {
            VAR_2[0] = '\0';
            return ((void*)0);
        }
        (*VAR_1)++;

        FUNC_2(VAR_2, VAR_3);
        if (FUNC_1(VAR_2))
            continue;
        if (VAR_2[0] == '\0')
            continue;

        return VAR_2;
    }
}
