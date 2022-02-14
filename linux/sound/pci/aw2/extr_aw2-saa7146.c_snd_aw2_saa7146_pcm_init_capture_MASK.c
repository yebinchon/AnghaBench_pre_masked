
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_aw2_saa7146 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (char*) ;
 unsigned long FUNC_2 (unsigned long) ;

void FUNC_3(struct snd_aw2_saa7146 *VAR_3,
          int VAR_4, unsigned long VAR_5,
          unsigned long VAR_6,
          unsigned long VAR_7)
{
 unsigned long VAR_8, VAR_9;
 VAR_8 = (0L << 11);
 VAR_9 = FUNC_2(VAR_6);
 VAR_8 |= (VAR_9 << 4);

 if (VAR_4 == 0) {
  FUNC_0(VAR_8, VAR_1);




  FUNC_0(VAR_5, VAR_0);


  FUNC_0(VAR_5 + VAR_7, VAR_2);
 } else {
  FUNC_1("aw2: snd_aw2_saa7146_pcm_init_capture: "
         "Substream number is not 0 -> not managed\n");
 }
}
