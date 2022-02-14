
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {struct dg* model_data; } ;
struct dg {unsigned char* cs4245_shadow; } ;


 size_t VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct oxygen*,size_t) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;

void FUNC_2(struct oxygen *VAR_10,
      struct snd_pcm_hw_params *VAR_11)
{
 struct dg *VAR_12 = VAR_10->model_data;
 unsigned char VAR_13;
 unsigned char VAR_14;

 VAR_13 = VAR_12->cs4245_shadow[VAR_0] & ~VAR_2;
 VAR_14 = VAR_12->cs4245_shadow[VAR_9] & ~VAR_5;
 if (FUNC_1(VAR_11) <= 50000) {
  VAR_13 |= VAR_4;
  VAR_14 |= VAR_7 << VAR_6;
 } else if (FUNC_1(VAR_11) <= 100000) {
  VAR_13 |= VAR_1;
  VAR_14 |= VAR_7 << VAR_6;
 } else {
  VAR_13 |= VAR_3;
  VAR_14 |= VAR_8 << VAR_6;
 }
 VAR_12->cs4245_shadow[VAR_0] = VAR_13;
 VAR_12->cs4245_shadow[VAR_9] = VAR_14;
 FUNC_0(VAR_10, VAR_0);
 FUNC_0(VAR_10, VAR_9);
}
