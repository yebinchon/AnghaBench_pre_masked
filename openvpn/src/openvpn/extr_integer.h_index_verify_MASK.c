
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,char const*,int) ;

__attribute__((used)) static inline int
FUNC_1(int VAR_1, int VAR_2, const char *VAR_3, int VAR_4)
{
    if (VAR_1 < 0 || VAR_1 >= VAR_2)
    {
        FUNC_0(VAR_0, "Assertion Failed: Array index=%d out of bounds for array size=%d in %s:%d",
            VAR_1,
            VAR_2,
            VAR_3,
            VAR_4);
    }
    return VAR_1;
}
