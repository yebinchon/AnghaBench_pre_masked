
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (struct file*,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__,int ) ;
 char* FUNC_4 (char*,int ) ;
 char* FUNC_5 (char*,int ) ;

char *FUNC_6(struct file *VAR_2, gfp_t VAR_3)
{
 char *VAR_4, *VAR_5;

 if (!VAR_2)
  return FUNC_4("<unknown>", VAR_3);


 VAR_4 = FUNC_3(VAR_1 + 11, VAR_0);
 if (!VAR_4)
  return FUNC_4("<no_memory>", VAR_3);

 VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_1 + 11);
 if (FUNC_0(VAR_5))
  VAR_5 = FUNC_4("<too_long>", VAR_3);
 else
  VAR_5 = FUNC_5(VAR_5, VAR_3);

 FUNC_2(VAR_4);
 return VAR_5;
}
