
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(int VAR_3, char *VAR_4[])
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, "subpage_prot_anon");
 if (VAR_5)
  return VAR_5;

 if (VAR_3 > 1)
  VAR_0 = VAR_4[1];
 else
  VAR_0 = "tempfile";

 return FUNC_0(VAR_2, "subpage_prot_file");
}
