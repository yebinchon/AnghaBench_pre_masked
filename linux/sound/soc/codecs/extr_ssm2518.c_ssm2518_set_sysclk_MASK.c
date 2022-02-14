
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2518 {unsigned int sysclk; int regmap; int * constraints; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct ssm2518* FUNC_1 (struct snd_soc_component*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_8, int VAR_9,
 int VAR_10, unsigned int VAR_11, int VAR_12)
{
 struct ssm2518 *VAR_13 = FUNC_1(VAR_8);
 unsigned int VAR_14;

 if (VAR_9 != VAR_3)
  return -VAR_0;

 switch (VAR_10) {
 case 128:
  VAR_14 = 0;
  break;
 case 129:



  VAR_14 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11) {
 case 0:
  VAR_13->constraints = ((void*)0);
  break;
 case 2048000:
 case 4096000:
 case 8192000:
 case 3200000:
 case 6400000:
 case 12800000:
  VAR_13->constraints = &VAR_5;
  break;
 case 2822000:
 case 5644800:
 case 11289600:
 case 16934400:
 case 22579200:
 case 33868800:
 case 4410000:
 case 8820000:
 case 17640000:
  VAR_13->constraints = &VAR_6;
  break;
 case 3072000:
 case 6144000:
 case 38864000:
 case 4800000:
 case 9600000:
 case 19200000:
  VAR_13->constraints = &VAR_7;
  break;
 case 12288000:
 case 16384000:
 case 24576000:
  VAR_13->constraints = &VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_13->sysclk = VAR_11;

 return FUNC_0(VAR_13->regmap, VAR_2,
   VAR_1, VAR_14);
}
