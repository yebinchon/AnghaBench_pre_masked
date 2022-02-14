
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DOUBLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline DOUBLE FUNC_3(DOUBLE VAR_2)
{
    DOUBLE VAR_3;

    if(FUNC_2(VAR_2))
        return VAR_1;

    VAR_3 = FUNC_1(FUNC_0(VAR_2/VAR_0), 60);
    if(VAR_3<0) VAR_3 += 60;

    return VAR_3;
}
