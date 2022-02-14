
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * area; } ;
struct viadev {unsigned int tbl_entries; unsigned int bufsize; int bufsize2; TYPE_2__* idx_table; TYPE_1__ table; } ;
struct via82xx_modem {int pci; } ;
struct snd_pcm_substream {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {unsigned int offset; unsigned int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,char*) ;
 TYPE_2__* FUNC_3 (int,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (struct snd_pcm_substream*,unsigned int) ;
 struct via82xx_modem* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct viadev *VAR_8, struct snd_pcm_substream *VAR_9,
      struct pci_dev *VAR_10,
      unsigned int VAR_11, unsigned int VAR_12)
{
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
 struct via82xx_modem *VAR_17 = FUNC_7(VAR_9);

 if (VAR_8->table.area == ((void*)0)) {



  if (FUNC_4(VAR_4, FUNC_5(VAR_17->pci),
     FUNC_0(VAR_5 * 2 * 8),
     &VAR_8->table) < 0)
   return -VAR_1;
 }
 if (! VAR_8->idx_table) {
  VAR_8->idx_table = FUNC_3(VAR_5,
            sizeof(*VAR_8->idx_table),
            VAR_2);
  if (! VAR_8->idx_table)
   return -VAR_1;
 }


 VAR_14 = 0;
 VAR_15 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_16 = VAR_12;




  do {
   unsigned int VAR_18;
   unsigned int VAR_19;
   unsigned int VAR_20;

   if (VAR_14 >= VAR_5) {
    FUNC_2(&VAR_10->dev, "too much table size!\n");
    return -VAR_0;
   }
   VAR_20 = FUNC_6(VAR_9, VAR_15);
   ((u32 *)VAR_8->table.area)[VAR_14 << 1] = FUNC_1(VAR_20);
   VAR_18 = VAR_3 - (VAR_15 % VAR_3);
   if (VAR_16 < VAR_18)
    VAR_18 = VAR_16;
   VAR_16 -= VAR_18;
   if (! VAR_16) {
    if (VAR_13 == VAR_11 - 1)
     VAR_19 = VAR_6;
    else
     VAR_19 = VAR_7;
   } else
    VAR_19 = 0;





   ((u32 *)VAR_8->table.area)[(VAR_14<<1) + 1] = FUNC_1(VAR_18 | VAR_19);
   VAR_8->idx_table[VAR_14].offset = VAR_15;
   VAR_8->idx_table[VAR_14].size = VAR_18;
   VAR_15 += VAR_18;
   VAR_14++;
  } while (VAR_16 > 0);
 }
 VAR_8->tbl_entries = VAR_14;
 VAR_8->bufsize = VAR_11 * VAR_12;
 VAR_8->bufsize2 = VAR_8->bufsize / 2;
 return 0;
}
