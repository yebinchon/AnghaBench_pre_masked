
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ display; int cl_output; int cl_resort; int cl_sort; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*,char const*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 TYPE_1__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_5, bool VAR_6)
{
 const char *VAR_7 = VAR_5 ?: VAR_4;

 if (FUNC_0(&VAR_3.cl_sort, "offset,%s", VAR_7) < 0)
  return -VAR_2;

 if (FUNC_1(VAR_3.cl_sort, VAR_6))
  return -1;

 if (FUNC_0(&VAR_3.cl_resort, "offset,%s",
       VAR_3.display == VAR_1 ?
       "tot_hitm" :
       VAR_3.display == VAR_0 ?
       "rmt_hitm,lcl_hitm" :
       "lcl_hitm,rmt_hitm") < 0)
  return -VAR_2;

 FUNC_2("coalesce sort   fields: %s\n", VAR_3.cl_sort);
 FUNC_2("coalesce resort fields: %s\n", VAR_3.cl_resort);
 FUNC_2("coalesce output fields: %s\n", VAR_3.cl_output);
 return 0;
}
