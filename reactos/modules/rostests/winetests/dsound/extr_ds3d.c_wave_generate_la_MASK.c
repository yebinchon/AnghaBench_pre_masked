
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double nSamplesPerSec; int nBlockAlign; int wBitsPerSample; int nChannels; } ;
typedef TYPE_1__ WAVEFORMATEX ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 double VAR_0 ;
 double FUNC_2 (double) ;

char* FUNC_3(WAVEFORMATEX* VAR_1, double VAR_2, DWORD* VAR_3, BOOL VAR_4)
{
    int VAR_5;
    int VAR_6;
    char* VAR_7;
    char* VAR_8;

    VAR_6=(int)(VAR_2*VAR_1->nSamplesPerSec);
    *VAR_3=VAR_6*VAR_1->nBlockAlign;
    VAR_8=VAR_7=FUNC_1(FUNC_0(), 0, *VAR_3);
    for (VAR_5=0;VAR_5<VAR_6;VAR_5++) {
        double VAR_9=FUNC_2(440.0*2*VAR_0*VAR_5/VAR_1->nSamplesPerSec);
        if (VAR_1->wBitsPerSample==8) {
            unsigned char VAR_10=127.5*(VAR_9+1.0);
            *VAR_8++=VAR_10;
            if (VAR_1->nChannels==2)
                *VAR_8++=VAR_10;
        } else if (VAR_1->wBitsPerSample == 16) {
            signed short VAR_11=32767.5*VAR_9-0.5;
            VAR_8[0]=VAR_11 & 0xff;
            VAR_8[1]=VAR_11 >> 8;
            VAR_8+=2;
            if (VAR_1->nChannels==2) {
                VAR_8[0]=VAR_11 & 0xff;
                VAR_8[1]=VAR_11 >> 8;
                VAR_8+=2;
            }
        } else if (VAR_1->wBitsPerSample == 24) {
            signed int VAR_12=8388607.5*VAR_9-0.5;
            VAR_8[0]=VAR_12 & 0xff;
            VAR_8[1]=(VAR_12 >> 8)&0xff;
            VAR_8[2]=VAR_12 >> 16;
            VAR_8+=3;
            if (VAR_1->nChannels==2) {
                VAR_8[0]=VAR_12 & 0xff;
                VAR_8[1]=(VAR_12 >> 8)&0xff;
                VAR_8[2]=VAR_12 >> 16;
                VAR_8+=3;
            }
        } else if (VAR_1->wBitsPerSample == 32) {
            if (VAR_4) {
                float *VAR_13 = (float *) VAR_8;
                *VAR_13 = VAR_9;

                VAR_13++;
                VAR_8+=4;

                if (VAR_1->nChannels==2) {
                    *VAR_13 = VAR_9;
                    VAR_8+=4;
                }
            } else {
                signed int VAR_14=2147483647.5*VAR_9-0.5;
                VAR_8[0]=VAR_14 & 0xff;
                VAR_8[1]=(VAR_14 >> 8)&0xff;
                VAR_8[2]=(VAR_14 >> 16)&0xff;
                VAR_8[3]=VAR_14 >> 24;
                VAR_8+=4;
                if (VAR_1->nChannels==2) {
                    VAR_8[0]=VAR_14 & 0xff;
                    VAR_8[1]=(VAR_14 >> 8)&0xff;
                    VAR_8[2]=(VAR_14 >> 16)&0xff;
                    VAR_8[3]=VAR_14 >> 24;
                    VAR_8+=4;
                }
            }
        }
    }
    return VAR_7;
}
