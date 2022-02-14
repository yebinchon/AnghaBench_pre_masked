
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned
FUNC_0(const unsigned char *VAR_0, size_t VAR_1, unsigned char *VAR_2, size_t VAR_3)
{
    unsigned VAR_4;
    size_t VAR_5;

    VAR_4 = 'f'<<24 | 't'<<16 | 'p'<<8 | '2'<<0;

    for (VAR_5=0; VAR_5<VAR_3 && VAR_5<VAR_1; VAR_5+=4) {
        VAR_2[VAR_5+0] = VAR_0[VAR_5+0] ^ (unsigned char)(VAR_4>> 0);
        VAR_2[VAR_5+1] = VAR_0[VAR_5+1] ^ (unsigned char)(VAR_4>> 8);
        VAR_2[VAR_5+2] = VAR_0[VAR_5+2] ^ (unsigned char)(VAR_4>>16);
        VAR_2[VAR_5+3] = VAR_0[VAR_5+3] ^ (unsigned char)(VAR_4>>24);

        VAR_4 = VAR_4<<1 | VAR_4>>31;
    }

    return (unsigned)VAR_1;
}
