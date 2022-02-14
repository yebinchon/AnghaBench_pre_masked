
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int SubFormat; } ;
typedef TYPE_1__ WAVEFORMATEXTENSIBLE ;
struct TYPE_5__ {double nSamplesPerSec; int nBlockAlign; int wBitsPerSample; int nChannels; scalar_t__ wFormatTag; } ;
typedef TYPE_2__ WAVEFORMATEX ;
typedef int DWORD ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static char* FUNC_3(WAVEFORMATEX* VAR_4, double VAR_5, DWORD* VAR_6)
{
    int VAR_7,VAR_8;
    int VAR_9;
    char* VAR_10;
    char* VAR_11;
    WAVEFORMATEXTENSIBLE *VAR_12 = (WAVEFORMATEXTENSIBLE*)VAR_4;

    VAR_9=(int)(VAR_5*VAR_4->nSamplesPerSec);
    *VAR_6=VAR_9*VAR_4->nBlockAlign;
    VAR_11=VAR_10=FUNC_1(FUNC_0(), 0, *VAR_6);
    for (VAR_7=0;VAR_7<VAR_9;VAR_7++) {
        if (VAR_4->wBitsPerSample==8) {
            for (VAR_8 = 0; VAR_8 < VAR_4->nChannels; VAR_8++)
                *VAR_11++=128;
        } else if (VAR_4->wBitsPerSample==16) {
            for (VAR_8 = 0; VAR_8 < VAR_4->nChannels; VAR_8++) {
                VAR_11[0]=0;
                VAR_11[1]=0;
                VAR_11+=2;
            }
        } else if (VAR_4->wBitsPerSample==24) {
            for (VAR_8 = 0; VAR_8 < VAR_4->nChannels; VAR_8++) {
                VAR_11[0]=0;
                VAR_11[1]=0;
                VAR_11[2]=0;
                VAR_11+=3;
            }
        } else if ((VAR_4->wBitsPerSample==32) && ((VAR_4->wFormatTag == VAR_3) ||
            ((VAR_4->wFormatTag == VAR_2) &&
            FUNC_2(&VAR_12->SubFormat, &VAR_1)))) {
            for (VAR_8 = 0; VAR_8 < VAR_4->nChannels; VAR_8++) {
                VAR_11[0]=0;
                VAR_11[1]=0;
                VAR_11[2]=0;
                VAR_11[3]=0;
                VAR_11+=4;
            }
        } else if ((VAR_4->wBitsPerSample==32) && (VAR_4->wFormatTag == VAR_2) &&
            FUNC_2(&VAR_12->SubFormat, &VAR_0)) {
            union { float f; char c[4]; } VAR_13;
            VAR_13.f=0;
            for (VAR_8 = 0; VAR_8 < VAR_4->nChannels; VAR_8++) {
                VAR_11[0]=VAR_13.c[0];
                VAR_11[1]=VAR_13.c[1];
                VAR_11[2]=VAR_13.c[2];
                VAR_11[3]=VAR_13.c[3];
                VAR_11+=4;
            }
        }
    }
    return VAR_10;
}
