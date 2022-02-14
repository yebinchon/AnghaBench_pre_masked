
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsn_t ;
typedef int iso9660_t ;
typedef int iso9660_stat_t ;
typedef int iso9660_readdir_t ;


 int * FUNC_0 (int *,int *,char*,int ,char**) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;

iso9660_stat_t *
FUNC_2(iso9660_t *VAR_1, lsn_t VAR_2)
{
  char *VAR_3 = ((void*)0);
  iso9660_stat_t *VAR_4 =
    FUNC_0 (VAR_1, (iso9660_readdir_t *) VAR_0,
        "/", VAR_2, &VAR_3);
  if (VAR_3 != ((void*)0))
    FUNC_1(VAR_3);
  return VAR_4;
}
