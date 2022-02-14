
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long log2_inop; long long log2_bsize; } ;
struct grub_xfs_data {long long agsize; TYPE_1__ sblock; } ;
typedef long long grub_uint64_t ;


 long long VAR_0 ;
 long long FUNC_0 (struct grub_xfs_data*,long long) ;
 long long FUNC_1 (struct grub_xfs_data*,long long) ;

__attribute__((used)) static inline grub_uint64_t
FUNC_2 (struct grub_xfs_data *VAR_1,
        grub_uint64_t VAR_2)
{
  long long int VAR_3 = FUNC_1 (VAR_1, VAR_2);
  long long VAR_4 = FUNC_0 (VAR_1, VAR_2);
  long long VAR_5;

  VAR_5 = (VAR_3 >> VAR_1->sblock.log2_inop) + VAR_4 * VAR_1->agsize;
  VAR_5 <<= (VAR_1->sblock.log2_bsize - VAR_0);
  return VAR_5;
}
