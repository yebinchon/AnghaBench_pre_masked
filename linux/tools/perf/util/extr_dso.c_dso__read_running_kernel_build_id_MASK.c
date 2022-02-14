
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {char* root_dir; } ;
struct dso {int has_build_id; int build_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct machine*) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,int ,int) ;

void FUNC_3(struct dso *VAR_1, struct machine *VAR_2)
{
 char VAR_3[VAR_0];

 if (FUNC_0(VAR_2))
  return;
 FUNC_1(VAR_3, "%s/sys/kernel/notes", VAR_2->root_dir);
 if (FUNC_2(VAR_3, VAR_1->build_id,
     sizeof(VAR_1->build_id)) == 0)
  VAR_1->has_build_id = 1;
}
