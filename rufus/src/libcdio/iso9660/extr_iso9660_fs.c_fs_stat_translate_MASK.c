
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * (* stat_traverse_t ) (void*,int *,char**) ;
typedef int * (* stat_root_t ) (void*) ;
typedef int iso9660_stat_t ;


 int FUNC_0 (char**) ;
 char** FUNC_1 (char const*,char) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static iso9660_stat_t *
FUNC_3 (void *VAR_0, stat_root_t VAR_1,
     stat_traverse_t VAR_2,
     const char VAR_3[])
{
  iso9660_stat_t *VAR_4;
  char **VAR_5;
  iso9660_stat_t *VAR_6;

  if (!VAR_0) return ((void*)0);
  if (!VAR_3) return ((void*)0);

  VAR_4 = VAR_1 (VAR_0);
  if (!VAR_4) return ((void*)0);

  VAR_5 = FUNC_1 (VAR_3, '/');
  VAR_6 = VAR_2 (VAR_0, VAR_4, VAR_5);
  FUNC_2(VAR_4);
  FUNC_0 (VAR_5);

  return VAR_6;
}
