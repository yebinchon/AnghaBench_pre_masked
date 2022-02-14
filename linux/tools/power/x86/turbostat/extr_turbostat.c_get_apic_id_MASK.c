
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {unsigned int apic_id; unsigned int x2apic_id; int cpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_3(struct thread_data *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;

 if (FUNC_0(VAR_0)) {
  VAR_10 = VAR_11 = VAR_12 = VAR_13 = 0;
  FUNC_1(1, VAR_10, VAR_11, VAR_12, VAR_13);

  VAR_9->apic_id = (VAR_11 >> 24) & 0xff;
 }

 if (!FUNC_0(VAR_1))
  return;

 if (VAR_2 || VAR_5) {
  unsigned int VAR_14;

  if (VAR_6 < 0x8000001e)
   return;

  VAR_10 = VAR_11 = VAR_12 = VAR_13 = 0;
  FUNC_1(0x80000001, VAR_10, VAR_11, VAR_12, VAR_13);
   VAR_14 = VAR_12 & (1 << 22);

  if (VAR_14 == 0)
   return;

  VAR_10 = VAR_11 = VAR_12 = VAR_13 = 0;
  FUNC_1(0x8000001e, VAR_10, VAR_11, VAR_12, VAR_13);

  VAR_9->x2apic_id = VAR_10;
  return;
 }

 if (!VAR_4)
  return;

 if (VAR_7 < 0xb)
  return;

 VAR_12 = 0;
 FUNC_1(0xb, VAR_10, VAR_11, VAR_12, VAR_13);
 VAR_9->x2apic_id = VAR_13;

 if (VAR_3 && (VAR_9->apic_id != (VAR_9->x2apic_id & 0xff)))
  FUNC_2(VAR_8, "cpu%d: BIOS BUG: apic 0x%x x2apic 0x%x\n",
    VAR_9->cpu_id, VAR_9->apic_id, VAR_9->x2apic_id);
}
