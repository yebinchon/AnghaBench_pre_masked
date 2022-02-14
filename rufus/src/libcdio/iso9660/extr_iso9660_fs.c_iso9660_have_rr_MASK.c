
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int iso9660_t ;
typedef char iso9660_stat_t ;
typedef int bool_3way_t ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char**,int *) ;
 int VAR_2 ;
 char* FUNC_3 (char*) ;

extern bool_3way_t
FUNC_4(iso9660_t *VAR_3, uint64_t VAR_4)
{
  iso9660_stat_t *VAR_5;
  char *VAR_6[2] = {FUNC_3("/"), FUNC_3("")};
  bool_3way_t VAR_7 = VAR_2;

  if (!VAR_3) return 0;

  VAR_5 = FUNC_0 (VAR_3);
  if (!VAR_5) return VAR_1;

  if (VAR_4 == 0) VAR_4 = VAR_0;

  VAR_7 = FUNC_2 (VAR_3, VAR_5, VAR_6, &VAR_4);
  FUNC_1(VAR_5);
  FUNC_1(VAR_6[0]);
  FUNC_1(VAR_6[1]);

  return VAR_7;
}
