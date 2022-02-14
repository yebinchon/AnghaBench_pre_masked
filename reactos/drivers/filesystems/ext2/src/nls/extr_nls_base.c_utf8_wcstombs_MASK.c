
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ __u8 ;
typedef int __u16 ;


 int FUNC_0 (scalar_t__*,int const,int) ;

int
FUNC_1(__u8 *VAR_0, const wchar_t *VAR_1, int VAR_2)
{
    const __u16 *VAR_3;
    __u8 *VAR_4;
    int VAR_5;

    VAR_4 = VAR_0;
    VAR_3 = VAR_1;
    while (*VAR_3 && VAR_2 > 0) {
        if (*VAR_3 > 0x7f) {
            VAR_5 = FUNC_0(VAR_4, *VAR_3, VAR_2);
            if (VAR_5 == -1) {

                VAR_2--;
            } else {
                VAR_4 += VAR_5;
                VAR_2 -= VAR_5;
            }
        } else {
            *VAR_4++ = (__u8) *VAR_3;
        }
        VAR_3++;
    }
    return (int)(VAR_4 - VAR_0);
}
