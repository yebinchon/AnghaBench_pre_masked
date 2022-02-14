
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {int p_name; } ;


 struct protoent* FUNC_0 (int) ;
 char const** VAR_0 ;
 char* FUNC_1 (int ) ;

const char *
FUNC_2(int VAR_1)
{
    if (VAR_0[VAR_1])
        return VAR_0[VAR_1];
    {
        struct protoent *VAR_2;

        VAR_2 = FUNC_0(VAR_1);

        if (VAR_2 == 0)
            return "unknown";

        return VAR_0[VAR_1] = FUNC_1(VAR_2->p_name);
    }
}
