
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int bytes; int addr; int * area; } ;
struct TYPE_4__ {TYPE_2__ etram_pages; } ;
struct snd_emu10k1 {int emu_lock; scalar_t__ port; TYPE_1__ fx8010; int pci; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_emu10k1*,int ,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct snd_emu10k1 *VAR_6, u32 VAR_7)
{
 u8 VAR_8 = 0;


 if (VAR_7 != 0) {
  VAR_7 = (VAR_7 - 1) >> 13;

  while (VAR_7) {
   VAR_7 >>= 1;
   VAR_8++;
  }
  VAR_7 = 0x2000 << VAR_8;
 }
 if ((VAR_6->fx8010.etram_pages.bytes / 2) == VAR_7)
  return 0;
 FUNC_7(&VAR_6->emu_lock);
 FUNC_2(VAR_2 | FUNC_0(VAR_6->port + VAR_1), VAR_6->port + VAR_1);
 FUNC_8(&VAR_6->emu_lock);
 FUNC_6(VAR_6, VAR_4, 0, 0);
 FUNC_6(VAR_6, VAR_5, 0, 0);
 if (VAR_6->fx8010.etram_pages.area != ((void*)0)) {
  FUNC_4(&VAR_6->fx8010.etram_pages);
  VAR_6->fx8010.etram_pages.area = ((void*)0);
  VAR_6->fx8010.etram_pages.bytes = 0;
 }

 if (VAR_7 > 0) {
  if (FUNC_3(VAR_3, FUNC_5(VAR_6->pci),
     VAR_7 * 2, &VAR_6->fx8010.etram_pages) < 0)
   return -VAR_0;
  FUNC_1(VAR_6->fx8010.etram_pages.area, 0, VAR_7 * 2);
  FUNC_6(VAR_6, VAR_4, 0, VAR_6->fx8010.etram_pages.addr);
  FUNC_6(VAR_6, VAR_5, 0, VAR_8);
  FUNC_7(&VAR_6->emu_lock);
  FUNC_2(FUNC_0(VAR_6->port + VAR_1) & ~VAR_2, VAR_6->port + VAR_1);
  FUNC_8(&VAR_6->emu_lock);
 }

 return 0;
}
