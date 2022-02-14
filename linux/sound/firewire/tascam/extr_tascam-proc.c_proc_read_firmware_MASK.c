
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tscm {int unit; } ;
struct snd_info_entry {struct snd_tscm* private_data; } ;
struct snd_info_buffer {int dummy; } ;
typedef int data ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int *,int,int ) ;
 int FUNC_2 (struct snd_info_buffer*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_6,
          struct snd_info_buffer *VAR_7)
{
 struct snd_tscm *VAR_8 = VAR_6->private_data;
 __be32 VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_8->unit, VAR_0,
   VAR_1 + VAR_5,
   &VAR_9, sizeof(VAR_9), 0);
 if (VAR_14 < 0)
  return;
 VAR_10 = FUNC_0(VAR_9);

 VAR_14 = FUNC_1(VAR_8->unit, VAR_0,
   VAR_1 + VAR_3,
   &VAR_9, sizeof(VAR_9), 0);
 if (VAR_14 < 0)
  return;
 VAR_11 = FUNC_0(VAR_9);

 VAR_14 = FUNC_1(VAR_8->unit, VAR_0,
   VAR_1 + VAR_2,
   &VAR_9, sizeof(VAR_9), 0);
 if (VAR_14 < 0)
  return;
 VAR_12 = FUNC_0(VAR_9);

 VAR_14 = FUNC_1(VAR_8->unit, VAR_0,
   VAR_1 + VAR_4,
   &VAR_9, sizeof(VAR_9), 0);
 if (VAR_14 < 0)
  return;
 VAR_13 = FUNC_0(VAR_9);

 FUNC_2(VAR_7, "Register: %d (0x%08x)\n", VAR_10 & 0xffff, VAR_10);
 FUNC_2(VAR_7, "FPGA:     %d (0x%08x)\n", VAR_11 & 0xffff, VAR_11);
 FUNC_2(VAR_7, "ARM:      %d (0x%08x)\n", VAR_12 & 0xffff, VAR_12);
 FUNC_2(VAR_7, "Hardware: %d (0x%08x)\n", VAR_13 >> 16, VAR_13);
}
