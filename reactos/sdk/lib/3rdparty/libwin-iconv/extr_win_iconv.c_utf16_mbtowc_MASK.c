
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
typedef int uchar ;
struct TYPE_3__ {int codepage; int mode; int flags; } ;
typedef TYPE_1__ csconv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(csconv_t *VAR_5, const uchar *VAR_6, int VAR_7, ushort *VAR_8, int *VAR_9)
{
    int VAR_10 = VAR_5->codepage;


    if (VAR_5->mode & VAR_4)
        VAR_10 ^= 1;

    if (VAR_7 < 2)
        return FUNC_0(VAR_1);
    if (VAR_10 == 1200)
        VAR_8[0] = (VAR_6[1] << 8) | VAR_6[0];
    else if (VAR_10 == 1201)
        VAR_8[0] = (VAR_6[0] << 8) | VAR_6[1];

    if ((VAR_5->flags & VAR_2) && !(VAR_5->mode & VAR_3))
    {
        VAR_5->mode |= VAR_3;
        if (VAR_8[0] == 0xFFFE)
        {
            VAR_5->mode |= VAR_4;
            *VAR_9 = 0;
            return 2;
        }
        else if (VAR_8[0] == 0xFEFF)
        {
            *VAR_9 = 0;
            return 2;
        }
    }

    if (0xDC00 <= VAR_8[0] && VAR_8[0] <= 0xDFFF)
        return FUNC_0(VAR_0);
    if (0xD800 <= VAR_8[0] && VAR_8[0] <= 0xDBFF)
    {
        if (VAR_7 < 4)
            return FUNC_0(VAR_1);
        if (VAR_10 == 1200)
            VAR_8[1] = (VAR_6[3] << 8) | VAR_6[2];
        else if (VAR_10 == 1201)
            VAR_8[1] = (VAR_6[2] << 8) | VAR_6[3];
        if (!(0xDC00 <= VAR_8[1] && VAR_8[1] <= 0xDFFF))
            return FUNC_0(VAR_0);
        *VAR_9 = 2;
        return 4;
    }
    *VAR_9 = 1;
    return 2;
}
