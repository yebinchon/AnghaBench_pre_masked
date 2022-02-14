
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_t ;
struct video_output_info {int fps_num; } ;
struct obs_qsv {int context; int encoder; } ;
struct encoder_packet {int dummy; } ;
struct encoder_frame {int pts; int * linesize; int ** data; } ;
typedef int mfxU64 ;
typedef int mfxBitstream ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct obs_qsv*,struct encoder_packet*,int *,int,int*) ;
 int FUNC_4 (int ,int,int *,int *,int ,int ,int **) ;
 struct video_output_info* FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static bool FUNC_7(void *VAR_1, struct encoder_frame *VAR_2,
      struct encoder_packet *VAR_3, bool *VAR_4)
{
 struct obs_qsv *VAR_5 = VAR_1;

 if (!VAR_2 || !VAR_3 || !VAR_4)
  return 0;

 FUNC_0(&VAR_0);

 video_t *VAR_6 = FUNC_2(VAR_5->encoder);
 const struct video_output_info *VAR_7 = FUNC_5(VAR_6);

 mfxBitstream *VAR_8 = ((void*)0);

 int VAR_9;

 mfxU64 VAR_10 = VAR_2->pts * 90000 / VAR_7->fps_num;



 if (VAR_2)
  VAR_9 = FUNC_4(VAR_5->context, VAR_10,
      VAR_2->data[0], VAR_2->data[1],
      VAR_2->linesize[0], VAR_2->linesize[1],
      &VAR_8);
 else
  VAR_9 = FUNC_4(VAR_5->context, VAR_10, ((void*)0), ((void*)0), 0,
      0, &VAR_8);

 if (VAR_9 < 0) {
  FUNC_6("encode failed");
  FUNC_1(&VAR_0);
  return 0;
 }

 FUNC_3(VAR_5, VAR_3, VAR_8, VAR_7->fps_num, VAR_4);

 FUNC_1(&VAR_0);

 return 1;
}
