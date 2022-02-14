
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nSamplesPerSec; int wBitsPerSample; int nChannels; int nBlockAlign; int nAvgBytesPerSec; scalar_t__ cbSize; int wFormatTag; } ;
typedef TYPE_1__ WAVEFORMATEX ;
typedef int IAudioClient ;
typedef int HRESULT ;
typedef int AUDCLNT_SHAREMODE ;


 int FUNC_0 (void***) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__**) ;
 int FUNC_3 (int *,int ,int ,int,int ,TYPE_1__*,int *) ;
 int FUNC_4 (int *,int ,TYPE_1__*,TYPE_1__**) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (int ,int *,int ,int *,void**) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int,char*,scalar_t__,...) ;
 int FUNC_9 (char*,char*,scalar_t__,int,int,...) ;
 void*** VAR_11 ;

__attribute__((used)) static void FUNC_10(AUDCLNT_SHAREMODE VAR_12)
{
    IAudioClient *VAR_13;
    HRESULT VAR_14, VAR_15;
    WAVEFORMATEX VAR_16, *VAR_17, *VAR_18;
    int VAR_19;

    VAR_16.wFormatTag = VAR_8;
    VAR_16.cbSize = 0;

    for(VAR_19 = 0; VAR_19 < FUNC_0(VAR_11); VAR_19++) {
        VAR_14 = FUNC_6(VAR_9, &VAR_5, VAR_4,
                ((void*)0), (void**)&VAR_13);
        FUNC_8(VAR_14 == VAR_7, "Activation failed with %08x\n", VAR_14);
        if(VAR_14 != VAR_7)
            continue;

        VAR_14 = FUNC_2(VAR_13, &VAR_17);
        FUNC_8(VAR_14 == VAR_7, "GetMixFormat failed: %08x\n", VAR_14);

        VAR_16.nSamplesPerSec = VAR_11[VAR_19][0];
        VAR_16.wBitsPerSample = VAR_11[VAR_19][1];
        VAR_16.nChannels = VAR_11[VAR_19][2];
        VAR_16.nBlockAlign = VAR_16.nChannels * VAR_16.wBitsPerSample / 8;
        VAR_16.nAvgBytesPerSec= VAR_16.nBlockAlign * VAR_16.nSamplesPerSec;

        VAR_18 = (WAVEFORMATEX*)0xDEADF00D;
        VAR_14 = FUNC_4(VAR_13, VAR_12, &VAR_16, &VAR_18);
        VAR_15 = VAR_14;

        FUNC_8(VAR_14 == VAR_7 || (VAR_12 == VAR_3
           ? VAR_14 == VAR_6 || FUNC_7(VAR_14 == VAR_2 &&

               VAR_17->nChannels > 2 && VAR_16.nSamplesPerSec == VAR_17->nSamplesPerSec)
           : (VAR_14 == VAR_2 || VAR_14 == VAR_10)),
           "IsFormatSupported(%d, %ux%2ux%u) returns %08x\n", VAR_12,
           VAR_16.nSamplesPerSec, VAR_16.wBitsPerSample, VAR_16.nChannels, VAR_14);
        if (VAR_14 == VAR_7)
            FUNC_9("IsSupported(%s, %ux%2ux%u)\n",
                  VAR_12 == VAR_3 ? "shared " : "exclus.",
                  VAR_16.nSamplesPerSec, VAR_16.wBitsPerSample, VAR_16.nChannels);


        if (VAR_12 == VAR_3
            && VAR_16.nSamplesPerSec == VAR_17->nSamplesPerSec
            && VAR_16.nChannels == VAR_17->nChannels)
            FUNC_8(VAR_14 == VAR_7, "Varying BitsPerSample %u\n", VAR_16.wBitsPerSample);

        FUNC_8((VAR_14 == VAR_6)^(VAR_18 == ((void*)0)), "hr %x<->suggest %p\n", VAR_14, VAR_18);
        if (VAR_18 == (WAVEFORMATEX*)0xDEADF00D)
            VAR_18 = ((void*)0);
        if (VAR_18) {
            FUNC_8(VAR_18->nSamplesPerSec == VAR_17->nSamplesPerSec &&
               VAR_18->nChannels == VAR_17->nChannels &&
               VAR_18->wBitsPerSample == VAR_17->wBitsPerSample,
               "Suggestion %ux%2ux%u differs from GetMixFormat\n",
               VAR_18->nSamplesPerSec, VAR_18->wBitsPerSample, VAR_18->nChannels);
        }


        VAR_14 = FUNC_3(VAR_13, VAR_12, 0, 5000000, 0, &VAR_16, ((void*)0));
        if ((VAR_15 == VAR_7) ^ (VAR_14 == VAR_7))
            FUNC_9("Initialize (%s, %ux%2ux%u) returns %08x unlike IsFormatSupported\n",
                  VAR_12 == VAR_3 ? "shared " : "exclus.",
                  VAR_16.nSamplesPerSec, VAR_16.wBitsPerSample, VAR_16.nChannels, VAR_14);
        if (VAR_12 == VAR_3)
            FUNC_8(VAR_15 == VAR_7 ? VAR_14 == VAR_7 : VAR_14 == VAR_2,
               "Initialize(shared,  %ux%2ux%u) returns %08x\n",
               VAR_16.nSamplesPerSec, VAR_16.wBitsPerSample, VAR_16.nChannels, VAR_14);
        else if (VAR_15 == VAR_1)

            FUNC_8(VAR_15 == VAR_10 && (VAR_14 == VAR_0 || VAR_14 == VAR_15),
               "Initialize(noexcl., %ux%2ux%u) returns %08x(%08x)\n",
               VAR_16.nSamplesPerSec, VAR_16.wBitsPerSample, VAR_16.nChannels, VAR_14, VAR_15);
        else



            FUNC_8(VAR_15 == VAR_7 ? VAR_14 == VAR_7 || FUNC_7(VAR_14 == VAR_0)
               : VAR_14 == VAR_0 || VAR_14 == VAR_2 ||
                 FUNC_7(VAR_14 == VAR_7 &&
                     ((VAR_16.nChannels == 1 && VAR_16.wBitsPerSample == 16) ||
                      (VAR_16.nSamplesPerSec == 12000 || VAR_16.nSamplesPerSec == 96000))),
               "Initialize(exclus., %ux%2ux%u) returns %08x\n",
               VAR_16.nSamplesPerSec, VAR_16.wBitsPerSample, VAR_16.nChannels, VAR_14);
        FUNC_1(VAR_18);
        FUNC_1(VAR_17);
        FUNC_5(VAR_13);
    }
}
