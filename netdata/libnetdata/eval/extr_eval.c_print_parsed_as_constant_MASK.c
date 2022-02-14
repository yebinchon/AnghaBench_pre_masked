
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int calculated_number ;
typedef int BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline void FUNC_6(BUFFER *VAR_1, calculated_number VAR_2) {
    if(FUNC_5(FUNC_2(VAR_2))) {
        FUNC_0(VAR_1, "nan");
        return;
    }

    if(FUNC_5(FUNC_1(VAR_2))) {
        FUNC_0(VAR_1, "inf");
        return;
    }

    char VAR_3[100+1], *VAR_4;
    FUNC_3(VAR_3, 100, VAR_0, VAR_2);

    VAR_4 = &VAR_3[FUNC_4(VAR_3) - 1];
    while(VAR_4 > VAR_3 && *VAR_4 == '0') {
        *VAR_4 ='\0';
        VAR_4--;
    }

    if(VAR_4 > VAR_3 && *VAR_4 == '.')
        *VAR_4 = '\0';

    FUNC_0(VAR_1, VAR_3);
}
