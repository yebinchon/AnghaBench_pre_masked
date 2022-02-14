
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
typedef int uint ;
typedef int uchar ;
struct TYPE_3__ {int codepage; int mode; int flags; } ;
typedef TYPE_1__ csconv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *,int*) ;

__attribute__((used)) static int
FUNC_2(csconv_t *VAR_5, const uchar *VAR_6, int VAR_7, ushort *VAR_8, int *VAR_9)
{
    int VAR_10 = VAR_5->codepage;
    uint VAR_11;


    if (VAR_5->mode & VAR_4)
        VAR_10 ^= 1;

    if (VAR_7 < 4)
        return FUNC_0(VAR_1);
    if (VAR_10 == 12000)
        VAR_11 = (VAR_6[3] << 24) | (VAR_6[2] << 16) | (VAR_6[1] << 8) | VAR_6[0];
    else if (VAR_10 == 12001)
        VAR_11 = (VAR_6[0] << 24) | (VAR_6[1] << 16) | (VAR_6[2] << 8) | VAR_6[3];

    if ((VAR_5->flags & VAR_2) && !(VAR_5->mode & VAR_3))
    {
        VAR_5->mode |= VAR_3;
        if (VAR_11 == 0xFFFE0000)
        {
            VAR_5->mode |= VAR_4;
            *VAR_9 = 0;
            return 4;
        }
        else if (VAR_11 == 0x0000FEFF)
        {
            *VAR_9 = 0;
            return 4;
        }
    }

    if ((0xD800 <= VAR_11 && VAR_11 <= 0xDFFF) || 0x10FFFF < VAR_11)
        return FUNC_0(VAR_0);
    FUNC_1(VAR_11, VAR_8, VAR_9);
    return 4;
}
