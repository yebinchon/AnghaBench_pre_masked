
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static BOOL FUNC_1(float VAR_3, float VAR_4, unsigned int VAR_5)
{
    int VAR_6 = *(int *)&VAR_3;
    int VAR_7 = *(int *)&VAR_4;

    if (VAR_6 < 0)
        VAR_6 = VAR_1 - VAR_6;
    if (VAR_7 < 0)
        VAR_7 = VAR_1 - VAR_7;

    if (FUNC_0(VAR_6 - VAR_7) > VAR_5)
        return VAR_0;

    return VAR_2;
}
