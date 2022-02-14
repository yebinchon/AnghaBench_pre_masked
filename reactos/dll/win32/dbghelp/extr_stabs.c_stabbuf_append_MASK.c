
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,char*,unsigned int) ;
 int FUNC_2 (char*,char const*) ;
 unsigned int FUNC_3 (char const*) ;

__attribute__((used)) static inline void FUNC_4(char **VAR_0, unsigned *VAR_1, const char *VAR_2)
{
    unsigned VAR_3, VAR_4;

    VAR_3 = FUNC_3(VAR_2);
    VAR_4 = FUNC_3(*VAR_0);

    if(VAR_3+VAR_4 >= *VAR_1) {
        *VAR_1 += VAR_4 + VAR_3;
        *VAR_0 = FUNC_1(FUNC_0(), 0, *VAR_0, *VAR_1);
    }

    FUNC_2(*VAR_0+VAR_4, VAR_2);
}
