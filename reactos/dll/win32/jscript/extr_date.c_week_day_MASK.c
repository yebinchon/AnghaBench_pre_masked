
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DOUBLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline DOUBLE FUNC_3(DOUBLE VAR_1)
{
    DOUBLE VAR_2;

    if(FUNC_2(VAR_1))
        return VAR_0;

    VAR_2 = FUNC_1(FUNC_0(VAR_1)+4, 7);
    if(VAR_2<0) VAR_2 += 7;

    return VAR_2;
}
