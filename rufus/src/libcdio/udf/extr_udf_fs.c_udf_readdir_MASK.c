
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_16__ {int i_part_start; scalar_t__ i_position; } ;
typedef TYPE_5__ udf_t ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_15__ {int i_imp_use; TYPE_3__ imp_use; } ;
struct TYPE_12__ {int lba; } ;
struct TYPE_13__ {TYPE_1__ loc; } ;
struct TYPE_17__ {int i_file_id; int file_characteristics; TYPE_4__ u; TYPE_2__ icb; int tag; } ;
typedef TYPE_6__ udf_fileid_desc_t ;
struct TYPE_18__ {scalar_t__ dir_left; int i_loc_end; int i_loc; int i_part_start; int b_dir; int b_parent; int psz_name; TYPE_6__* fid; int fe; int * sector; TYPE_5__* p_udf; } ;
typedef TYPE_7__ udf_dirent_t ;
typedef scalar_t__ driver_return_code_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int *,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned int const) ;

udf_dirent_t *
FUNC_7(udf_dirent_t *VAR_5)
{
  udf_t *VAR_6;
  uint8_t* VAR_7;

  if (VAR_5->dir_left <= 0) {
    FUNC_3(VAR_5);
    return ((void*)0);
  }


  VAR_6 = VAR_5->p_udf;
  VAR_6->i_position = 0;

  if (VAR_5->fid) {


    uint32_t VAR_8 = 4 *
      ((sizeof(*(VAR_5->fid)) + VAR_5->fid->u.i_imp_use
 + VAR_5->fid->i_file_id + 3) / 4);

    VAR_5->fid =
      (udf_fileid_desc_t *)((uint8_t *)VAR_5->fid + VAR_8);
  }

  if (!VAR_5->fid) {
    uint32_t VAR_9 =
      (VAR_5->i_loc_end - VAR_5->i_loc + 1);
    uint32_t VAR_10 = VAR_2 * VAR_9;
    driver_return_code_t VAR_11;

    if (!VAR_5->sector)
      VAR_5->sector = (uint8_t*) FUNC_1(VAR_10);
    VAR_11 = FUNC_4(VAR_6, VAR_5->sector,
        VAR_5->i_part_start+VAR_5->i_loc,
        VAR_9);
    if (VAR_0 == VAR_11)
      VAR_5->fid = (udf_fileid_desc_t *) VAR_5->sector;
    else
      VAR_5->fid = ((void*)0);
  }

  if (VAR_5->fid && !FUNC_2(&(VAR_5->fid->tag), VAR_1))
    {
      uint32_t VAR_12 =
 4 * ((sizeof(*VAR_5->fid) + VAR_5->fid->u.i_imp_use
       + VAR_5->fid->i_file_id + 3) / 4);

      VAR_5->dir_left -= VAR_12;
      VAR_5->b_dir =
 (VAR_5->fid->file_characteristics & VAR_3) != 0;
      VAR_5->b_parent =
 (VAR_5->fid->file_characteristics & VAR_4) != 0;

      {
 const unsigned int VAR_13 = VAR_5->fid->i_file_id;

 if (VAR_0 != FUNC_4(VAR_6, &VAR_5->fe, VAR_6->i_part_start
    + FUNC_5(VAR_5->fid->icb.loc.lba), 1)) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

       FUNC_0(VAR_5->psz_name);
       VAR_7 = (uint8_t*)VAR_5->fid->u.imp_use.data + VAR_5->fid->u.i_imp_use;
       VAR_5->psz_name = FUNC_6(VAR_7, VAR_13);
      }
      return VAR_5;
    }
  FUNC_3(VAR_5);
  return ((void*)0);
}
