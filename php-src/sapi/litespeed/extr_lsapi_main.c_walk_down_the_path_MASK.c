
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(char* VAR_1,
                               char* VAR_2,
                               void (*VAR_3)(char* VAR_4,
                                          char* VAR_5,
                                          void* VAR_6),
                               void* VAR_7)
{
    char *VAR_8 = VAR_2 + FUNC_0(VAR_1);
    VAR_3(VAR_2, VAR_8, VAR_7);

    while ((VAR_8 = FUNC_1(VAR_8))[0]) {
        VAR_8 = FUNC_2(VAR_8, VAR_0);
        if (!VAR_8) {


            VAR_3(VAR_2, VAR_2 + FUNC_3(VAR_2), VAR_7);
            return;
        }
        VAR_3(VAR_2, VAR_8, VAR_7);
    }
}
