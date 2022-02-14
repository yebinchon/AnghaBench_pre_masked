
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {scalar_t__ name; scalar_t__ is_dir; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct tomoyo_path_info*) ;

__attribute__((used)) static void FUNC_2(struct tomoyo_path_info *VAR_0)
{
 if (VAR_0->is_dir)
  return;



 FUNC_0((char *) VAR_0->name, "/");
 FUNC_1(VAR_0);
}
