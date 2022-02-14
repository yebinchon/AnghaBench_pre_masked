
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,scalar_t__*) ;
 int FUNC_3 (char*,char*) ;
 void* FUNC_4 (char*) ;
 char* VAR_6 ;
 void* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 int FUNC_5 (scalar_t__,scalar_t__,char*,char*,int) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*,char) ;

void FUNC_9(void)
{
    char VAR_16[VAR_5+16];
    HKEY VAR_17, VAR_18 = 0;
    DWORD VAR_19;

    VAR_16[VAR_5]='\0';


    if (FUNC_2( VAR_4, "Software\\Wine\\DirectSound", &VAR_17 )) VAR_17 = 0;

    VAR_19 = FUNC_0( 0, VAR_16, VAR_5 );
    if (VAR_19 && VAR_19 < VAR_5)
    {
        HKEY VAR_20;

        if (!FUNC_2( VAR_4, "Software\\Wine\\AppDefaults", &VAR_20 ))
        {
            char *VAR_21, *VAR_22 = VAR_16;
            if ((VAR_21 = FUNC_8( VAR_22, '/' ))) VAR_22 = VAR_21 + 1;
            if ((VAR_21 = FUNC_8( VAR_22, '\\' ))) VAR_22 = VAR_21 + 1;
            FUNC_6( VAR_22, "\\DirectSound" );
            FUNC_3("appname = [%s]\n", VAR_22);
            if (FUNC_2( VAR_20, VAR_22, &VAR_18 )) VAR_18 = 0;
            FUNC_1( VAR_20 );
        }
    }



    if (!FUNC_5( VAR_17, VAR_18, "EmulDriver", VAR_16, VAR_5 ))
        VAR_10 = FUNC_7(VAR_16, "N");

    if (!FUNC_5( VAR_17, VAR_18, "HelBuflen", VAR_16, VAR_5 ))
        VAR_11 = FUNC_4(VAR_16);

    if (!FUNC_5( VAR_17, VAR_18, "SndQueueMax", VAR_16, VAR_5 ))
        VAR_13 = FUNC_4(VAR_16);

    if (!FUNC_5( VAR_17, VAR_18, "SndQueueMin", VAR_16, VAR_5 ))
        VAR_14 = FUNC_4(VAR_16);

    if (!FUNC_5( VAR_17, VAR_18, "HardwareAcceleration", VAR_16, VAR_5 )) {
 if (FUNC_7(VAR_16, "Full") == 0)
     VAR_12 = VAR_2;
 else if (FUNC_7(VAR_16, "Standard") == 0)
     VAR_12 = VAR_3;
 else if (FUNC_7(VAR_16, "Basic") == 0)
     VAR_12 = VAR_0;
 else if (FUNC_7(VAR_16, "Emulation") == 0)
     VAR_12 = VAR_1;
    }

    if (!FUNC_5( VAR_17, VAR_18, "DefaultPlayback", VAR_16, VAR_5 ))
        VAR_8 = FUNC_4(VAR_16);

    if (!FUNC_5( VAR_17, VAR_18, "MaxShadowSize", VAR_16, VAR_5 ))
        VAR_15 = FUNC_4(VAR_16);

    if (!FUNC_5( VAR_17, VAR_18, "DefaultCapture", VAR_16, VAR_5 ))
        VAR_7 = FUNC_4(VAR_16);

    if (!FUNC_5( VAR_17, VAR_18, "DefaultSampleRate", VAR_16, VAR_5 ))
        VAR_9 = FUNC_4(VAR_16);

    if (!FUNC_5( VAR_17, VAR_18, "DefaultBitsPerSample", VAR_16, VAR_5 ))
        VAR_6 = FUNC_4(VAR_16);

    if (VAR_18) FUNC_1( VAR_18 );
    if (VAR_17) FUNC_1( VAR_17 );

    FUNC_3("ds_emuldriver = %d\n", VAR_10);
    FUNC_3("ds_hel_buflen = %d\n", VAR_11);
    FUNC_3("ds_snd_queue_max = %d\n", VAR_13);
    FUNC_3("ds_snd_queue_min = %d\n", VAR_14);
    FUNC_3("ds_hw_accel = %s\n",
        VAR_12==VAR_2 ? "Full" :
        VAR_12==VAR_3 ? "Standard" :
        VAR_12==VAR_0 ? "Basic" :
        VAR_12==VAR_1 ? "Emulation" :
        "Unknown");
    FUNC_3("ds_default_playback = %d\n", VAR_8);
    FUNC_3("ds_default_capture = %d\n", VAR_8);
    FUNC_3("ds_default_sample_rate = %d\n", VAR_9);
    FUNC_3("ds_default_bits_per_sample = %d\n", VAR_6);
    FUNC_3("ds_snd_shadow_maxsize = %d\n", VAR_15);
}
