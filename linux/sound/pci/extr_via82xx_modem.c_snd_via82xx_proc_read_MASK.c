
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via82xx_modem {scalar_t__ port; TYPE_1__* card; } ;
struct snd_info_entry {struct via82xx_modem* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_2__ {int longname; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0, struct snd_info_buffer *VAR_1)
{
 struct via82xx_modem *VAR_2 = VAR_0->private_data;
 int VAR_3;

 FUNC_1(VAR_1, "%s\n\n", VAR_2->card->longname);
 for (VAR_3 = 0; VAR_3 < 0xa0; VAR_3 += 4) {
  FUNC_1(VAR_1, "%02x: %08x\n", VAR_3, FUNC_0(VAR_2->port + VAR_3));
 }
}
