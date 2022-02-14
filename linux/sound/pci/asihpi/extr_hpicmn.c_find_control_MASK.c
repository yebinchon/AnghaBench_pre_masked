
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hpi_control_cache_info {size_t control_type; } ;
struct hpi_control_cache {struct hpi_control_cache_info** p_info; } ;


 int FUNC_0 (int ,char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct hpi_control_cache*) ;

__attribute__((used)) static short FUNC_2(u16 VAR_1,
 struct hpi_control_cache *VAR_2, struct hpi_control_cache_info **VAR_3)
{
 if (!FUNC_1(VAR_2)) {
  FUNC_0(VAR_0,
   "control_cache_alloc_check() failed %d\n",
   VAR_1);
  return 0;
 }

 *VAR_3 = VAR_2->p_info[VAR_1];
 if (!*VAR_3) {
  FUNC_0(VAR_0, "Uncached Control %d\n",
   VAR_1);
  return 0;
 } else {
  FUNC_0(VAR_0, "find_control() type %d\n",
   (*VAR_3)->control_type);
 }
 return 1;
}
