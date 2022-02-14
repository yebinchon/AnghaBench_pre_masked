
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(int VAR_0)
{
    switch (VAR_0 >> 8) {
    case 128:
        return "W";
    case 129:
        return "F";
    default:
        return "U";
    }
}
