
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
struct utf8_table {int cmask; int cval; long lmask; long lval; } ;
typedef int __u8 ;


 struct utf8_table* VAR_0 ;

int
FUNC_0(wchar_t *VAR_1, const __u8 *VAR_2, int VAR_3)
{
    long VAR_4;
    int VAR_5, VAR_6, VAR_7;
    struct utf8_table *VAR_8;

    VAR_7 = 0;
    VAR_5 = *VAR_2;
    VAR_4 = VAR_5;
    for (VAR_8 = VAR_0; VAR_8->cmask; VAR_8++) {
        VAR_7++;
        if ((VAR_5 & VAR_8->cmask) == VAR_8->cval) {
            VAR_4 &= VAR_8->lmask;
            if (VAR_4 < VAR_8->lval)
                return -1;
            *VAR_1 = (wchar_t)VAR_4;
            return VAR_7;
        }
        if (VAR_3 <= VAR_7)
            return -1;
        VAR_2++;
        VAR_6 = (*VAR_2 ^ 0x80) & 0xFF;
        if (VAR_6 & 0xC0)
            return -1;
        VAR_4 = (VAR_4 << 6) | VAR_6;
    }
    return -1;
}
