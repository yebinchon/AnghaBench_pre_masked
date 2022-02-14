
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* pwfxSrc; TYPE_1__* pwfxDst; } ;
struct TYPE_8__ {int wSamplesPerBlock; } ;
struct TYPE_7__ {int nBlockAlign; } ;
struct TYPE_6__ {int nBlockAlign; int wBitsPerSample; } ;
typedef int* LPDWORD ;
typedef int DWORD ;
typedef TYPE_3__ ADPCMWAVEFORMAT ;
typedef int ADPCMCOEFSET ;
typedef TYPE_4__ ACMDRVSTREAMINSTANCE ;


 unsigned char FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (unsigned char const,int*,int*,int*,int *) ;

__attribute__((used)) static void FUNC_6(const ACMDRVSTREAMINSTANCE *VAR_1,
                        const unsigned char* VAR_2, LPDWORD VAR_3,
                        unsigned char* VAR_4, LPDWORD VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8, VAR_9;
    int VAR_10, VAR_11;
    ADPCMCOEFSET VAR_12, VAR_13;
    int VAR_14;
    int VAR_15 = ((ADPCMWAVEFORMAT*)VAR_1->pwfxSrc)->wSamplesPerBlock;
    DWORD VAR_16 = FUNC_4(*VAR_3 / VAR_1->pwfxSrc->nBlockAlign,
                                     *VAR_5 / (VAR_15 * VAR_1->pwfxDst->nBlockAlign));

    *VAR_3 = VAR_16 * VAR_1->pwfxSrc->nBlockAlign;
    *VAR_5 = VAR_16 * VAR_15 * VAR_1->pwfxDst->nBlockAlign;

    VAR_15 -= 2;
    for (; VAR_16 > 0; VAR_16--)
    {
        const unsigned char* VAR_17 = VAR_2;



        if (*VAR_2 > 6 || *(VAR_2 + 1) > 6)
        {


            *VAR_5 -= VAR_16 * VAR_15 * VAR_1->pwfxDst->nBlockAlign;
            FUNC_3("Invalid ADPCM data, stopping conversion\n");
            break;
        }
        VAR_12 = VAR_0[*VAR_2++];
        VAR_13 = VAR_0[*VAR_2++];

        VAR_6 = FUNC_1(VAR_2); VAR_2 += 2;
        VAR_7 = FUNC_1(VAR_2); VAR_2 += 2;
        VAR_8 = FUNC_1(VAR_2); VAR_2 += 2;
        VAR_10 = FUNC_1(VAR_2); VAR_2 += 2;
        VAR_9 = FUNC_1(VAR_2); VAR_2 += 2;
        VAR_11 = FUNC_1(VAR_2); VAR_2 += 2;

        if(VAR_1->pwfxDst->wBitsPerSample == 8){

            *VAR_4 = FUNC_0(VAR_9); ++VAR_4;
            *VAR_4 = FUNC_0(VAR_11); ++VAR_4;
            *VAR_4 = FUNC_0(VAR_8); ++VAR_4;
            *VAR_4 = FUNC_0(VAR_10); ++VAR_4;

            for (VAR_14 = VAR_15; VAR_14 > 0; VAR_14--)
            {
                FUNC_5(*VAR_2 >> 4, &VAR_6, &VAR_8, &VAR_9, &VAR_12);
                *VAR_4 = FUNC_0(VAR_8); ++VAR_4;
                FUNC_5(*VAR_2++ & 0x0F, &VAR_7, &VAR_10, &VAR_11, &VAR_13);
                *VAR_4 = FUNC_0(VAR_10); ++VAR_4;
            }
        }else if(VAR_1->pwfxDst->wBitsPerSample == 16){

            FUNC_2(VAR_4, VAR_9); VAR_4 += 2;
            FUNC_2(VAR_4, VAR_11); VAR_4 += 2;
            FUNC_2(VAR_4, VAR_8); VAR_4 += 2;
            FUNC_2(VAR_4, VAR_10); VAR_4 += 2;

            for (VAR_14 = VAR_15; VAR_14 > 0; VAR_14--)
            {
                FUNC_5(*VAR_2 >> 4, &VAR_6, &VAR_8, &VAR_9, &VAR_12);
                FUNC_2(VAR_4, VAR_8); VAR_4 += 2;
                FUNC_5(*VAR_2++ & 0x0F, &VAR_7, &VAR_10, &VAR_11, &VAR_13);
                FUNC_2(VAR_4, VAR_10); VAR_4 += 2;
            }
        }
        VAR_2 = VAR_17 + VAR_1->pwfxSrc->nBlockAlign;
    }
}
