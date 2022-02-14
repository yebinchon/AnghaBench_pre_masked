
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_entry {struct lola* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct lola {int lola_caps; TYPE_2__* pin; TYPE_1__* pcm; } ;
struct TYPE_4__ {int num_pins; } ;
struct TYPE_3__ {int num_streams; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (struct lola*,int,int ,unsigned int*) ;
 int FUNC_3 (struct snd_info_buffer*,struct lola*,int,char*) ;
 int FUNC_4 (struct snd_info_buffer*,struct lola*,int) ;
 int FUNC_5 (struct snd_info_buffer*,struct lola*,int) ;
 int FUNC_6 (struct snd_info_buffer*,struct lola*,int,int ,char*) ;
 int FUNC_7 (struct snd_info_buffer*,char*,int,...) ;

__attribute__((used)) static void FUNC_8(struct snd_info_entry *VAR_7,
     struct snd_info_buffer *VAR_8)
{
 struct lola *VAR_9 = VAR_7->private_data;
 unsigned int VAR_10;
 int VAR_11, VAR_12;

 FUNC_2(VAR_9, 0, VAR_5, &VAR_10);
 FUNC_7(VAR_8, "Vendor: 0x%08x\n", VAR_10);
 FUNC_2(VAR_9, 1, VAR_3, &VAR_10);
 FUNC_7(VAR_8, "Function Type: %d\n", VAR_10);
 FUNC_2(VAR_9, 1, VAR_4, &VAR_10);
 FUNC_7(VAR_8, "Specific-Caps: 0x%08x\n", VAR_10);
 FUNC_7(VAR_8, "  Pins-In %d, Pins-Out %d\n",
      VAR_9->pin[VAR_0].num_pins, VAR_9->pin[VAR_6].num_pins);
 VAR_12 = 2;
 for (VAR_11 = 0; VAR_11 < VAR_9->pcm[VAR_0].num_streams; VAR_11++, VAR_12++)
  FUNC_3(VAR_8, VAR_9, VAR_12, "[Audio-In]");
 for (VAR_11 = 0; VAR_11 < VAR_9->pcm[VAR_6].num_streams; VAR_11++, VAR_12++)
  FUNC_3(VAR_8, VAR_9, VAR_12, "[Audio-Out]");
 for (VAR_11 = 0; VAR_11 < VAR_9->pin[VAR_0].num_pins; VAR_11++, VAR_12++)
  FUNC_6(VAR_8, VAR_9, VAR_12, VAR_1,
     "[Pin-In]");
 for (VAR_11 = 0; VAR_11 < VAR_9->pin[VAR_6].num_pins; VAR_11++, VAR_12++)
  FUNC_6(VAR_8, VAR_9, VAR_12, VAR_2,
     "[Pin-Out]");
 if (FUNC_0(VAR_9->lola_caps)) {
  FUNC_4(VAR_8, VAR_9, VAR_12);
  VAR_12++;
 }
 if (FUNC_1(VAR_9->lola_caps)) {
  FUNC_5(VAR_8, VAR_9, VAR_12);
  VAR_12++;
 }
}
