
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_dbri* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_dbri {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_4,
      struct snd_info_buffer *VAR_5)
{
 struct snd_dbri *VAR_6 = VAR_4->private_data;

 FUNC_1(VAR_5, "REG0: 0x%x\n", FUNC_0(VAR_6->regs + VAR_0));
 FUNC_1(VAR_5, "REG2: 0x%x\n", FUNC_0(VAR_6->regs + VAR_1));
 FUNC_1(VAR_5, "REG8: 0x%x\n", FUNC_0(VAR_6->regs + VAR_2));
 FUNC_1(VAR_5, "REG9: 0x%x\n", FUNC_0(VAR_6->regs + VAR_3));
}
