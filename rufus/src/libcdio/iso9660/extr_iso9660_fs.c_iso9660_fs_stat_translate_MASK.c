
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stat_traverse_t ;
typedef int stat_root_t ;
typedef int iso9660_stat_t ;
typedef int CdIo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,int *,int *,char const*) ;

iso9660_stat_t *
FUNC_1 (CdIo_t *VAR_2, const char VAR_3[])
{
  return FUNC_0(VAR_2, (stat_root_t *) VAR_0,
      (stat_traverse_t *) VAR_1,
      VAR_3);
}
