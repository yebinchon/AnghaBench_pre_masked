
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {int calibrate_mute; int* image; int lock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct snd_cs4231*,size_t,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_cs4231 *VAR_12, int VAR_13)
{
 unsigned long VAR_14;

 VAR_13 = VAR_13 ? 1 : 0;
 FUNC_1(&VAR_12->lock, VAR_14);
 if (VAR_12->calibrate_mute == VAR_13) {
  FUNC_2(&VAR_12->lock, VAR_14);
  return;
 }
 if (!VAR_13) {
  FUNC_0(VAR_12, VAR_4,
    VAR_12->image[VAR_4]);
  FUNC_0(VAR_12, VAR_9,
    VAR_12->image[VAR_9]);
  FUNC_0(VAR_12, VAR_7,
    VAR_12->image[VAR_7]);
 }
 FUNC_0(VAR_12, VAR_0,
   VAR_13 ? 0x80 : VAR_12->image[VAR_0]);
 FUNC_0(VAR_12, VAR_1,
   VAR_13 ? 0x80 : VAR_12->image[VAR_1]);
 FUNC_0(VAR_12, VAR_2,
   VAR_13 ? 0x80 : VAR_12->image[VAR_2]);
 FUNC_0(VAR_12, VAR_3,
   VAR_13 ? 0x80 : VAR_12->image[VAR_3]);
 FUNC_0(VAR_12, VAR_6,
   VAR_13 ? 0x80 : VAR_12->image[VAR_6]);
 FUNC_0(VAR_12, VAR_11,
   VAR_13 ? 0x80 : VAR_12->image[VAR_11]);
 FUNC_0(VAR_12, VAR_5,
   VAR_13 ? 0x80 : VAR_12->image[VAR_5]);
 FUNC_0(VAR_12, VAR_10,
   VAR_13 ? 0x80 : VAR_12->image[VAR_10]);
 FUNC_0(VAR_12, VAR_8,
   VAR_13 ? 0xc0 : VAR_12->image[VAR_8]);
 VAR_12->calibrate_mute = VAR_13;
 FUNC_2(&VAR_12->lock, VAR_14);
}
