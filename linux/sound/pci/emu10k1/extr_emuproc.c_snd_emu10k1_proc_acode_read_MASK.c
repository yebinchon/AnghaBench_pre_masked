
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_info_entry {struct snd_emu10k1* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct snd_emu10k1 {scalar_t__ audigy; TYPE_1__ fx8010; } ;


 int FUNC_0 (struct snd_emu10k1*,int) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0,
            struct snd_info_buffer *VAR_1)
{
 u32 VAR_2;
 struct snd_emu10k1 *VAR_3 = VAR_0->private_data;

 FUNC_1(VAR_1, "FX8010 Instruction List '%s'\n", VAR_3->fx8010.name);
 FUNC_1(VAR_1, "  Code dump      :\n");
 for (VAR_2 = 0; VAR_2 < (VAR_3->audigy ? 1024 : 512); VAR_2++) {
  u32 VAR_4, VAR_5;

  VAR_4 = FUNC_0(VAR_3, VAR_2 * 2);
  VAR_5 = FUNC_0(VAR_3, VAR_2 * 2 + 1);
  if (VAR_3->audigy)
   FUNC_1(VAR_1, "    OP(0x%02x, 0x%03x, 0x%03x, 0x%03x, 0x%03x) /* 0x%04x: 0x%08x%08x */\n",
        (VAR_5 >> 24) & 0x0f,
        (VAR_5 >> 12) & 0x7ff,
        (VAR_5 >> 0) & 0x7ff,
        (VAR_4 >> 12) & 0x7ff,
        (VAR_4 >> 0) & 0x7ff,
        VAR_2,
        VAR_5, VAR_4);
  else
   FUNC_1(VAR_1, "    OP(0x%02x, 0x%03x, 0x%03x, 0x%03x, 0x%03x) /* 0x%04x: 0x%08x%08x */\n",
        (VAR_5 >> 20) & 0x0f,
        (VAR_5 >> 10) & 0x3ff,
        (VAR_5 >> 0) & 0x3ff,
        (VAR_4 >> 10) & 0x3ff,
        (VAR_4 >> 0) & 0x3ff,
        VAR_2,
        VAR_5, VAR_4);
 }
}
