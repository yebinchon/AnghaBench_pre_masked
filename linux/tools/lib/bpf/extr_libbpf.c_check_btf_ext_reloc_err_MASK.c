
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int section_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int ,...) ;

__attribute__((used)) static int
FUNC_1(struct bpf_program *VAR_1, int VAR_2,
   void *VAR_3, const char *VAR_4)
{
 if (VAR_2 != -VAR_0) {
  FUNC_0("Error in loading %s for sec %s.\n",
      VAR_4, VAR_1->section_name);
  return VAR_2;
 }



 if (VAR_3) {




  FUNC_0("Error in relocating %s for sec %s.\n",
      VAR_4, VAR_1->section_name);
  return VAR_2;
 }


 FUNC_0("Cannot find %s for main program sec %s. Ignore all %s.\n",
     VAR_4, VAR_1->section_name, VAR_4);
 return 0;
}
