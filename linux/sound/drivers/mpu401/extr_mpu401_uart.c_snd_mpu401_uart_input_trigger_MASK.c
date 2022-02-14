
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_mpu401 {int info_flags; int mode; int input_lock; int (* read ) (struct snd_mpu401*,int ) ;} ;
struct TYPE_2__ {struct snd_mpu401* private_data; } ;


 int FUNC_0 (struct snd_mpu401*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct snd_mpu401*,int) ;
 int FUNC_3 (struct snd_mpu401*) ;
 int FUNC_4 (struct snd_mpu401*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct snd_mpu401*,int ) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct snd_rawmidi_substream *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 struct snd_mpu401 *VAR_5;
 int VAR_6 = 64;

 VAR_5 = VAR_2->rmidi->private_data;
 if (VAR_3) {
  if (! FUNC_8(VAR_1,
           &VAR_5->mode)) {

   while (VAR_6-- > 0)
    VAR_5->read(VAR_5, FUNC_0(VAR_5));
   if (VAR_5->info_flags & VAR_0)
    FUNC_2(VAR_5, 1);
  }


  FUNC_5(&VAR_5->input_lock, VAR_4);
  FUNC_3(VAR_5);
  FUNC_6(&VAR_5->input_lock, VAR_4);
 } else {
  if (VAR_5->info_flags & VAR_0)
   FUNC_4(VAR_5, 1);
  FUNC_1(VAR_1, &VAR_5->mode);
 }

}
