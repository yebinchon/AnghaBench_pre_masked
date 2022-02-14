
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ffmpeg_muxer {int capturing; int output; int pipe; } ;
typedef int error ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ffmpeg_muxer*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;
 size_t FUNC_4 (int ,int *,int) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(struct ffmpeg_muxer *VAR_2)
{
 char VAR_3[1024];
 int VAR_4;
 int VAR_5;

 size_t VAR_6;

 VAR_6 = FUNC_4(VAR_2->pipe, (uint8_t *)VAR_3,
           sizeof(VAR_3) - 1);

 if (VAR_6 > 0) {
  VAR_3[VAR_6] = 0;
  FUNC_5("ffmpeg-mux: %s", VAR_3);
  FUNC_1(VAR_2->output, VAR_3);
 }

 VAR_4 = FUNC_0(VAR_2, 0);

 switch (VAR_4) {
 case 128:
  VAR_5 = VAR_1;
  break;
 default:
  VAR_5 = VAR_0;
 }

 FUNC_2(VAR_2->output, VAR_5);
 FUNC_3(&VAR_2->capturing, 0);
}
