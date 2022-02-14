
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int stepIndexL; } ;
struct TYPE_8__ {int wSamplesPerBlock; } ;
struct TYPE_7__ {scalar_t__ dwDriver; TYPE_1__* pwfxDst; } ;
struct TYPE_6__ {int nBlockAlign; } ;
typedef TYPE_2__* PACMDRVSTREAMINSTANCE ;
typedef TYPE_3__* LPIMAADPCMWAVEFORMAT ;
typedef int* LPDWORD ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_4__ AcmAdpcmData ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int,int*,int*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(PACMDRVSTREAMINSTANCE VAR_0,
                         const unsigned char* VAR_1, LPDWORD VAR_2,
                         unsigned char* VAR_3, LPDWORD VAR_4)
{
    int VAR_5;
    int VAR_6;
    BYTE VAR_7, VAR_8;
    int VAR_9 = ((LPIMAADPCMWAVEFORMAT)VAR_0->pwfxDst)->wSamplesPerBlock;
    int VAR_10;




    DWORD VAR_11 = FUNC_3(*VAR_2 / (VAR_9 * 2),
                             *VAR_4 / VAR_0->pwfxDst->nBlockAlign);

    *VAR_2 = VAR_11 * (VAR_9 * 2);
    *VAR_4 = VAR_11 * VAR_0->pwfxDst->nBlockAlign;

    VAR_5 = ((AcmAdpcmData*)VAR_0->dwDriver)->stepIndexL;
    VAR_9--;

    for (; VAR_11 > 0; VAR_11--)
    {
        unsigned char* VAR_12 = VAR_3;
     VAR_6 = FUNC_0(VAR_1); VAR_1 += 2;
 FUNC_1(VAR_3, VAR_6); VAR_3 += 2;
 *VAR_3 = (unsigned char)(unsigned)VAR_5;
 VAR_3 += 2;

 for (VAR_10 = VAR_9; VAR_10 > 0; VAR_10 -= 2)
        {
            VAR_7 = FUNC_2(FUNC_0(VAR_1), &VAR_5, &VAR_6);
            VAR_1 += 2;
            VAR_8 = FUNC_2(FUNC_0(VAR_1), &VAR_5, &VAR_6);
            VAR_1 += 2;
            *VAR_3++ = (VAR_8 << 4) | VAR_7;
 }
 VAR_3 = VAR_12 + VAR_0->pwfxDst->nBlockAlign;
    }
    ((AcmAdpcmData*)VAR_0->dwDriver)->stepIndexL = VAR_5;
}
