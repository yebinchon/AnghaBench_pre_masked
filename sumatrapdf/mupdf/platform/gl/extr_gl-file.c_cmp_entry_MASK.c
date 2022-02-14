
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {char* name; scalar_t__ is_dir; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct entry *VAR_2 = VAR_0;
 const struct entry *VAR_3 = VAR_1;

 if (VAR_2->name[0] == '.' && VAR_2->name[1] == 0) return -1;
 if (VAR_3->name[0] == '.' && VAR_3->name[1] == 0) return 1;

 if (VAR_2->name[0] == '.' && VAR_2->name[1] == '.' && VAR_2->name[2] == 0) return -1;
 if (VAR_3->name[0] == '.' && VAR_3->name[1] == '.' && VAR_3->name[2] == 0) return 1;

 if (VAR_2->is_dir && !VAR_3->is_dir) return -1;
 if (VAR_3->is_dir && !VAR_2->is_dir) return 1;

 return FUNC_0(VAR_2->name, VAR_3->name);
}
