
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, int VAR_1)
{
    switch(VAR_1) {
    case 130:
    case 132:
    case 128:
        return VAR_0 & 0xffff;
    case 131:
    case 129:
        return VAR_0 & 0xff;
    }

    return VAR_0;
}
