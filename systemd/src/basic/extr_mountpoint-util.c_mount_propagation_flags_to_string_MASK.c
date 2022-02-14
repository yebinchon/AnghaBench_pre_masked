
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(unsigned long VAR_0) {

        switch (VAR_0 & (129|128|130)) {
        case 0:
                return "";
        case 129:
                return "shared";
        case 128:
                return "slave";
        case 130:
                return "private";
        }

        return ((void*)0);
}
