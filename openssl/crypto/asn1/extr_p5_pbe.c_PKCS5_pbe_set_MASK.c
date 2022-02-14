
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_ALGOR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int,int,unsigned char const*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;

X509_ALGOR *FUNC_4(int VAR_2, int VAR_3,
                          const unsigned char *VAR_4, int VAR_5)
{
    X509_ALGOR *VAR_6;
    VAR_6 = FUNC_3();
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }

    if (FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5))
        return VAR_6;

    FUNC_2(VAR_6);
    return ((void*)0);
}
