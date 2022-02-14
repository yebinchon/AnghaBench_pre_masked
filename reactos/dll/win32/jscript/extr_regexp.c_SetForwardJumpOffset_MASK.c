
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int jsbytecode ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static BOOL
FUNC_3(jsbytecode *VAR_3, jsbytecode *VAR_4)
{
    ptrdiff_t VAR_5 = VAR_4 - VAR_3;


    FUNC_2(VAR_5 >= 2);
    if ((size_t)VAR_5 > VAR_1)
        return VAR_0;

    VAR_3[0] = FUNC_0(VAR_5);
    VAR_3[1] = FUNC_1(VAR_5);
    return VAR_2;
}
