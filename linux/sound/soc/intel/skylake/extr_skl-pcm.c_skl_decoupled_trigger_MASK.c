
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hdac_stream {int prepared; } ;
struct hdac_ext_stream {int dummy; } ;
struct hdac_bus {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;






 struct hdac_bus* FUNC_0 (struct snd_pcm_substream*) ;
 struct hdac_ext_stream* FUNC_1 (struct snd_pcm_substream*) ;
 struct hdac_stream* FUNC_2 (struct hdac_ext_stream*) ;
 int FUNC_3 (struct hdac_stream*,int) ;
 int FUNC_4 (struct hdac_stream*) ;
 int FUNC_5 (struct hdac_stream*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_2,
  int VAR_3)
{
 struct hdac_bus *VAR_4 = FUNC_0(VAR_2);
 struct hdac_ext_stream *VAR_5;
 int VAR_6;
 unsigned long VAR_7;
 struct hdac_stream *VAR_8;

 VAR_5 = FUNC_1(VAR_2);
 VAR_8 = FUNC_2(VAR_5);

 if (!VAR_8->prepared)
  return -VAR_1;

 switch (VAR_3) {
 case 130:
 case 132:
 case 131:
  VAR_6 = 1;
  break;

 case 133:
 case 128:
 case 129:
  VAR_6 = 0;
  break;

 default:
  return -VAR_0;
 }

 FUNC_6(&VAR_4->reg_lock, VAR_7);

 if (VAR_6) {
  FUNC_3(FUNC_2(VAR_5), 1);
  FUNC_5(VAR_8, 0);
 } else {
  FUNC_4(FUNC_2(VAR_5));
 }

 FUNC_7(&VAR_4->reg_lock, VAR_7);

 return 0;
}
