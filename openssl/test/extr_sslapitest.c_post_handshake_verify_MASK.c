
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_8(SSL *VAR_2, SSL *VAR_3)
{
    FUNC_2(VAR_2, VAR_1, ((void*)0));
    if (!FUNC_6(FUNC_3(VAR_2)))
        return 0;


    if (!FUNC_4(FUNC_0(VAR_2), 1)
            || !FUNC_5(FUNC_1(VAR_3, ((void*)0), 0), 0)
            || !FUNC_5(FUNC_1(VAR_2, ((void*)0), 0), 0)
            || !FUNC_6(FUNC_7(VAR_2, VAR_3,
                                                VAR_0)))
        return 0;

    return 1;
}
