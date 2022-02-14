
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {int path; int output; } ;
struct dstr {int dummy; } ;
typedef int obs_encoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dstr*,int *) ;
 int FUNC_1 (struct dstr*,struct ffmpeg_muxer*) ;
 int FUNC_2 (struct ffmpeg_muxer*,struct dstr*,int *) ;
 int FUNC_3 (struct dstr*,char*) ;
 int FUNC_4 (struct dstr*,int *) ;
 int FUNC_5 (struct dstr*,char*,int,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (struct dstr*,int ) ;
 int FUNC_8 (struct dstr*,int ,char) ;
 int FUNC_9 (int *,char*,char*) ;
 int * FUNC_10 (int ,int) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct ffmpeg_muxer *VAR_2, struct dstr *VAR_3,
          const char *VAR_4)
{
 obs_encoder_t *VAR_5 = FUNC_11(VAR_2->output);
 obs_encoder_t *VAR_6[VAR_1];
 int VAR_7 = 0;

 for (;;) {
  obs_encoder_t *VAR_8 = FUNC_10(
   VAR_2->output, VAR_7);
  if (!VAR_8)
   break;

  VAR_6[VAR_7] = VAR_8;
  VAR_7++;
 }

 FUNC_7(VAR_3, FUNC_12(VAR_0));
 FUNC_8(VAR_3, 0, '\"');
 FUNC_3(VAR_3, "\" \"");

 FUNC_6(&VAR_2->path, VAR_4);
 FUNC_9(&VAR_2->path, "\"", "\"\"");
 FUNC_4(VAR_3, &VAR_2->path);

 FUNC_5(VAR_3, "\" %d %d ", VAR_5 ? 1 : 0, VAR_7);

 if (VAR_5)
  FUNC_2(VAR_2, VAR_3, VAR_5);

 if (VAR_7) {
  FUNC_3(VAR_3, "aac ");

  for (int VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   FUNC_0(VAR_3, VAR_6[VAR_9]);
  }
 }

 FUNC_1(VAR_3, VAR_2);
}
