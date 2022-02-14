
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO_SSL ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(BIO *VAR_2)
{
    BIO_SSL *VAR_3 = FUNC_4(sizeof(*VAR_3));

    if (VAR_3 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_1);
        return 0;
    }
    FUNC_2(VAR_2, 0);
    FUNC_1(VAR_2, VAR_3);

    FUNC_0(VAR_2, ~0);

    return 1;
}
