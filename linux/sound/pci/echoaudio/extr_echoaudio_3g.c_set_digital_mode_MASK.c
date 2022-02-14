
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct echoaudio {int pipe_alloc_mask; int digital_modes; int digital_mode; int lock; int * output_gain; int * input_gain; int ** monitor_gain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct echoaudio*,int) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*,int,int ) ;
 int FUNC_4 (struct echoaudio*,int,int,int ) ;
 int FUNC_5 (struct echoaudio*,int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct echoaudio*) ;
 int FUNC_10 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_11(struct echoaudio *VAR_3, u8 VAR_4)
{
 u8 VAR_5;
 int VAR_6, VAR_7, VAR_8;


 if (FUNC_6(VAR_3->pipe_alloc_mask))
  return -VAR_1;

 if (FUNC_6(!(VAR_3->digital_modes & (1 << VAR_4))))
  return -VAR_2;

 VAR_5 = VAR_3->digital_mode;
 VAR_6 = FUNC_0(VAR_3, VAR_4);




 if (VAR_6 >= 0 && VAR_5 != VAR_4 &&
     (VAR_5 == VAR_0 || VAR_4 == VAR_0)) {
  FUNC_7(&VAR_3->lock);
  for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_3); VAR_8++)
   for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_3); VAR_7++)
    FUNC_4(VAR_3, VAR_8, VAR_7,
       VAR_3->monitor_gain[VAR_8][VAR_7]);







  for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_3); VAR_8++)
   FUNC_5(VAR_3, VAR_8, VAR_3->output_gain[VAR_8]);
  FUNC_10(VAR_3);
  FUNC_8(&VAR_3->lock);
 }

 return VAR_6;
}
