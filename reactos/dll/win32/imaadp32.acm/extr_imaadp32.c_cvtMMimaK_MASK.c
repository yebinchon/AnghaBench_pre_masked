
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int wSamplesPerBlock; } ;
struct TYPE_8__ {TYPE_2__* pwfxSrc; TYPE_1__* pwfxDst; } ;
struct TYPE_7__ {int nBlockAlign; } ;
struct TYPE_6__ {int wBitsPerSample; } ;
typedef TYPE_3__* PACMDRVSTREAMINSTANCE ;
typedef TYPE_4__* LPIMAADPCMWAVEFORMAT ;
typedef int* LPDWORD ;
typedef int DWORD ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (unsigned char const,int*,int*) ;

__attribute__((used)) static void FUNC_5(PACMDRVSTREAMINSTANCE VAR_0,
                    const unsigned char* VAR_1, LPDWORD VAR_2,
                    unsigned char* VAR_3, LPDWORD VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7 = ((LPIMAADPCMWAVEFORMAT)VAR_0->pwfxSrc)->wSamplesPerBlock;
    int VAR_8;
    int VAR_9 = VAR_0->pwfxDst->wBitsPerSample / 8;




    DWORD VAR_10 = FUNC_3(*VAR_2 / VAR_0->pwfxSrc->nBlockAlign, *VAR_4 / (VAR_7 * VAR_9));

    *VAR_2 = VAR_10 * VAR_0->pwfxSrc->nBlockAlign;
    *VAR_4 = VAR_10 * VAR_7 * VAR_9;

    VAR_7--;
    for (; VAR_10 > 0; VAR_10--)
    {
        const unsigned char* VAR_11 = VAR_1;


        VAR_5 = FUNC_0(VAR_1);
        VAR_6 = (unsigned)*(VAR_1 + 2);
        FUNC_2(&VAR_6);
        VAR_1 += 4;
        FUNC_1(VAR_3, VAR_5, VAR_9); VAR_3 += VAR_9;

        for (VAR_8 = VAR_7; VAR_8 > 0; VAR_8 -= 2)
        {
            FUNC_4(*VAR_1, &VAR_6, &VAR_5);
            FUNC_1(VAR_3, VAR_5, VAR_9); VAR_3 += VAR_9;
            FUNC_4(*VAR_1++ >> 4, &VAR_6, &VAR_5);
            FUNC_1(VAR_3, VAR_5, VAR_9); VAR_3 += VAR_9;
        }

        VAR_1 = VAR_11 + VAR_0->pwfxSrc->nBlockAlign;
    }
}
