
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ffmpeg_data {TYPE_4__* output; } ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_6__ {scalar_t__ nb_streams; } ;
struct TYPE_5__ {scalar_t__ id; } ;
typedef TYPE_1__ AVStream ;
typedef int AVCodec ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (int ,struct ffmpeg_data*,char*,int ) ;

__attribute__((used)) static bool FUNC_5(struct ffmpeg_data *VAR_1, AVStream **VAR_2,
         AVCodec **VAR_3, enum AVCodecID VAR_4, const char *VAR_5)
{
 *VAR_3 = (!!VAR_5 && *VAR_5) ? FUNC_1(VAR_5)
       : FUNC_0(VAR_4);

 if (!*VAR_3) {
  FUNC_4(VAR_0, VAR_1,
     "Couldn't find encoder '%s'",
     FUNC_2(VAR_4));
  return 0;
 }

 *VAR_2 = FUNC_3(VAR_1->output, *VAR_3);
 if (!*VAR_2) {
  FUNC_4(VAR_0, VAR_1,
     "Couldn't create stream for encoder '%s'",
     FUNC_2(VAR_4));
  return 0;
 }

 (*VAR_2)->id = VAR_1->output->nb_streams - 1;
 return 1;
}
