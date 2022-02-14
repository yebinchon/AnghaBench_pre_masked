
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static size_t FUNC_1(size_t VAR_0, unsigned char **VAR_1)
{
    size_t VAR_2;

    FUNC_0(VAR_0 < 0x8000);
    if (VAR_0 > 255)
        VAR_2 = 3;
    else if (VAR_0 > 127)
        VAR_2 = 2;
    else
        VAR_2 = 1;

    if (VAR_1 != ((void*)0)) {
        if (VAR_2 == 1) {
            *(*VAR_1)++ = (unsigned char)VAR_0;
        } else {
            *(*VAR_1)++ = (unsigned char)(VAR_2 - 1);
            if (VAR_2 == 2) {
                *(*VAR_1)++ = (unsigned char)(0x80 | VAR_0);
            } else {
                *(*VAR_1)++ = (unsigned char)(0x80 | (VAR_0 >> 8));
                *(*VAR_1)++ = (unsigned char)(VAR_0);
            }
        }
    }
    return VAR_2;
}
