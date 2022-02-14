
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int udf_file_entry_t ;
struct TYPE_3__ {int fe; } ;
typedef TYPE_1__ udf_dirent_t ;


 int FUNC_0 (int *,int *,int) ;

bool
FUNC_1(const udf_dirent_t *VAR_0,
             udf_file_entry_t *VAR_1)
{
  if (!VAR_0) return 0;
  FUNC_0(VAR_1, &VAR_0->fe, sizeof(udf_file_entry_t));
  return 1;
}
