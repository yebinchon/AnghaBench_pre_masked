
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swsusp_info {scalar_t__ num_physpages; } ;


 int VAR_0 ;
 char* FUNC_0 (struct swsusp_info*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct swsusp_info *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2 && VAR_1->num_physpages != FUNC_1())
  VAR_2 = "memory size";
 if (VAR_2) {
  FUNC_2("Image mismatch: %s\n", VAR_2);
  return -VAR_0;
 }
 return 0;
}
