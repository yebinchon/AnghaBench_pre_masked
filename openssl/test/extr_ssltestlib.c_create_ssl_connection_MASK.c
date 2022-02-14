
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int,size_t*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (size_t,int ) ;
 int FUNC_4 (int *,int *,int,int) ;

int FUNC_5(SSL *VAR_1, SSL *VAR_2, int VAR_3)
{
    int VAR_4;
    unsigned char VAR_5;
    size_t VAR_6;

    if (!FUNC_4(VAR_1, VAR_2, VAR_3, 1))
        return 0;






    for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
        if (FUNC_1(VAR_2, &VAR_5, sizeof(VAR_5), &VAR_6) > 0) {
            if (!FUNC_3(VAR_6, 0))
                return 0;
        } else if (!FUNC_2(FUNC_0(VAR_2, 0),
                                VAR_0)) {
            return 0;
        }
    }

    return 1;
}
