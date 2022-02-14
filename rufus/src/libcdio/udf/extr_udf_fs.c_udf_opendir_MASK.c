
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ i_part_start; } ;
typedef TYPE_5__ udf_t ;
struct TYPE_17__ {scalar_t__ file_type; } ;
struct TYPE_20__ {TYPE_3__ icb_tag; int tag; } ;
typedef TYPE_6__ udf_file_entry_t ;
struct TYPE_21__ {int psz_name; TYPE_4__* fid; TYPE_5__* p_udf; int b_parent; scalar_t__ b_dir; } ;
typedef TYPE_7__ udf_dirent_t ;
typedef scalar_t__ driver_return_code_t ;
struct TYPE_15__ {scalar_t__ lba; } ;
struct TYPE_16__ {TYPE_1__ loc; } ;
struct TYPE_18__ {TYPE_2__ icb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 TYPE_7__* FUNC_1 (TYPE_6__*,TYPE_5__*,int ,int,int) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_6__*,scalar_t__,int) ;

udf_dirent_t *
FUNC_3(const udf_dirent_t *VAR_3)
{
  if (VAR_3->b_dir && !VAR_3->b_parent && VAR_3->fid) {
    udf_t *VAR_4 = VAR_3->p_udf;
    udf_file_entry_t VAR_5;

    driver_return_code_t VAR_6 =
      FUNC_2(VAR_4, &VAR_5, VAR_4->i_part_start
         + VAR_3->fid->icb.loc.lba, 1);

    if (VAR_0 == VAR_6
 && !FUNC_0(&VAR_5.tag, VAR_2)) {

      if (VAR_1 == VAR_5.icb_tag.file_type) {
 udf_dirent_t *VAR_7 =
   FUNC_1(&VAR_5, VAR_4, VAR_3->psz_name, 1, 1);
 return VAR_7;
      }
    }
  }
  return ((void*)0);
}
