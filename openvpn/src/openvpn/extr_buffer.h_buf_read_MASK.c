
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buffer {int dummy; } ;


 int * FUNC_0 (struct buffer*,int) ;
 int FUNC_1 (void*,int *,int) ;

__attribute__((used)) static inline bool
FUNC_2(struct buffer *VAR_0, void *VAR_1, int VAR_2)
{
    uint8_t *VAR_3 = FUNC_0(VAR_0, VAR_2);
    if (!VAR_3)
    {
        return 0;
    }
    FUNC_1(VAR_1, VAR_3, VAR_2);
    return 1;
}
