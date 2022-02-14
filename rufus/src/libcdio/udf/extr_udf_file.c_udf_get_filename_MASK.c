
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* psz_name; } ;
typedef TYPE_1__ udf_dirent_t ;



const char *
FUNC_0(const udf_dirent_t *VAR_0)
{
  if (!VAR_0) return ((void*)0);
  if (!VAR_0->psz_name) return "..";
  return VAR_0->psz_name;
}
