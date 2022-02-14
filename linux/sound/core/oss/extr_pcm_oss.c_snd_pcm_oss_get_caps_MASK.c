
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_oss_file *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_3 | VAR_1 | VAR_0 | VAR_2;
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  struct snd_pcm_substream *VAR_7 = VAR_4->streams[VAR_6];
  VAR_5 = FUNC_0(VAR_7, VAR_5);
 }
 VAR_5 |= 0x0001;
 return VAR_5;
}
