
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DOUBLE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline DOUBLE FUNC_3(DOUBLE VAR_1)
{
    DOUBLE VAR_2;

    if(FUNC_2(VAR_1))
        return VAR_0;

    VAR_2 = FUNC_1(FUNC_0(VAR_1/1000), 60);
    if(VAR_2<0) VAR_2 += 60;

    return VAR_2;
}
