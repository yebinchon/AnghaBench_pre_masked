
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_trident_memblk_arg {int dummy; } ;
struct TYPE_8__ {unsigned long addr; scalar_t__ area; } ;
struct TYPE_6__ {unsigned long* shadow_entries; TYPE_3__* memhdr; TYPE_4__ silent_page; int * entries; TYPE_4__ buffer; scalar_t__ entries_dmaaddr; } ;
struct snd_trident {TYPE_2__ tlb; TYPE_1__* card; int pci; } ;
typedef int __le32 ;
struct TYPE_7__ {int block_extra_size; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int,TYPE_4__*) ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int) ;
 unsigned long* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct snd_trident *VAR_4)
{
 int VAR_5;




 if (FUNC_5(VAR_1, FUNC_6(VAR_4->pci),
    2 * VAR_2 * 4, &VAR_4->tlb.buffer) < 0) {
  FUNC_3(VAR_4->card->dev, "unable to allocate TLB buffer\n");
  return -VAR_0;
 }
 VAR_4->tlb.entries = (__le32 *)FUNC_0((unsigned long)VAR_4->tlb.buffer.area, VAR_2 * 4);
 VAR_4->tlb.entries_dmaaddr = FUNC_0(VAR_4->tlb.buffer.addr, VAR_2 * 4);

 VAR_4->tlb.shadow_entries =
  FUNC_8(FUNC_1(VAR_2,
       sizeof(unsigned long)));
 if (!VAR_4->tlb.shadow_entries)
  return -VAR_0;


 if (FUNC_5(VAR_1, FUNC_6(VAR_4->pci),
    VAR_3, &VAR_4->tlb.silent_page) < 0) {
  FUNC_3(VAR_4->card->dev, "unable to allocate silent page\n");
  return -VAR_0;
 }
 FUNC_4(VAR_4->tlb.silent_page.area, 0, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->tlb.entries[VAR_5] = FUNC_2(VAR_4->tlb.silent_page.addr & ~(VAR_3-1));
  VAR_4->tlb.shadow_entries[VAR_5] = (unsigned long)VAR_4->tlb.silent_page.area;
 }


 VAR_4->tlb.memhdr = FUNC_7(VAR_3 * VAR_2);
 if (VAR_4->tlb.memhdr == ((void*)0))
  return -VAR_0;

 VAR_4->tlb.memhdr->block_extra_size = sizeof(struct snd_trident_memblk_arg);
 return 0;
}
