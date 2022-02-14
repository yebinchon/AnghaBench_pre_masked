
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO_ADDRINFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *,char const*,int ,scalar_t__,int ,int **) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,char*,char const*) ;
 int VAR_5 ;
 unsigned short FUNC_8 (int ) ;

int FUNC_9(const char *VAR_6, unsigned short *VAR_7)
{
    BIO_ADDRINFO *VAR_8 = ((void*)0);
    int VAR_9 = 0;

    if (VAR_6 == ((void*)0)) {
        FUNC_6(VAR_1, VAR_4);
        return 0;
    }

    if (FUNC_5() != 1)
        return 0;

    if (FUNC_4(((void*)0), VAR_6, VAR_2, VAR_0, VAR_5, &VAR_8)) {
        if (FUNC_1(VAR_8) != VAR_0) {
            FUNC_6(VAR_1,
                   VAR_3);
        } else {
            *VAR_7 = FUNC_8(FUNC_3(FUNC_0(VAR_8)));
            VAR_9 = 1;
        }
        FUNC_2(VAR_8);
    } else {
        FUNC_7(2, "host=", VAR_6);
    }

    return VAR_9;
}
