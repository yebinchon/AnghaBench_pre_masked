
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array; } ;
struct ffmpeg_muxer {int stopping; int output; TYPE_1__ path; int sent_headers; int active; int * pipe; } ;


 scalar_t__ FUNC_0 (struct ffmpeg_muxer*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct ffmpeg_muxer*) ;

__attribute__((used)) static int FUNC_7(struct ffmpeg_muxer *VAR_0, int VAR_1)
{
 int VAR_2 = -1;

 if (FUNC_0(VAR_0)) {
  VAR_2 = FUNC_5(VAR_0->pipe);
  VAR_0->pipe = ((void*)0);

  FUNC_4(&VAR_0->active, 0);
  FUNC_4(&VAR_0->sent_headers, 0);

  FUNC_1("Output of file '%s' stopped", VAR_0->path.array);
 }

 if (VAR_1) {
  FUNC_3(VAR_0->output, VAR_1);
 } else if (FUNC_6(VAR_0)) {
  FUNC_2(VAR_0->output);
 }

 FUNC_4(&VAR_0->stopping, 0);
 return VAR_2;
}
