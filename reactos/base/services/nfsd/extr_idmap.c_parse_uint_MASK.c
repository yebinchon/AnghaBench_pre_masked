
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef scalar_t__ UINT ;
typedef char const* PCHAR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const**,int) ;

__attribute__((used)) static BOOL FUNC_2(
    const char *VAR_5,
    UINT *VAR_6)
{
    PCHAR VAR_7;
    const UINT VAR_8 = FUNC_1(VAR_5, &VAR_7, 10);


    if ((VAR_7 - VAR_5) < (ptrdiff_t)FUNC_0(VAR_5))
        return VAR_1;


    if (VAR_8 == VAR_3 && VAR_4 == VAR_0)
        return VAR_1;

    *VAR_6 = VAR_8;
    return VAR_2;
}
