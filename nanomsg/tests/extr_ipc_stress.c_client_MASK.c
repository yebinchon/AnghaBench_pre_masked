
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int,char*,size_t,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void *VAR_4)
{
    intptr_t VAR_5 = (intptr_t)VAR_4;
    int VAR_6;
    char VAR_7[3];
    size_t VAR_8;
    int VAR_9;

    VAR_7[0] = 'A' + VAR_5%26;
    VAR_7[1] = 'a';
    VAR_7[2] = '\0';

    VAR_8 = FUNC_6 (VAR_7) + 1;

    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        int VAR_10 = FUNC_5 (VAR_0, VAR_1);
        VAR_7[1] = 'a' + VAR_9%26;
        FUNC_0 (VAR_10 >= 0);
        FUNC_0 (FUNC_2 (VAR_10, VAR_2) >= 0);

        FUNC_4 (50);
        VAR_6 = FUNC_3 (VAR_10, VAR_7, VAR_8, 0);

        FUNC_4 (100);
        FUNC_0 ((size_t)VAR_6 == VAR_8);
        FUNC_1 (VAR_10);
    }
}
