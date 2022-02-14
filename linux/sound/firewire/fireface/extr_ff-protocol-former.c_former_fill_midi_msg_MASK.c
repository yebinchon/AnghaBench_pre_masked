
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_rawmidi_substream {int dummy; } ;
struct snd_ff {int* rx_bytes; int ** msg_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_rawmidi_substream*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_ff *VAR_1,
    struct snd_rawmidi_substream *VAR_2,
    unsigned int VAR_3)
{
 u8 *VAR_4 = (u8 *)VAR_1->msg_buf[VAR_3];
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_4,
     VAR_0);
 if (VAR_5 <= 0)
  return VAR_5;


 for (VAR_6 = VAR_5 - 1; VAR_6 >= 0; --VAR_6)
  VAR_1->msg_buf[VAR_3][VAR_6] = FUNC_0(VAR_4[VAR_6]);
 VAR_1->rx_bytes[VAR_3] = VAR_5;

 return VAR_5;
}
