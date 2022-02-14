
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
typedef int uint ;
typedef int uchar ;
struct TYPE_3__ {int flags; int mode; int codepage; } ;
typedef TYPE_1__ csconv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(csconv_t *VAR_3, ushort *VAR_4, int VAR_5, uchar *VAR_6, int VAR_7)
{
    uint VAR_8;

    if ((VAR_3->flags & VAR_1) && !(VAR_3->mode & VAR_2))
    {
        int VAR_9;

        VAR_3->mode |= VAR_2;
        if (VAR_7 < 4)
            return FUNC_1(VAR_0);
        if (VAR_3->codepage == 12000)
            FUNC_0(VAR_6, "\xFF\xFE\x00\x00", 4);
        else if (VAR_3->codepage == 12001)
            FUNC_0(VAR_6, "\x00\x00\xFE\xFF", 4);

        VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6 + 4, VAR_7 - 4);
        if (VAR_9 == -1)
            return -1;
        return VAR_9 + 4;
    }

    if (VAR_7 < 4)
        return FUNC_1(VAR_0);
    VAR_8 = FUNC_2(VAR_4);
    if (VAR_3->codepage == 12000)
    {
        VAR_6[0] = VAR_8 & 0x000000FF;
        VAR_6[1] = (VAR_8 & 0x0000FF00) >> 8;
        VAR_6[2] = (VAR_8 & 0x00FF0000) >> 16;
        VAR_6[3] = (VAR_8 & 0xFF000000) >> 24;
    }
    else if (VAR_3->codepage == 12001)
    {
        VAR_6[0] = (VAR_8 & 0xFF000000) >> 24;
        VAR_6[1] = (VAR_8 & 0x00FF0000) >> 16;
        VAR_6[2] = (VAR_8 & 0x0000FF00) >> 8;
        VAR_6[3] = VAR_8 & 0x000000FF;
    }
    return 4;
}
