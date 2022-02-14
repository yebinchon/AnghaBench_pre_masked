
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CMUnitTest {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct CMUnitTest const*,int *,int *) ;
 struct CMUnitTest const FUNC_1 (int ) ;
 int VAR_1 ;

int FUNC_2(void)
{
    const struct CMUnitTest VAR_2[] = { FUNC_1(VAR_0) };
    VAR_1 = 0xffffffffffff;

    return FUNC_0("web_api", VAR_2, ((void*)0), ((void*)0));
}
