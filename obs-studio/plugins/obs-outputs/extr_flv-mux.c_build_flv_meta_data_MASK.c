
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_t ;
typedef int uint8_t ;
struct dstr {char* array; int member_0; } ;
typedef int obs_output_t ;
typedef int obs_encoder_t ;
typedef int buf ;
typedef int audio_t ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,size_t) ;
 int FUNC_3 (struct dstr*,char*) ;
 int FUNC_4 (struct dstr*,char*,int ,int ,int ) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (struct dstr*,char*,int ) ;
 int FUNC_7 (char**,char*,char*,int) ;
 int FUNC_8 (char**,char*,char*,double) ;
 int FUNC_9 (char**,char*,char*) ;
 int FUNC_10 (char**,char*,char*,char*) ;
 double FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int * FUNC_17 (int *,size_t) ;
 int * FUNC_18 (int *) ;
 double FUNC_19 (int *) ;

__attribute__((used)) static bool FUNC_20(obs_output_t *VAR_7, uint8_t **VAR_8,
    size_t *VAR_9, size_t VAR_10)
{
 obs_encoder_t *VAR_11 = FUNC_18(VAR_7);
 obs_encoder_t *VAR_12 = FUNC_17(VAR_7, VAR_10);
 video_t *VAR_13 = FUNC_16(VAR_11);
 audio_t *VAR_14 = FUNC_12(VAR_12);
 char VAR_15[4096];
 char *VAR_16 = VAR_15;
 char *VAR_17 = VAR_16 + sizeof(VAR_15);
 struct dstr VAR_18 = {0};

 if (VAR_10 > 0 && !VAR_12)
  return 0;

 FUNC_9(&VAR_16, VAR_17, "onMetaData");

 *VAR_16++ = VAR_0;
 VAR_16 = FUNC_0(VAR_16, VAR_17, VAR_10 == 0 ? 20 : 15);

 FUNC_8(&VAR_16, VAR_17, "duration", 0.0);
 FUNC_8(&VAR_16, VAR_17, "fileSize", 0.0);

 if (VAR_10 == 0) {
  FUNC_8(&VAR_16, VAR_17, "width",
       (double)FUNC_15(VAR_11));
  FUNC_8(&VAR_16, VAR_17, "height",
       (double)FUNC_13(VAR_11));

  FUNC_10(&VAR_16, VAR_17, "videocodecid", "avc1");
  FUNC_8(&VAR_16, VAR_17, "videodatarate",
       FUNC_11(VAR_11));
  FUNC_8(&VAR_16, VAR_17, "framerate",
       FUNC_19(VAR_13));
 }

 FUNC_10(&VAR_16, VAR_17, "audiocodecid", "mp4a");
 FUNC_8(&VAR_16, VAR_17, "audiodatarate", FUNC_11(VAR_12));
 FUNC_8(&VAR_16, VAR_17, "audiosamplerate",
      (double)FUNC_14(VAR_12));
 FUNC_8(&VAR_16, VAR_17, "audiosamplesize", 16.0);
 FUNC_8(&VAR_16, VAR_17, "audiochannels",
      (double)FUNC_1(VAR_14));

 FUNC_7(&VAR_16, VAR_17, "stereo",
       FUNC_1(VAR_14) == 2);
 FUNC_7(&VAR_16, VAR_17, "2.1", FUNC_1(VAR_14) == 3);
 FUNC_7(&VAR_16, VAR_17, "3.1", FUNC_1(VAR_14) == 4);
 FUNC_7(&VAR_16, VAR_17, "4.0", FUNC_1(VAR_14) == 4);
 FUNC_7(&VAR_16, VAR_17, "4.1", FUNC_1(VAR_14) == 5);
 FUNC_7(&VAR_16, VAR_17, "5.1", FUNC_1(VAR_14) == 6);
 FUNC_7(&VAR_16, VAR_17, "7.1", FUNC_1(VAR_14) == 8);

 FUNC_6(&VAR_18, "%s (libobs version ", VAR_5);




 FUNC_4(&VAR_18, "%d.%d.%d", VAR_2,
    VAR_3, VAR_4);


 FUNC_3(&VAR_18, ")");

 FUNC_10(&VAR_16, VAR_17, "encoder", VAR_18.array);
 FUNC_5(&VAR_18);

 *VAR_16++ = 0;
 *VAR_16++ = 0;
 *VAR_16++ = VAR_1;

 *VAR_9 = VAR_16 - VAR_15;
 *VAR_8 = FUNC_2(VAR_15, *VAR_9);
 return 1;
}
