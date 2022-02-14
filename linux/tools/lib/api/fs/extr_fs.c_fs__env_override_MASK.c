
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {int found; int path; int name; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static bool FUNC_6(struct fs *VAR_0)
{
 char *VAR_1;
 size_t VAR_2 = FUNC_4(VAR_0->name);

 char VAR_3[VAR_2 + 5 + 1];
 FUNC_2(VAR_3, VAR_0->name, VAR_2);
 FUNC_1(VAR_3, VAR_2);
 FUNC_3(&VAR_3[VAR_2], "_PATH");

 VAR_1 = FUNC_0(VAR_3);
 if (!VAR_1)
  return 0;

 VAR_0->found = 1;
 FUNC_5(VAR_0->path, VAR_1, sizeof(VAR_0->path));
 return 1;
}
