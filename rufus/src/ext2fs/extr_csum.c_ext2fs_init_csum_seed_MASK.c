
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
struct TYPE_7__ {int s_uuid; int s_checksum_seed; } ;
struct TYPE_6__ {TYPE_3__* super; int csum_seed; } ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

void FUNC_4(ext2_filsys VAR_0)
{
 if (FUNC_1(VAR_0->super))
  VAR_0->csum_seed = VAR_0->super->s_checksum_seed;
 else if (FUNC_3(VAR_0->super) ||
   FUNC_2(VAR_0->super))
  VAR_0->csum_seed = FUNC_0(~0, VAR_0->super->s_uuid,
       sizeof(VAR_0->super->s_uuid));
}
