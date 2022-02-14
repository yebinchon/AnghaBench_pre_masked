
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iso9660_t ;
typedef int iso9660_stat_t ;


 int FUNC_0 (char**) ;
 char** FUNC_1 (char const*,char) ;
 int * FUNC_2 (int *,int *,char**) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

iso9660_stat_t *
FUNC_5 (iso9660_t *VAR_0, const char VAR_1[])
{
  iso9660_stat_t *VAR_2;
  char **VAR_3;
  iso9660_stat_t *VAR_4;

  if (!VAR_0) return ((void*)0);
  if (!VAR_1) return ((void*)0);

  VAR_2 = FUNC_3 (VAR_0);
  if (!VAR_2) return ((void*)0);

  VAR_3 = FUNC_1 (VAR_1, '/');
  VAR_4 = FUNC_2 (VAR_0, VAR_2, VAR_3);
  FUNC_4(VAR_2);
  FUNC_0 (VAR_3);

  return VAR_4;
}
