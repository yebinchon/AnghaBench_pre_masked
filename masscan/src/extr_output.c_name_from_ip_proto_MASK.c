
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *
FUNC_0(unsigned VAR_0)
{
    switch (VAR_0) {
        case 0: return "arp";
        case 1: return "icmp";
        case 6: return "tcp";
        case 17: return "udp";
        case 132: return "sctp";
        default: return "err";
    }
}
