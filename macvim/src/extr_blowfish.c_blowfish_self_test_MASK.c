
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

int
FUNC_4()
{
    if (FUNC_3() == VAR_0)
    {
 FUNC_0(FUNC_1("E818: sha256 test failed"));
 return VAR_0;
    }
    if (FUNC_2() == VAR_0)
    {
 FUNC_0(FUNC_1("E819: Blowfish test failed"));
 return VAR_0;
    }
    return VAR_1;
}
