
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct intel8x0m* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct intel8x0m {scalar_t__ device_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (struct intel8x0m*,int ) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry * VAR_6,
       struct snd_info_buffer *VAR_7)
{
 struct intel8x0m *VAR_8 = VAR_6->private_data;
 unsigned int VAR_9;

 FUNC_2(VAR_7, "Intel8x0m\n\n");
 if (VAR_8->device_type == VAR_0)
  return;
 VAR_9 = FUNC_1(VAR_8, FUNC_0(VAR_2));
 FUNC_2(VAR_7, "Global control        : 0x%08x\n",
      FUNC_1(VAR_8, FUNC_0(VAR_1)));
 FUNC_2(VAR_7, "Global status         : 0x%08x\n", VAR_9);
 FUNC_2(VAR_7, "AC'97 codecs ready    :%s%s%s%s\n",
   VAR_9 & VAR_3 ? " primary" : "",
   VAR_9 & VAR_4 ? " secondary" : "",
   VAR_9 & VAR_5 ? " tertiary" : "",
   (VAR_9 & (VAR_3 | VAR_4 | VAR_5)) == 0 ? " none" : "");
}
