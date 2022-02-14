
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_cs46xx {scalar_t__ acpi_port; scalar_t__ amplifier; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_cs46xx *VAR_0, int VAR_1)
{
 u16 VAR_2, VAR_3;

 if (!VAR_0->acpi_port)
  return;

 VAR_0->amplifier += VAR_1;


 VAR_3 = VAR_2 = FUNC_0(VAR_0->acpi_port + 0x10);


 if (! VAR_0->amplifier)
  VAR_3 |= 0x2000;
 else
  VAR_3 &= ~0x2000;
 if (VAR_3 != VAR_2)
  FUNC_1(VAR_3, VAR_0->acpi_port + 0x10);
}
