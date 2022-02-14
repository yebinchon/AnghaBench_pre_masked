
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 int FUNC_1 (char*,int,int,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,void*,int) ;
 int FUNC_4 (char*,int ,unsigned int) ;
 int FUNC_5 (char*) ;

int FUNC_6(char *VAR_3, int VAR_4, int VAR_5, void *VAR_6)
{
    int VAR_7, VAR_8;
    const char *VAR_9;


    if (VAR_6) {
        VAR_7 = FUNC_5(VAR_6);
        VAR_7 = (VAR_7 > VAR_4) ? VAR_4 : VAR_7;
        FUNC_3(VAR_3, VAR_6, VAR_7);
        return VAR_7;
    }

    VAR_9 = FUNC_0();
    if (VAR_9 == ((void*)0))
        VAR_9 = "Enter PEM pass phrase:";
    VAR_8 = VAR_5 ? VAR_0 : 0;

    VAR_7 = FUNC_1(VAR_3, VAR_8, VAR_4, VAR_9, VAR_5);
    if (VAR_7 != 0) {
        FUNC_2(VAR_1, VAR_2);
        FUNC_4(VAR_3, 0, (unsigned int)VAR_4);
        return -1;
    }
    return FUNC_5(VAR_3);
}
