
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mdev_state {int* vconfig; int bar_mask; int memsize; TYPE_1__* type; } ;
struct TYPE_2__ {int format; int width; int height; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct mdev_state *VAR_26)
{
 FUNC_0((u16 *) &VAR_26->vconfig[VAR_25],
     VAR_5);
 FUNC_0((u16 *) &VAR_26->vconfig[VAR_20],
     VAR_2);
 FUNC_0((u16 *) &VAR_26->vconfig[VAR_24],
     VAR_4);
 FUNC_0((u16 *) &VAR_26->vconfig[VAR_23],
     VAR_3);

 FUNC_0((u16 *) &VAR_26->vconfig[VAR_17],
     VAR_18 | VAR_19);
 FUNC_0((u16 *) &VAR_26->vconfig[VAR_21],
     VAR_22);
 FUNC_0((u16 *) &VAR_26->vconfig[VAR_14],
     VAR_15);
 VAR_26->vconfig[VAR_16] = 0x01;

 FUNC_1((u32 *) &VAR_26->vconfig[VAR_9],
     VAR_12 |
     VAR_11 |
     VAR_10);
 VAR_26->bar_mask = ~(VAR_26->memsize) + 1;


 VAR_26->vconfig[VAR_13] = VAR_6;
 VAR_26->vconfig[VAR_6 + 0] = 0x09;
 VAR_26->vconfig[VAR_6 + 1] = 0x00;
 VAR_26->vconfig[VAR_6 + 2] = VAR_7;
 FUNC_1((u32 *) &VAR_26->vconfig[VAR_0],
     VAR_26->type->format);
 FUNC_1((u32 *) &VAR_26->vconfig[VAR_8],
     VAR_26->type->width);
 FUNC_1((u32 *) &VAR_26->vconfig[VAR_1],
     VAR_26->type->height);
}
