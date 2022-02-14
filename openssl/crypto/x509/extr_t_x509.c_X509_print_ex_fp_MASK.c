
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int FILE ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,unsigned long,unsigned long) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(FILE *VAR_3, X509 *VAR_4, unsigned long VAR_5,
                     unsigned long VAR_6)
{
    BIO *VAR_7;
    int VAR_8;

    if ((VAR_7 = FUNC_1(FUNC_2())) == ((void*)0)) {
        FUNC_5(VAR_2, VAR_1);
        return 0;
    }
    FUNC_3(VAR_7, VAR_3, VAR_0);
    VAR_8 = FUNC_4(VAR_7, VAR_4, VAR_5, VAR_6);
    FUNC_0(VAR_7);
    return VAR_8;
}
