
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct davinci_mcbsp_dev {int pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct davinci_mcbsp_dev*,int ) ;
 int FUNC_1 (struct davinci_mcbsp_dev*,int) ;
 int FUNC_2 (struct davinci_mcbsp_dev*,int ,int) ;
 struct davinci_mcbsp_dev* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (struct davinci_mcbsp_dev*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_9,
  struct snd_soc_dai *VAR_10)
{
 struct davinci_mcbsp_dev *VAR_11 = FUNC_3(VAR_10);
 int VAR_12 = (VAR_9->stream == VAR_8);
 u32 VAR_13;
 u32 VAR_14 = VAR_12 ? VAR_7 : VAR_6;

 FUNC_1(VAR_11, VAR_12);

 VAR_13 = FUNC_0(VAR_11, VAR_5);
 if (VAR_13 & VAR_14) {

  FUNC_2(VAR_11, VAR_5,
     VAR_13 & ~VAR_14);
  FUNC_4(VAR_11, VAR_12);
 }
 if (VAR_11->pcr & (VAR_3 | VAR_2 |
   VAR_1 | VAR_0)) {

  VAR_13 |= VAR_4;
  FUNC_2(VAR_11, VAR_5, VAR_13);
 }

 if (VAR_12) {

  VAR_13 = FUNC_0(VAR_11, VAR_5);
  VAR_13 |= VAR_7;
  FUNC_2(VAR_11, VAR_5, VAR_13);


  FUNC_5(100);


  VAR_13 = FUNC_0(VAR_11, VAR_5);
  VAR_13 &= ~VAR_7;
  FUNC_2(VAR_11, VAR_5, VAR_13);
  FUNC_4(VAR_11, VAR_12);
 }

 return 0;
}
