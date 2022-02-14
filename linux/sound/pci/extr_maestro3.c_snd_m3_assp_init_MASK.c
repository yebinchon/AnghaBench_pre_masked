
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int max; int mem_addr; scalar_t__ curlen; } ;
struct TYPE_11__ {int mem_addr; int max; scalar_t__ curlen; } ;
struct TYPE_10__ {int max; int mem_addr; scalar_t__ curlen; } ;
struct TYPE_9__ {int max; int mem_addr; scalar_t__ curlen; } ;
struct snd_m3 {TYPE_6__ msrc_list; TYPE_5__ dma_list; TYPE_4__ adc1_list; TYPE_3__ mixer_list; TYPE_2__* assp_minisrc_image; TYPE_1__* assp_kernel_image; } ;
typedef int __le16 ;
struct TYPE_8__ {unsigned int size; scalar_t__ data; } ;
struct TYPE_7__ {unsigned int size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int const) ;
 int* VAR_23 ;
 int FUNC_1 (struct snd_m3*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_m3 *VAR_24)
{
 unsigned int VAR_25;
 const __le16 *VAR_26;


 for (VAR_25 = 0; VAR_25 < (VAR_22 * VAR_20) / 2; VAR_25++)
  FUNC_1(VAR_24, VAR_17,
      VAR_2 + VAR_25, 0);


 for (VAR_25 = 0; VAR_25 < (VAR_22 * VAR_20) / 2; VAR_25++)
  FUNC_1(VAR_24, VAR_17,
      VAR_3 + VAR_25, 0);


 FUNC_1(VAR_24, VAR_17,
     VAR_4,
     VAR_7);


 VAR_26 = (const __le16 *)VAR_24->assp_kernel_image->data;
 for (VAR_25 = 0 ; VAR_25 * 2 < VAR_24->assp_kernel_image->size; VAR_25++) {
  FUNC_1(VAR_24, VAR_16,
      VAR_21 + VAR_25,
      FUNC_0(VAR_26[VAR_25]));
 }







 VAR_26 = (const __le16 *)VAR_24->assp_minisrc_image->data;
 for (VAR_25 = 0; VAR_25 * 2 < VAR_24->assp_minisrc_image->size; VAR_25++) {
  FUNC_1(VAR_24, VAR_16,
      0x400 + VAR_25, FUNC_0(VAR_26[VAR_25]));
 }




 for (VAR_25 = 0; VAR_25 < VAR_19 ; VAR_25++) {
  FUNC_1(VAR_24, VAR_16,
      0x400 + VAR_18 + VAR_25,
      VAR_23[VAR_25]);
 }

 FUNC_1(VAR_24, VAR_16,
     0x400 + VAR_18 + VAR_19,
     0x8000);





 FUNC_1(VAR_24, VAR_17,
     VAR_11,
     0x400);





 FUNC_1(VAR_24, VAR_17,
     VAR_9,0);




 FUNC_1(VAR_24, VAR_17,
     VAR_5, VAR_0);
 FUNC_1(VAR_24, VAR_17,
     VAR_6, VAR_0);

 VAR_24->mixer_list.curlen = 0;
 VAR_24->mixer_list.mem_addr = VAR_10;
 VAR_24->mixer_list.max = VAR_15;
 VAR_24->adc1_list.curlen = 0;
 VAR_24->adc1_list.mem_addr = VAR_1;
 VAR_24->adc1_list.max = VAR_13;
 VAR_24->dma_list.curlen = 0;
 VAR_24->dma_list.mem_addr = VAR_7;
 VAR_24->dma_list.max = VAR_14;
 VAR_24->msrc_list.curlen = 0;
 VAR_24->msrc_list.mem_addr = VAR_8;
 VAR_24->msrc_list.max = VAR_12;
}
