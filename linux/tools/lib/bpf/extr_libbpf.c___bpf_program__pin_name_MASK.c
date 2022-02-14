
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int section_name; } ;


 char* FUNC_0 (char*,char) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static char *FUNC_2(struct bpf_program *VAR_0)
{
 char *VAR_1, *VAR_2;

 VAR_1 = VAR_2 = FUNC_1(VAR_0->section_name);
 while ((VAR_2 = FUNC_0(VAR_2, '/')))
  *VAR_2 = '_';

 return VAR_1;
}
