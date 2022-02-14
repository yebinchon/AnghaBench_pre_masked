
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mdev_state {int* vconfig; int* bar_mask; int memsize; } ;
typedef int MBOCHS_MMIO_BAR_SIZE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct mdev_state *VAR_17)
{
 FUNC_0((u16 *) &VAR_17->vconfig[VAR_16],
     0x1234);
 FUNC_0((u16 *) &VAR_17->vconfig[VAR_11],
     0x1111);
 FUNC_0((u16 *) &VAR_17->vconfig[VAR_14],
     VAR_15);
 FUNC_0((u16 *) &VAR_17->vconfig[VAR_13],
     VAR_12);

 FUNC_0((u16 *) &VAR_17->vconfig[VAR_8],
     VAR_9 | VAR_10);
 FUNC_0((u16 *) &VAR_17->vconfig[VAR_5],
     VAR_6);
 VAR_17->vconfig[VAR_7] = 0x01;

 FUNC_1((u32 *) &VAR_17->vconfig[VAR_0],
     VAR_4 |
     VAR_3 |
     VAR_2);
 VAR_17->bar_mask[0] = ~(VAR_17->memsize) + 1;

 FUNC_1((u32 *) &VAR_17->vconfig[VAR_1],
     VAR_4 |
     VAR_3);
 VAR_17->bar_mask[2] = ~(MBOCHS_MMIO_BAR_SIZE) + 1;
}
