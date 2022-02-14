
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const*,int) ;

int
FUNC_1(void)
{
    const char VAR_0[] =
        "\xd1\x60\x00\x50\x00\x00\x00\x00\x58\xe4\x5d\x36\x01\x00\x00\x14"
        "\x9e\x8d\x52\x25\x00\x00\x80\x00\x00\x0a\x08\x00\x46\x1a\xdf\x3d";

    unsigned VAR_1;

    VAR_1 = FUNC_0(VAR_0, 32);

    if (VAR_1 != 0x58e45d36)
        return 1;

    return 0;
}
