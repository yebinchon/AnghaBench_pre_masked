
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int udf_fileid_desc_t ;
struct TYPE_3__ {int fid; } ;
typedef TYPE_1__ udf_dirent_t ;


 int FUNC_0 (int *,int ,int) ;

bool FUNC_1(const udf_dirent_t *VAR_0,
                  udf_fileid_desc_t *VAR_1)
{

  if (!VAR_0) return 0;
  if (!VAR_0->fid) {

    return 0;
  }
  FUNC_0(VAR_1, VAR_0->fid, sizeof(udf_fileid_desc_t));
  return 1;
}
