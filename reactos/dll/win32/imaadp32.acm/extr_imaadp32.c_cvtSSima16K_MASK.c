
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int wSamplesPerBlock; } ;
struct TYPE_6__ {TYPE_1__* pwfxSrc; } ;
struct TYPE_5__ {int nBlockAlign; } ;
typedef TYPE_2__* PACMDRVSTREAMINSTANCE ;
typedef TYPE_3__* LPIMAADPCMWAVEFORMAT ;
typedef int* LPDWORD ;
typedef int DWORD ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (unsigned char const,int*,int*) ;

__attribute__((used)) static void FUNC_5(PACMDRVSTREAMINSTANCE VAR_0,
                         const unsigned char* VAR_1, LPDWORD VAR_2,
                         unsigned char* VAR_3, LPDWORD VAR_4)
{
    int VAR_5;
    int VAR_6, VAR_7;
    int VAR_8, VAR_9;
    int VAR_10 = ((LPIMAADPCMWAVEFORMAT)VAR_0->pwfxSrc)->wSamplesPerBlock;
    int VAR_11;




    DWORD VAR_12 = FUNC_3(*VAR_2 / VAR_0->pwfxSrc->nBlockAlign,
                             *VAR_4 / (VAR_10 * 2 * 2));

    *VAR_2 = VAR_12 * VAR_0->pwfxSrc->nBlockAlign;
    *VAR_4 = VAR_12 * (VAR_10 * 2 * 2);

    VAR_10--;
    for (; VAR_12 > 0; VAR_12--)
    {
        const unsigned char* VAR_13 = VAR_1;


 VAR_6 = FUNC_0(VAR_1);
 VAR_8 = (unsigned)*(VAR_1 + 2);
        FUNC_2(&VAR_8);
 VAR_1 += 4;
 FUNC_1(VAR_3, VAR_6); VAR_3 += 2;

 VAR_7 = FUNC_0(VAR_1);
 VAR_9 = (unsigned)*(VAR_1 + 2);
        FUNC_2(&VAR_9);
 VAR_1 += 4;
 FUNC_1(VAR_3, VAR_7); VAR_3 += 2;

 for (VAR_11 = VAR_10; VAR_11 > 0; VAR_11 -= 8)
        {
            for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
            {
                FUNC_4(*VAR_1, &VAR_8, &VAR_6);
                FUNC_1(VAR_3 + (2 * VAR_5 + 0) * 4 + 0, VAR_6);
                FUNC_4(*VAR_1++ >> 4, &VAR_8, &VAR_6);
                FUNC_1(VAR_3 + (2 * VAR_5 + 1) * 4 + 0, VAR_6);
            }
            for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
            {
                FUNC_4(*VAR_1 , &VAR_9, &VAR_7);
                FUNC_1(VAR_3 + (2 * VAR_5 + 0) * 4 + 2, VAR_7);
                FUNC_4(*VAR_1++ >>4, &VAR_9, &VAR_7);
                FUNC_1(VAR_3 + (2 * VAR_5 + 1) * 4 + 2, VAR_7);
            }
            VAR_3 += 32;
        }

        VAR_1 = VAR_13 + VAR_0->pwfxSrc->nBlockAlign;
    }
}
