
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lsn_t ;
typedef int driver_return_code_t ;
struct TYPE_5__ {int * read_mode2_sectors; int (* read_mode2_sector ) (int ,void*,int ,int) ;} ;
struct TYPE_6__ {TYPE_1__ op; int env; } ;
typedef TYPE_2__ CdIo_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,void*,int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int ,int) ;

driver_return_code_t
FUNC_3 (const CdIo_t *VAR_1, void *VAR_2, lsn_t VAR_3,
                        bool VAR_4)
{
  FUNC_1(VAR_3);
  if (VAR_1->op.read_mode2_sector)
    return VAR_1->op.read_mode2_sector (VAR_1->env, VAR_2, VAR_3, VAR_4);


  if (VAR_1->op.read_mode2_sectors != ((void*)0))
    return FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4, 1);
  return VAR_0;
}
