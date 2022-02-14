
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CMUnitTest {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,struct CMUnitTest const*,int *,int *) ;
 struct CMUnitTest const FUNC_1 (int ) ;

int
FUNC_2(void)
{
    const struct CMUnitTest VAR_8[] = {
        FUNC_1(VAR_4),
        FUNC_1(VAR_5),
        FUNC_1(VAR_3),
        FUNC_1(VAR_2),
        FUNC_1(VAR_1),
        FUNC_1(VAR_6),
        FUNC_1(VAR_7),
        FUNC_1(VAR_0),
    };

    return FUNC_0("argv", VAR_8, ((void*)0), ((void*)0));
}
