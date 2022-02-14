
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer*,int *,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static bool
FUNC_3(struct buffer *VAR_1,
                    uint8_t *VAR_2,
                    int VAR_3)
{
    if (!FUNC_2(VAR_2, VAR_3))
    {
        FUNC_1(VAR_0, "ERROR: Random number generator cannot obtain entropy for key generation [SSL]");
    }
    if (!FUNC_0(VAR_1, VAR_2, VAR_3))
    {
        return 0;
    }
    return 1;
}
