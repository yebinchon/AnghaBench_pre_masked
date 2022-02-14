
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int lsn_t ;
typedef int driver_return_code_t ;
struct TYPE_4__ {int (* read_mode1_sectors ) (int ,void*,int ,int,scalar_t__) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,void*,int ,int,scalar_t__) ;

driver_return_code_t
FUNC_2 (const CdIo_t *VAR_2, void *VAR_3, lsn_t VAR_4,
                         bool VAR_5, uint32_t VAR_6)
{
  FUNC_0(VAR_4, VAR_6);

  if (0 == VAR_6) return VAR_0;

  if (VAR_2->op.read_mode1_sectors)
    return (VAR_2->op.read_mode1_sectors) (VAR_2->env, VAR_3, VAR_4, VAR_5,
                                            VAR_6);
  return VAR_1;
}
