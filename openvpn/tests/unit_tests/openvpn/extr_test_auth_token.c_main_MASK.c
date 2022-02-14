
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CMUnitTest {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,struct CMUnitTest const*,int *,int *) ;
 struct CMUnitTest const FUNC_2 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;

int
FUNC_3(void)
{
    const struct CMUnitTest VAR_10[] = {
        FUNC_2(VAR_0, VAR_8, VAR_9),
        FUNC_2(VAR_1, VAR_8, VAR_9),
        FUNC_2(VAR_5, VAR_8, VAR_9),
        FUNC_2(VAR_2, VAR_8, VAR_9),
        FUNC_2(VAR_3, VAR_8, VAR_9),
        FUNC_2(VAR_6, VAR_8, VAR_9),
        FUNC_2(VAR_4, VAR_8, VAR_9),
        FUNC_2(VAR_7, VAR_8, VAR_9),
    };





    int VAR_11 = FUNC_1("auth-token tests", VAR_10, ((void*)0), ((void*)0));

    return VAR_11;
}
