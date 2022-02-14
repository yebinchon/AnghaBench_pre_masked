
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;
struct func_map {char const* func; } ;


 struct func_map* FUNC_0 (struct tep_handle*,unsigned long long) ;

const char *FUNC_1(struct tep_handle *VAR_0, unsigned long long VAR_1)
{
 struct func_map *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 return VAR_2->func;
}
