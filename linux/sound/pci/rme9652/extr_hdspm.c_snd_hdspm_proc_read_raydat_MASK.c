
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct hdspm* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct hdspm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdspm*) ;
 unsigned int FUNC_1 (struct hdspm*,int ) ;
 scalar_t__ FUNC_2 (struct hdspm*) ;
 int FUNC_3 (struct snd_info_buffer*,char*,...) ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct snd_info_entry *VAR_4,
    struct snd_info_buffer *VAR_5)
{
 struct hdspm *VAR_6 = VAR_4->private_data;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_8 = FUNC_1(VAR_6, VAR_1);
 VAR_9 = FUNC_1(VAR_6, VAR_2);

 FUNC_3(VAR_5, "STATUS1: 0x%08x\n", VAR_7);
 FUNC_3(VAR_5, "STATUS2: 0x%08x\n", VAR_8);
 FUNC_3(VAR_5, "STATUS3: 0x%08x\n", VAR_9);


 FUNC_3(VAR_5, "\n*** CLOCK MODE\n\n");

 FUNC_3(VAR_5, "Clock mode      : %s\n",
  (FUNC_2(VAR_6) == 0) ? "master" : "slave");
 FUNC_3(VAR_5, "System frequency: %d Hz\n",
  FUNC_0(VAR_6));

 FUNC_3(VAR_5, "\n*** INPUT STATUS\n\n");

 VAR_11 = 0x1;
 VAR_12 = 0x100;

 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  FUNC_3(VAR_5, "s1_input %d: Lock %d, Sync %d, Freq %s\n",
    VAR_10,
    (VAR_7 & VAR_11) ? 1 : 0,
    (VAR_7 & VAR_12) ? 1 : 0,
    VAR_3[(VAR_8 >> (VAR_10 * 4)) & 0xF]);

  VAR_11 = VAR_11<<1;
  VAR_12 = VAR_12<<1;
 }

 FUNC_3(VAR_5, "WC input: Lock %d, Sync %d, Freq %s\n",
   (VAR_7 & 0x1000000) ? 1 : 0,
   (VAR_7 & 0x2000000) ? 1 : 0,
   VAR_3[(VAR_7 >> 16) & 0xF]);

 FUNC_3(VAR_5, "TCO input: Lock %d, Sync %d, Freq %s\n",
   (VAR_7 & 0x4000000) ? 1 : 0,
   (VAR_7 & 0x8000000) ? 1 : 0,
   VAR_3[(VAR_7 >> 20) & 0xF]);

 FUNC_3(VAR_5, "SYNC IN: Lock %d, Sync %d, Freq %s\n",
   (VAR_9 & 0x400) ? 1 : 0,
   (VAR_9 & 0x800) ? 1 : 0,
   VAR_3[(VAR_8 >> 12) & 0xF]);

}
