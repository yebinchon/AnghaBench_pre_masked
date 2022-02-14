
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_m3 {int iobase; TYPE_1__* pci; } ;
struct TYPE_2__ {int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_m3 *VAR_7, int VAR_8)
{
 int VAR_9 = VAR_7->iobase;
 u16 VAR_10;

 VAR_8 = VAR_8 ? 1 : 0;

 VAR_10 = FUNC_0(VAR_9 + VAR_2) & ~VAR_5;

 if (VAR_7->pci->subsystem_vendor == 0x1028 &&
     VAR_7->pci->subsystem_device == 0x00e5)
  VAR_10 |= VAR_1;
 FUNC_1(VAR_10 | VAR_8, VAR_9 + VAR_2);
 FUNC_1((FUNC_0(VAR_9 + VAR_4) & ~VAR_0) | VAR_8,
      VAR_9 + VAR_4);
 FUNC_1((FUNC_0(VAR_9 + VAR_3) & ~VAR_6) | VAR_8,
      VAR_9 + VAR_3);
}
