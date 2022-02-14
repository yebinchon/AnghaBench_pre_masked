
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
 double VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 double FUNC_3 (double) ;

__attribute__((used)) static char* FUNC_4(WAVEFORMATEX* VAR_5, double VAR_6, DWORD* VAR_7)
{
    int VAR_8,VAR_9;
    int VAR_10;
    char* VAR_11;
    char* VAR_12;
    WAVEFORMATEXTENSIBLE *VAR_13 = (WAVEFORMATEXTENSIBLE*)VAR_5;

    VAR_10=(int)(VAR_6*VAR_5->nSamplesPerSec);
    *VAR_7=VAR_10*VAR_5->nBlockAlign;
    VAR_12=VAR_11=FUNC_1(FUNC_0(), 0, *VAR_7);
    for (VAR_8=0;VAR_8<VAR_10;VAR_8++) {
        double VAR_14=FUNC_3(440.0*2*VAR_2*VAR_8/VAR_5->nSamplesPerSec);
        if (VAR_5->wBitsPerSample==8) {
            unsigned char VAR_15=(unsigned char)((double)127.5*(VAR_14+1.0));
            for (VAR_9 = 0; VAR_9 < VAR_5->nChannels; VAR_9++)
                *VAR_12++=VAR_15;
        } else if (VAR_5->wBitsPerSample==16) {
            signed short VAR_16=(signed short)((double)32767.5*VAR_14-0.5);
            for (VAR_9 = 0; VAR_9 < VAR_5->nChannels; VAR_9++) {
                VAR_12[0]=VAR_16 & 0xff;
                VAR_12[1]=VAR_16 >> 8;
                VAR_12+=2;
            }
        } else if (VAR_5->wBitsPerSample==24) {
            signed int VAR_17=(signed int)(((double)0x7fffff+0.5)*VAR_14-0.5);
            for (VAR_9 = 0; VAR_9 < VAR_5->nChannels; VAR_9++) {
                VAR_12[0]=VAR_17 & 0xff;
                VAR_12[1]=(VAR_17 >> 8) & 0xff;
                VAR_12[2]=(VAR_17 >> 16) & 0xff;
                VAR_12+=3;
            }
        } else if ((VAR_5->wBitsPerSample==32) && ((VAR_5->wFormatTag == VAR_4) ||
            ((VAR_5->wFormatTag == VAR_3) &&
            FUNC_2(&VAR_13->SubFormat, &VAR_1)))) {
            signed int VAR_18=(signed int)(((double)0x7fffffff+0.5)*VAR_14-0.5);
            for (VAR_9 = 0; VAR_9 < VAR_5->nChannels; VAR_9++) {
                VAR_12[0]=VAR_18 & 0xff;
                VAR_12[1]=(VAR_18 >> 8) & 0xff;
                VAR_12[2]=(VAR_18 >> 16) & 0xff;
                VAR_12[3]=(VAR_18 >> 24) & 0xff;
                VAR_12+=4;
            }
        } else if ((VAR_5->wBitsPerSample==32) && (VAR_5->wFormatTag == VAR_3) &&
            FUNC_2(&VAR_13->SubFormat, &VAR_0)) {
            union { float f; char c[4]; } VAR_19;
            VAR_19.f=(float)VAR_14;
            for (VAR_9 = 0; VAR_9 < VAR_5->nChannels; VAR_9++) {
                VAR_12[0]=VAR_19.c[0];
                VAR_12[1]=VAR_19.c[1];
                VAR_12[2]=VAR_19.c[2];
                VAR_12[3]=VAR_19.c[3];
                VAR_12+=4;
            }
        }
    }
    return VAR_11;
}
