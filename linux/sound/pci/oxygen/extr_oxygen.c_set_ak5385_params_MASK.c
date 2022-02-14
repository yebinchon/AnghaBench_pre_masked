
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct oxygen*,int ,unsigned int,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_5,
         struct snd_pcm_hw_params *VAR_6)
{
 unsigned int VAR_7;

 if (FUNC_1(VAR_6) <= 54000)
  VAR_7 = VAR_2;
 else if (FUNC_1(VAR_6) <= 108000)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_3;
 FUNC_0(VAR_5, VAR_4,
         VAR_7, VAR_1);
}
