
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ffmpeg_mux {TYPE_5__* output; } ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_9__ {scalar_t__ nb_streams; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {scalar_t__ id; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVCodecDescriptor ;
typedef int AVCodec ;


 TYPE_2__* FUNC_0 (char const*) ;
 int * FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_4(struct ffmpeg_mux *VAR_1, AVStream **VAR_2,
         const char *VAR_3, enum AVCodecID *VAR_4)
{
 const AVCodecDescriptor *VAR_5 = FUNC_0(VAR_3);
 AVCodec *VAR_6;

 if (!VAR_5) {
  FUNC_3(VAR_0, "Couldn't find encoder '%s'\n", VAR_3);
  return 0;
 }

 *VAR_4 = VAR_5->id;

 VAR_6 = FUNC_1(VAR_5->id);
 if (!VAR_6) {
  FUNC_3(VAR_0, "Couldn't create encoder");
  return 0;
 }

 *VAR_2 = FUNC_2(VAR_1->output, VAR_6);
 if (!*VAR_2) {
  FUNC_3(VAR_0, "Couldn't create stream for encoder '%s'\n",
   VAR_3);
  return 0;
 }

 (*VAR_2)->id = VAR_1->output->nb_streams - 1;
 return 1;
}
