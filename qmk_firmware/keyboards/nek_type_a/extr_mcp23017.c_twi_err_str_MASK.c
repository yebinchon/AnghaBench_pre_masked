
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
__attribute__((used)) static const char *FUNC_0(uint8_t VAR_0) {
    switch (VAR_0) {
        case 131:
            return "OK";
        case 132:
            return "BUSFAULT";
        case 133:
            return "BUSTIMEOUT";
        case 128:
            return "SLAVETIMEOUT";
        case 129:
            return "SLAVENOTREADY";
        case 130:
            return "SLAVENAK";
        default:
            return "UNKNOWN";
    }
}
