
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {int output; } ;
struct dstr {char* array; int member_0; } ;
typedef int obs_data_t ;


 int FUNC_0 (struct dstr*,char*,char*) ;
 int FUNC_1 (struct dstr*,int ) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,char*,char*) ;
 int FUNC_4 (struct ffmpeg_muxer*,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct dstr *VAR_0, struct ffmpeg_muxer *VAR_1)
{
 obs_data_t *VAR_2 = FUNC_7(VAR_1->output);
 struct dstr VAR_3 = {0};

 FUNC_1(&VAR_3, FUNC_5(VAR_2, "muxer_settings"));

 FUNC_4(VAR_1, VAR_3.array);

 FUNC_3(&VAR_3, "\"", "\\\"");
 FUNC_6(VAR_2);

 FUNC_0(VAR_0, "\"%s\" ", VAR_3.array ? VAR_3.array : "");

 FUNC_2(&VAR_3);
}
