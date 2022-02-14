
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char**) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned char*,int) ;

int FUNC_7(unsigned char **VAR_1, int VAR_2, BIO *VAR_3)
{
    BIO *VAR_4;
    int VAR_5, VAR_6;
    unsigned char VAR_7[1024];

    VAR_4 = FUNC_2(FUNC_4());
    if (VAR_4 == ((void*)0))
        return -1;
    for (;;) {
        if ((VAR_2 != -1) && VAR_2 < 1024)
            VAR_5 = VAR_2;
        else
            VAR_5 = 1024;
        VAR_5 = FUNC_3(VAR_3, VAR_7, VAR_5);
        if (VAR_5 < 0) {
            FUNC_0(VAR_4);
            return -1;
        }
        if (VAR_5 == 0)
            break;
        if (FUNC_6(VAR_4, VAR_7, VAR_5) != VAR_5) {
            FUNC_0(VAR_4);
            return -1;
        }
        VAR_2 -= VAR_5;

        if (VAR_2 == 0)
            break;
    }
    VAR_6 = FUNC_1(VAR_4, (char **)VAR_1);
    FUNC_5(VAR_4, VAR_0);
    FUNC_0(VAR_4);
    return VAR_6;
}
