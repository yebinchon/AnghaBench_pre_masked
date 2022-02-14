
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {int wBitsPerSample; scalar_t__ wFormatTag; int nChannels; int nSamplesPerSec; } ;
struct TYPE_4__ {TYPE_1__ Format; int SubFormat; } ;
typedef TYPE_2__* PWAVEFORMATEXTENSIBLE ;
typedef int PWAVEFORMATEX ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (int) ;
 int VAR_4 ;

__attribute__((used)) static DWORD FUNC_3(PWAVEFORMATEX VAR_5, BYTE* VAR_6, UINT32 VAR_7)
{
    static double VAR_8 = 0.;
    PWAVEFORMATEXTENSIBLE VAR_9 = (PWAVEFORMATEXTENSIBLE)VAR_5;
    DWORD VAR_10, VAR_11;
    double VAR_12, VAR_13;

    if(!VAR_4)
        return VAR_0;
    if(VAR_9->Format.wBitsPerSample != ((VAR_9->Format.wFormatTag == VAR_3 &&
       FUNC_0(&VAR_9->SubFormat, &VAR_1)) ? 8 * sizeof(float) : 16))
        return VAR_0;

    for(VAR_12 = VAR_8, VAR_10 = 0; VAR_10 < VAR_9->Format.nChannels;
        VAR_12 += .5/VAR_9->Format.nChannels, VAR_10++){
        for(VAR_11 = 0; VAR_11 < VAR_7; VAR_11++){
            VAR_13 = FUNC_2(2*VAR_2*(440.* VAR_11 / VAR_9->Format.nSamplesPerSec + VAR_12));

            if(VAR_9->Format.wBitsPerSample == 16)
                ((short*)VAR_6)[VAR_10+VAR_11*VAR_9->Format.nChannels] = VAR_13 * 32767.9;
            else
                ((float*)VAR_6)[VAR_10+VAR_11*VAR_9->Format.nChannels] = VAR_13;
        }
    }
    VAR_8 += 440.* VAR_7 / VAR_9->Format.nSamplesPerSec;
    VAR_8 -= FUNC_1(VAR_8);
    return 0;
}
