
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline uint32_t
FUNC_2(struct buffer *VAR_0, bool *VAR_1)
{
    uint32_t VAR_2;
    if (!FUNC_0(VAR_0, &VAR_2, sizeof(uint32_t)))
    {
        if (VAR_1)
        {
            *VAR_1 = 0;
        }
        return 0;
    }
    else
    {
        if (VAR_1)
        {
            *VAR_1 = 1;
        }
        return FUNC_1(VAR_2);
    }
}
