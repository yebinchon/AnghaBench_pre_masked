
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static __inline int FUNC_2(uint32_t VAR_0, uint32_t VAR_1)
{
    if (VAR_0 == VAR_1)
        return 0;

    FUNC_0("Op table mismatch. Got %s (%d), expected %s (%d).\n",
        FUNC_1(VAR_0), VAR_0,
        FUNC_1(VAR_1), VAR_1);
    return 1;
}
