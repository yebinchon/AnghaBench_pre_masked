
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct lola* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct lola {TYPE_1__* bar; } ;
struct TYPE_2__ {scalar_t__ remap_addr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lola*,int,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_8,
    struct snd_info_buffer *VAR_9)
{
 struct lola *VAR_10 = VAR_8->private_data;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < 0x40; VAR_11 += 4) {
  FUNC_2(VAR_9, "BAR0 %02x: %08x\n", VAR_11,
       FUNC_1(VAR_10->bar[VAR_0].remap_addr + VAR_11));
 }
 FUNC_2(VAR_9, "\n");
 for (VAR_11 = 0; VAR_11 < 0x30; VAR_11 += 4) {
  FUNC_2(VAR_9, "BAR1 %02x: %08x\n", VAR_11,
       FUNC_1(VAR_10->bar[VAR_1].remap_addr + VAR_11));
 }
 FUNC_2(VAR_9, "\n");
 for (VAR_11 = 0x80; VAR_11 < 0xa0; VAR_11 += 4) {
  FUNC_2(VAR_9, "BAR1 %02x: %08x\n", VAR_11,
       FUNC_1(VAR_10->bar[VAR_1].remap_addr + VAR_11));
 }
 FUNC_2(VAR_9, "\n");
 for (VAR_11 = 0; VAR_11 < 32; VAR_11++) {
  FUNC_2(VAR_9, "DSD %02x STS  %08x\n", VAR_11,
       FUNC_0(VAR_10, VAR_11, VAR_7));
  FUNC_2(VAR_9, "DSD %02x LPIB %08x\n", VAR_11,
       FUNC_0(VAR_10, VAR_11, VAR_5));
  FUNC_2(VAR_9, "DSD %02x CTL  %08x\n", VAR_11,
       FUNC_0(VAR_10, VAR_11, VAR_4));
  FUNC_2(VAR_9, "DSD %02x LVIL %08x\n", VAR_11,
       FUNC_0(VAR_10, VAR_11, VAR_6));
  FUNC_2(VAR_9, "DSD %02x BDPL %08x\n", VAR_11,
       FUNC_0(VAR_10, VAR_11, VAR_2));
  FUNC_2(VAR_9, "DSD %02x BDPU %08x\n", VAR_11,
       FUNC_0(VAR_10, VAR_11, VAR_3));
 }
}
