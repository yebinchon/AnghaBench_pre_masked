
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {scalar_t__ capture_substream; scalar_t__ playback_substream; } ;
struct snd_opti9xx {struct snd_wss* codec; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct snd_wss*,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;
 unsigned char FUNC_3 (struct snd_opti9xx*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct snd_wss*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct snd_opti9xx *VAR_6 = VAR_5;
 struct snd_wss *VAR_7 = VAR_6->codec;
 unsigned char VAR_8;

 if (!VAR_7)
  return VAR_0;

 VAR_8 = FUNC_3(VAR_6, FUNC_1(11));
 if ((VAR_8 & VAR_2) && VAR_7->playback_substream)
  FUNC_4(VAR_7->playback_substream);
 if ((VAR_8 & VAR_1) && VAR_7->capture_substream) {
  FUNC_5(VAR_7);
  FUNC_4(VAR_7->capture_substream);
 }
 FUNC_2(0x00, FUNC_0(VAR_7, VAR_3));
 return VAR_0;
}
