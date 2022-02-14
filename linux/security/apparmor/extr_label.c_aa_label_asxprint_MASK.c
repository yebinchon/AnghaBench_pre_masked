
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ns {int dummy; } ;
struct aa_label {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,struct aa_ns*,struct aa_label*,int) ;
 char* FUNC_2 (int,int ) ;

int FUNC_3(char **VAR_1, struct aa_ns *VAR_2, struct aa_label *VAR_3,
        int VAR_4, gfp_t VAR_5)
{
 int VAR_6;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_3);

 VAR_6 = FUNC_1(((void*)0), 0, VAR_2, VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_1 = FUNC_2(VAR_6 + 1, VAR_5);
 if (!*VAR_1)
  return -VAR_0;
 return FUNC_1(*VAR_1, VAR_6 + 1, VAR_2, VAR_3, VAR_4);
}
