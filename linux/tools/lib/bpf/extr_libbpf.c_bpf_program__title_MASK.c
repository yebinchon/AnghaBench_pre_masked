
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {char* section_name; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;

const char *FUNC_3(const struct bpf_program *VAR_1, bool VAR_2)
{
 const char *VAR_3;

 VAR_3 = VAR_1->section_name;
 if (VAR_2) {
  VAR_3 = FUNC_2(VAR_3);
  if (!VAR_3) {
   FUNC_1("failed to strdup program title\n");
   return FUNC_0(-VAR_0);
  }
 }

 return VAR_3;
}
