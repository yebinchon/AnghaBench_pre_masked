
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t FUNC_0 (void*) ;
 char const** VAR_1 ;

const char *
FUNC_1 (
    void *VAR_2)
{

    if (!VAR_2)
    {
        return ("NULL OBJECT");
    }

    if (FUNC_0 (VAR_2) > VAR_0)
    {
        return ("Not a Descriptor");
    }

    return (VAR_1[FUNC_0 (VAR_2)]);
}
