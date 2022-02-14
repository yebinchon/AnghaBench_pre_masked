
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_virmidi_dev {int flags; } ;
struct snd_seq_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_virmidi_dev*,struct snd_seq_event*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_seq_event *VAR_1, int VAR_2,
       void *VAR_3, int VAR_4, int VAR_5)
{
 struct snd_virmidi_dev *VAR_6;

 VAR_6 = VAR_3;
 if (!(VAR_6->flags & VAR_0))
  return 0;
 return FUNC_0(VAR_6, VAR_1, VAR_4);
}
