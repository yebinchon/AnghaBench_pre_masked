
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ edid_max_size; } ;
struct mdev_state {char* edid_blob; TYPE_1__ edid_regs; } ;


 int FUNC_0 (char*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mdev_state *VAR_0, u16 VAR_1,
        char *VAR_2, u32 VAR_3, bool VAR_4)
{
 if (VAR_1 + VAR_3 > VAR_0->edid_regs.edid_max_size)
  return;
 if (VAR_4)
  FUNC_0(VAR_0->edid_blob + VAR_1, VAR_2, VAR_3);
 else
  FUNC_0(VAR_2, VAR_0->edid_blob + VAR_1, VAR_3);
}
