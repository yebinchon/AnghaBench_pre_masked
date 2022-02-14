
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int ,size_t) ;
 char* FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static char *FUNC_4(const unsigned char *VAR_1, size_t VAR_2)
{
    static const char *VAR_3 = "0123456789abcdef";
    char *VAR_4;
    char *VAR_5;
    size_t VAR_6 = 2 * VAR_2 + 1;
    int VAR_7 = (int) VAR_6;

    if (VAR_6 < VAR_2 || VAR_7 < 0 || VAR_6 != (size_t)VAR_7) {
        FUNC_0(VAR_0, "%s: %zu-byte buffer too large to hexencode\n",
                   FUNC_3(), VAR_2);
        FUNC_2(1);
    }
    VAR_5 = VAR_4 = FUNC_1(VAR_7, "TLSA hex data buffer");

    while (VAR_2-- > 0) {
        *VAR_5++ = VAR_3[(*VAR_1 >> 4) & 0x0f];
        *VAR_5++ = VAR_3[*VAR_1++ & 0x0f];
    }
    *VAR_5 = '\0';
    return VAR_4;
}
