
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* qsort_arg_comparator ) (char*,char*,void*) ;



__attribute__((used)) static char *
FUNC_0(char *VAR_0, char *VAR_1, char *VAR_2, qsort_arg_comparator VAR_3, void *VAR_4)
{
 return VAR_3(VAR_0, VAR_1, VAR_4) < 0 ?
  (VAR_3(VAR_1, VAR_2, VAR_4) < 0 ? VAR_1 : (VAR_3(VAR_0, VAR_2, VAR_4) < 0 ? VAR_2 : VAR_0))
  : (VAR_3(VAR_1, VAR_2, VAR_4) > 0 ? VAR_1 : (VAR_3(VAR_0, VAR_2, VAR_4) < 0 ? VAR_0 : VAR_2));
}
