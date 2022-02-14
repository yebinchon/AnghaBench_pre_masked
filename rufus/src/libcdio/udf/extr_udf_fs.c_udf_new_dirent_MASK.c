
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_part_start; } ;
typedef TYPE_1__ udf_t ;
struct TYPE_10__ {int info_len; } ;
typedef TYPE_2__ udf_file_entry_t ;
struct TYPE_11__ {int b_dir; int b_parent; int i_loc_end; int i_loc; int fe; int dir_left; int i_part_start; TYPE_1__* p_udf; int psz_name; } ;
typedef TYPE_3__ udf_dirent_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static udf_dirent_t *
FUNC_5(udf_file_entry_t *VAR_0, udf_t *VAR_1,
        const char *VAR_2, bool VAR_3, bool VAR_4)
{
  udf_dirent_t *VAR_5 = (udf_dirent_t *)
    FUNC_0(1, sizeof(udf_dirent_t));
  if (!VAR_5) return ((void*)0);

  VAR_5->psz_name = FUNC_2(VAR_2);
  VAR_5->b_dir = VAR_3;
  VAR_5->b_parent = VAR_4;
  VAR_5->p_udf = VAR_1;
  VAR_5->i_part_start = VAR_1->i_part_start;
  VAR_5->dir_left = FUNC_4(VAR_0->info_len);

  FUNC_1(&(VAR_5->fe), VAR_0,
  sizeof(udf_file_entry_t));
  FUNC_3( VAR_0, &(VAR_5->i_loc),
        &(VAR_5->i_loc_end) );
  return VAR_5;
}
