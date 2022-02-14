
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned char *FUNC_0(unsigned char *VAR_0)
{
    while (*VAR_0)
    {
        if (*VAR_0 < 0x80)

            VAR_0++;
        else if ((VAR_0[0] & 0xe0) == 0xc0)
        {

            if ((VAR_0[1] & 0xc0) != 0x80 ||
                (VAR_0[0] & 0xfe) == 0xc0)
                return VAR_0;
            else
                VAR_0 += 2;
        }
        else if ((VAR_0[0] & 0xf0) == 0xe0)
        {

            if ((VAR_0[1] & 0xc0) != 0x80 ||
                (VAR_0[2] & 0xc0) != 0x80 ||
                (VAR_0[0] == 0xe0 && (VAR_0[1] & 0xe0) == 0x80) ||
                (VAR_0[0] == 0xed && (VAR_0[1] & 0xe0) == 0xa0) ||
                (VAR_0[0] == 0xef && VAR_0[1] == 0xbf &&
                 (VAR_0[2] & 0xfe) == 0xbe))
                return VAR_0;
            else
                VAR_0 += 3;
        }
        else if ((VAR_0[0] & 0xf8) == 0xf0)
        {

            if ((VAR_0[1] & 0xc0) != 0x80 ||
                (VAR_0[2] & 0xc0) != 0x80 ||
                (VAR_0[3] & 0xc0) != 0x80 ||
                (VAR_0[0] == 0xf0 && (VAR_0[1] & 0xf0) == 0x80) ||
                (VAR_0[0] == 0xf4 && VAR_0[1] > 0x8f) || VAR_0[0] > 0xf4)
                return VAR_0;
            else
                VAR_0 += 4;
        }
        else
            return VAR_0;
    }

    return ((void*)0);
}
