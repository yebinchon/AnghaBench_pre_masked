
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int num_ports; int cpu_port; } ;


 int FUNC_0 (struct rtl8366_smi*,int) ;
 int FUNC_1 (struct rtl8366_smi*) ;
 int FUNC_2 (struct rtl8366_smi*,int,int) ;
 int FUNC_3 (struct rtl8366_smi*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct rtl8366_smi *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; VAR_1++) {
  u32 VAR_3;

  if (VAR_1 == VAR_0->cpu_port)
   VAR_3 = (1 << VAR_0->num_ports) - 1;
  else
   VAR_3 = (1 << VAR_1) | (1 << VAR_0->cpu_port);

  VAR_2 = FUNC_3(VAR_0, (VAR_1 + 1), VAR_3, VAR_3, 0);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_2(VAR_0, VAR_1, (VAR_1 + 1));
  if (VAR_2)
   return VAR_2;
 }

 return FUNC_0(VAR_0, 1);
}
