
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_aw2_saa7146 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (char*) ;
 unsigned long FUNC_2 (unsigned long) ;

void FUNC_3(struct snd_aw2_saa7146 *VAR_6,
           int VAR_7,
           unsigned long VAR_8,
           unsigned long VAR_9,
           unsigned long VAR_10)
{
 unsigned long VAR_11, VAR_12;
 VAR_11 = (0L << 11);
 VAR_12 = FUNC_2(VAR_9);
 VAR_11 |= (VAR_12 << 4);

 if (VAR_7 == 0) {
  FUNC_0(VAR_11, VAR_3);




  FUNC_0(VAR_8, VAR_1);


  FUNC_0(VAR_8 + VAR_10, VAR_5);

 } else if (VAR_7 == 1) {
  FUNC_0(VAR_11, VAR_2);




  FUNC_0(VAR_8, VAR_0);


  FUNC_0(VAR_8 + VAR_10, VAR_4);
 } else {
  FUNC_1("aw2: snd_aw2_saa7146_pcm_init_playback: "
         "Substream number is not 0 or 1 -> not managed\n");
 }
}
