
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct davinci_mcbsp_dev {int pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct davinci_mcbsp_dev*,int ) ;
 int FUNC_1 (struct davinci_mcbsp_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct davinci_mcbsp_dev *VAR_7,
  struct snd_pcm_substream *VAR_8)
{
 int VAR_9 = (VAR_8->stream == VAR_6);
 u32 VAR_10;
 u32 VAR_11 = VAR_9 ? VAR_5 : VAR_4;


 VAR_10 = FUNC_0(VAR_7, VAR_3);
 VAR_10 |= VAR_11;

 if (VAR_7->pcr & (VAR_1 | VAR_0)) {

  VAR_10 |= VAR_2;
 }
 FUNC_1(VAR_7, VAR_3, VAR_10);
}
