
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {int stopping; int sent_headers; int active; int output; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct ffmpeg_muxer*) ;
 scalar_t__ FUNC_4 (struct ffmpeg_muxer*) ;

__attribute__((used)) static void FUNC_5(struct ffmpeg_muxer *VAR_0, int VAR_1)
{
 if (VAR_1) {
  FUNC_1(VAR_0->output, VAR_1);
 } else if (FUNC_4(VAR_0)) {
  FUNC_0(VAR_0->output);
 }

 FUNC_2(&VAR_0->active, 0);
 FUNC_2(&VAR_0->sent_headers, 0);
 FUNC_2(&VAR_0->stopping, 0);
 FUNC_3(VAR_0);
}
