
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,unsigned long,char*,int ,int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (size_t) ;
 char** VAR_3 ;
 char* FUNC_9 (char*,size_t) ;
 int VAR_4 ;
 int FUNC_10 (char*,char*,unsigned long) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(zval *VAR_5)
{
    char VAR_6[128];
    char **VAR_7, *VAR_8, *VAR_9 = VAR_6;
    size_t VAR_10 = sizeof(VAR_6);
    unsigned long VAR_11;

    if (FUNC_5(FUNC_0(VAR_4)[VAR_1]) == VAR_0 &&
        FUNC_4(VAR_5) != FUNC_2(FUNC_0(VAR_4)[VAR_1]) &&
        FUNC_15(FUNC_3(FUNC_0(VAR_4)[VAR_1])) > 0
    ) {
        FUNC_16(VAR_5);
        FUNC_1(VAR_5, &FUNC_0(VAR_4)[VAR_1]);
        return;
    } else if (FUNC_5(FUNC_0(VAR_4)[VAR_2]) == VAR_0 &&
        FUNC_4(VAR_5) != FUNC_2(FUNC_0(VAR_4)[VAR_2]) &&
        FUNC_15(FUNC_3(FUNC_0(VAR_4)[VAR_2])) > 0
    ) {
        FUNC_16(VAR_5);
        FUNC_1(VAR_5, &FUNC_0(VAR_4)[VAR_2]);
        return;
    }

    FUNC_13();
    for (VAR_7 = VAR_3; VAR_7 != ((void*)0) && *VAR_7 != ((void*)0); VAR_7++) {
        VAR_8 = FUNC_11(*VAR_7, '=');
        if (!VAR_8) {
            continue;
        }
        VAR_11 = VAR_8 - *VAR_7;
        if (VAR_11 >= VAR_10) {
            VAR_10 = VAR_11 + 64;
            VAR_9 = (VAR_9 == VAR_6 ? FUNC_8(VAR_10): FUNC_9(VAR_9, VAR_10));
        }
        FUNC_10(VAR_9, *VAR_7, VAR_11);
        VAR_9[VAR_11] = '\0';
        FUNC_6(VAR_9, VAR_11, VAR_8 + 1, FUNC_12( VAR_8 + 1 ), VAR_5);
    }
    FUNC_14();
    if (VAR_9 != VAR_6 && VAR_9 != ((void*)0)) {
        FUNC_7(VAR_9);
    }
}
