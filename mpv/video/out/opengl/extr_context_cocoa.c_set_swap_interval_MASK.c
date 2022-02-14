
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CGLError ;
typedef int CGLContextObj ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
    CGLContextObj VAR_3 = FUNC_0();
    CGLError VAR_4 = FUNC_1(VAR_3, VAR_0, &VAR_2);
    return (VAR_4 == VAR_1) ? 0 : -1;
}
