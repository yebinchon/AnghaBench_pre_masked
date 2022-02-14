
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum PortStatus { ____Placeholder_PortStatus } PortStatus ;






const char *
FUNC_0(enum PortStatus VAR_0)
{
    switch (VAR_0) {
        case 128: return "open";
        case 129: return "closed";
        case 130: return "up";
        default: return "unknown";
    }
}
