
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,size_t,unsigned int*,char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;

__attribute__((used)) static void
FUNC_3(unsigned char *VAR_0, size_t VAR_1, unsigned *VAR_2, const unsigned char *VAR_3)
{
    unsigned VAR_4;
    unsigned char VAR_5;

    for (VAR_4=0; VAR_4<15; VAR_4++) {
        VAR_5 = VAR_3[VAR_4];

        if (VAR_5 == 0x20 || VAR_5 == '\0')
            FUNC_0(VAR_0, VAR_1, VAR_2, ' ');
        else if (FUNC_1(VAR_5) || FUNC_2(VAR_5))
            FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);
        else {
            FUNC_0(VAR_0, VAR_1, VAR_2, '<');
            FUNC_0(VAR_0, VAR_1, VAR_2, "0123456789ABCDEF"[VAR_5>>4]);
            FUNC_0(VAR_0, VAR_1, VAR_2, "0123456789ABCDEF"[VAR_5&0xF]);
            FUNC_0(VAR_0, VAR_1, VAR_2, '>');
        }
    }

    VAR_5 = VAR_3[VAR_4];
    FUNC_0(VAR_0, VAR_1, VAR_2, '<');
    FUNC_0(VAR_0, VAR_1, VAR_2, "0123456789ABCDEF"[VAR_5>>4]);
    FUNC_0(VAR_0, VAR_1, VAR_2, "0123456789ABCDEF"[VAR_5&0xF]);
    FUNC_0(VAR_0, VAR_1, VAR_2, '>');
    FUNC_0(VAR_0, VAR_1, VAR_2, '\n');
}
