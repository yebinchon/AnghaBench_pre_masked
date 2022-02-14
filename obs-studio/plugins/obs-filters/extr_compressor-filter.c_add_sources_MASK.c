
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sidechain_prop_info {int sources; int * parent; } ;
typedef int obs_source_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char const*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(void *VAR_1, obs_source_t *VAR_2)
{
 struct sidechain_prop_info *VAR_3 = VAR_1;
 uint32_t VAR_4 = FUNC_2(VAR_2);

 if (VAR_2 == VAR_3->parent)
  return 1;
 if ((VAR_4 & VAR_0) == 0)
  return 1;

 const char *VAR_5 = FUNC_1(VAR_2);
 FUNC_0(VAR_3->sources, VAR_5, VAR_5);
 return 1;
}
