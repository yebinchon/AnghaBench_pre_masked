
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ta_header {char const* name; } ;


 struct ta_header* FUNC_0 (void*) ;

void *FUNC_1(void *VAR_0, const char *VAR_1)
{
    struct ta_header *VAR_2 = FUNC_0(VAR_0);
    if (VAR_2)
        VAR_2->name = VAR_1;
    return VAR_0;
}
