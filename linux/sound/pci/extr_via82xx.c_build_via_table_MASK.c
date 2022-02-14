
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * area; } ;
struct viadev {unsigned int tbl_entries; unsigned int bufsize; int bufsize2; unsigned int fragsize; TYPE_2__* idx_table; TYPE_1__ table; } ;
struct via82xx {int pci; } ;
struct snd_pcm_substream {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {unsigned int offset; unsigned int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,char*) ;
 TYPE_2__* FUNC_3 (int,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (struct snd_pcm_substream*,unsigned int) ;
 unsigned int FUNC_7 (struct snd_pcm_substream*,unsigned int,unsigned int) ;
 struct via82xx* FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct viadev *VAR_7, struct snd_pcm_substream *VAR_8,
      struct pci_dev *VAR_9,
      unsigned int VAR_10, unsigned int VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;
 struct via82xx *VAR_16 = FUNC_8(VAR_8);

 if (VAR_7->table.area == ((void*)0)) {



  if (FUNC_4(VAR_3, FUNC_5(VAR_16->pci),
     FUNC_0(VAR_4 * 2 * 8),
     &VAR_7->table) < 0)
   return -VAR_1;
 }
 if (! VAR_7->idx_table) {
  VAR_7->idx_table = FUNC_3(VAR_4,
            sizeof(*VAR_7->idx_table),
            VAR_2);
  if (! VAR_7->idx_table)
   return -VAR_1;
 }


 VAR_13 = 0;
 VAR_14 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_15 = VAR_11;




  do {
   unsigned int VAR_17;
   unsigned int VAR_18;
   unsigned int VAR_19;

   if (VAR_13 >= VAR_4) {
    FUNC_2(&VAR_9->dev, "too much table size!\n");
    return -VAR_0;
   }
   VAR_19 = FUNC_6(VAR_8, VAR_14);
   ((u32 *)VAR_7->table.area)[VAR_13 << 1] = FUNC_1(VAR_19);
   VAR_17 = FUNC_7(VAR_8, VAR_14, VAR_15);
   VAR_15 -= VAR_17;
   if (! VAR_15) {
    if (VAR_12 == VAR_10 - 1)
     VAR_18 = VAR_5;
    else
     VAR_18 = VAR_6;
   } else
    VAR_18 = 0;





   ((u32 *)VAR_7->table.area)[(VAR_13<<1) + 1] = FUNC_1(VAR_17 | VAR_18);
   VAR_7->idx_table[VAR_13].offset = VAR_14;
   VAR_7->idx_table[VAR_13].size = VAR_17;
   VAR_14 += VAR_17;
   VAR_13++;
  } while (VAR_15 > 0);
 }
 VAR_7->tbl_entries = VAR_13;
 VAR_7->bufsize = VAR_10 * VAR_11;
 VAR_7->bufsize2 = VAR_7->bufsize / 2;
 VAR_7->fragsize = VAR_11;
 return 0;
}
