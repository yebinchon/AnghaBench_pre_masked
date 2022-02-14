
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct gc_arena {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (void const*,int,char**) ;
 scalar_t__ FUNC_3 (char*,struct gc_arena*) ;

uint8_t *
FUNC_4(const uint8_t *VAR_0, int VAR_1, struct gc_arena *VAR_2)
{
    uint8_t *VAR_3 = ((void*)0);
    char *VAR_4 = ((void*)0);
    FUNC_0(FUNC_2((const void *)VAR_0, VAR_1, &VAR_4) >= 0);
    VAR_3 = (uint8_t *) FUNC_3(VAR_4, VAR_2);
    FUNC_1(VAR_4);
    return VAR_3;
}
