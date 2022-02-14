
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* d; } ;
struct TYPE_4__ {TYPE_1__ raw8; } ;
struct snd_seq_event {scalar_t__ type; TYPE_2__ data; } ;
struct snd_emux_port {struct snd_emux* emu; } ;
struct snd_emux {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct snd_emux*,struct snd_emux_port*,unsigned char,unsigned char*,int,int) ;
 int FUNC_1 (struct snd_emux*,struct snd_emux_port*,unsigned char,unsigned char*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_seq_event*,int,void*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct snd_seq_event *VAR_4, int VAR_5, void *VAR_6,
    int VAR_7, int VAR_8)
{
 struct snd_emux *VAR_9;
 struct snd_emux_port *VAR_10;
 unsigned char VAR_11, *VAR_12;

 VAR_10 = VAR_6;
 if (FUNC_2(!VAR_10))
  return -VAR_0;
 VAR_9 = VAR_10->emu;
 if (FUNC_2(!VAR_9))
  return -VAR_0;
 if (VAR_4->type != VAR_1)
  return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 VAR_12 = VAR_4->data.raw8.d;

 if (VAR_12[0] != 0xfe)
  return 0;
 VAR_11 = VAR_12[2] & VAR_3;
 if (VAR_12[2] & VAR_2)
  FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_7, VAR_8);
 else
  FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12, VAR_7, VAR_8);
 return 0;
}
