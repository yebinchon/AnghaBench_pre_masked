
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsn_t ;
typedef int driver_return_code_t ;
struct TYPE_4__ {int (* read_audio_sectors ) (int ,void*,int ,int) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,int ,int) ;

driver_return_code_t
FUNC_2 (const CdIo_t *VAR_1, void *VAR_2, lsn_t VAR_3)
{
  FUNC_0(VAR_3);
  if (VAR_1->op.read_audio_sectors)
    return VAR_1->op.read_audio_sectors (VAR_1->env, VAR_2, VAR_3, 1);
  return VAR_0;
}
