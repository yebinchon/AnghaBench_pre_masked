
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mdev_state {TYPE_1__* region_info; scalar_t__ vconfig; } ;
struct TYPE_2__ {int start; int size; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct mdev_state *VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9;

 VAR_6 = VAR_0;

 for (VAR_5 = 0; VAR_5 <= VAR_3; VAR_5++) {

  if (!VAR_4->region_info[VAR_5].size)
   continue;

  VAR_7 = (*(u32 *)(VAR_4->vconfig + VAR_6)) &
   VAR_1;
  VAR_9 = (*(u32 *)(VAR_4->vconfig + VAR_6)) &
   VAR_2;

  switch (VAR_9) {
  case 128:
   VAR_8 = (*(u32 *)(VAR_4->vconfig + VAR_6 + 4));
   VAR_6 += 4;
   break;
  case 129:
  case 130:

  default:

   VAR_8 = 0;
   break;
  }
  VAR_6 += 4;
  VAR_4->region_info[VAR_5].start = ((u64)VAR_8 << 32) |
       VAR_7;
 }
}
