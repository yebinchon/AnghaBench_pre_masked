
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;

const char *
FUNC_1(const char *VAR_0, const char *VAR_1)
{
    switch (FUNC_0(VAR_0, VAR_1))
    {
        case 128:
            return "tun";

        case 129:
            return "tap";

        case 130:
            return "null";

        default:
            return "[unknown-dev-type]";
    }
}
