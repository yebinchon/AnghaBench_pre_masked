
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
typedef int uchar ;
struct TYPE_3__ {int flags; int mode; int codepage; } ;
typedef TYPE_1__ csconv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(csconv_t *VAR_3, ushort *VAR_4, int VAR_5, uchar *VAR_6, int VAR_7)
{
    if ((VAR_3->flags & VAR_1) && !(VAR_3->mode & VAR_2))
    {
        int VAR_8;

        VAR_3->mode |= VAR_2;
        if (VAR_7 < 2)
            return FUNC_1(VAR_0);
        if (VAR_3->codepage == 1200)
            FUNC_0(VAR_6, "\xFF\xFE", 2);
        else if (VAR_3->codepage == 1201)
            FUNC_0(VAR_6, "\xFE\xFF", 2);

        VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6 + 2, VAR_7 - 2);
        if (VAR_8 == -1)
            return -1;
        return VAR_8 + 2;
    }

    if (VAR_7 < 2)
        return FUNC_1(VAR_0);
    if (VAR_3->codepage == 1200)
    {
        VAR_6[0] = (VAR_4[0] & 0x00FF);
        VAR_6[1] = (VAR_4[0] & 0xFF00) >> 8;
    }
    else if (VAR_3->codepage == 1201)
    {
        VAR_6[0] = (VAR_4[0] & 0xFF00) >> 8;
        VAR_6[1] = (VAR_4[0] & 0x00FF);
    }
    if (0xD800 <= VAR_4[0] && VAR_4[0] <= 0xDBFF)
    {
        if (VAR_7 < 4)
            return FUNC_1(VAR_0);
        if (VAR_3->codepage == 1200)
        {
            VAR_6[2] = (VAR_4[1] & 0x00FF);
            VAR_6[3] = (VAR_4[1] & 0xFF00) >> 8;
        }
        else if (VAR_3->codepage == 1201)
        {
            VAR_6[2] = (VAR_4[1] & 0xFF00) >> 8;
            VAR_6[3] = (VAR_4[1] & 0x00FF);
        }
        return 4;
    }
    return 2;
}
